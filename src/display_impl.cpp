#include <lwc++gl/opengl/display.hpp>
#include <lwc++gl/opengl/input/keyboard.hpp>
#include <lwc++gl/lwc++gl_exceptios.hpp>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <cstdio>
#include <cassert>
#include <algorithm>
#include <cstring>
#include "display_impl.hpp"
#include "keyboard_impl.h"
#include "mouse_impl.hpp"


#define ____GLFW_INIT_WITH_CHECK____            int init = glfwInit();              \
                                                if (init != GLFW_TRUE) {            \
                                                    const char* cause;              \
                                                    glfwGetError(&cause);           \
                                                    throw lwcppgl_exception(cause); \
                                                }                                   \


#define ____GLFW_TERMINATE____  glfwTerminate();

namespace lwcppgl 
{

    void lib_init::init() {
        ____GLFW_INIT_WITH_CHECK____
        m_init = true;
    }
    
    void lib_init::terminate() {
        ____GLFW_TERMINATE____
        m_init = false;
    }

    bool lib_init::is_init() const {
        return m_init;
    }

    /*static*/ GLFWwindow*  display_impl::m_window          = nullptr;
    /*static*/ GLFWcursor*  display_impl::m_cursor          = nullptr;
    /*static*/ char         display_impl::m_title[]         = {0};
    /*static*/ bool         display_impl::m_is_created      = false;
    /*static*/ bool         display_impl::m_is_resizable    = true;
    /*static*/ bool         display_impl::m_is_fullscreen   = false;
    /*static*/ bool         display_impl::m_focused         = false;
    /*static*/ bool         display_impl::m_iconified       = false;
    /*static*/ display_mode display_impl::m_mode            = {800, 600};
    /*static*/ optional<display_mode> display_impl::m_desktop_display_mode;
    /*static*/ int          display_impl::m_width           = 0;
    /*static*/ int          display_impl::m_height          = 0;
    /*static*/ int          display_impl::xpos              = -1;
    /*static*/ int          display_impl::ypos              = -1;
    /*static*/ lib_init     display_impl::m_lib_state       = {false};
    
    int display_impl::get_display_modes(display_mode buf[], int bufsize) {
        bool pre_init = m_lib_state.is_init();
        if (!pre_init)
            m_lib_state.init();
        GLFWmonitor* monitor = glfwGetPrimaryMonitor();
        assert(monitor != nullptr);

        int count = 0;
        const GLFWvidmode* modes = glfwGetVideoModes(monitor, &count);
        
        int len = std::min(count, bufsize);
        for (int i = 0; i < len; ++i) {
            const GLFWvidmode* glfw_mode = modes + i;
            buf[i] = display_mode(
                glfw_mode->width, 
                glfw_mode->height, 
                glfw_mode->refreshRate);
            buf[i].m_can_fullscreen = true;
        }
        if (!pre_init)
            m_lib_state.terminate();
        return len;
    }

    const display_mode& display_impl::get_desktop_display_mode() {
        if (!m_desktop_display_mode.is_value()) {
            
            bool init = m_lib_state.is_init();
            if (init == false)
                m_lib_state.init();
            
            const GLFWvidmode* vidmode = glfwGetVideoMode(glfwGetPrimaryMonitor());
            m_desktop_display_mode = display_mode(vidmode->width, vidmode->height, vidmode->refreshRate);
            m_desktop_display_mode->m_can_fullscreen = true;

            if (init == false)
                m_lib_state.terminate();
        }
        
        return *m_desktop_display_mode;
    }

    void display_impl::create() {
        m_lib_state.init();

        GLFWwindow* window = glfwCreateWindow(m_mode.get_width(), m_mode.get_heigth(), 
                                                m_title, 
                                                nullptr, nullptr);      

        m_width     = m_mode.get_width();
        m_height    = m_mode.get_heigth();

        glfwDefaultWindowHints();
        
        if (window == nullptr) {
            const char* cause;
            glfwGetError(&cause);
            lwcppgl_exception e(cause);
            m_lib_state.terminate();
            throw e;
        }

        m_window        = window;
        m_is_created    = true;
        m_focused       = true;
        m_iconified     = false;
        
        //display
        glfwSetWindowSizeCallback(window, resize_callback);
        glfwSetWindowPosCallback(window, position_callback);
        glfwSetWindowFocusCallback(window, focus_callback);
        glfwSetWindowIconifyCallback(window, iconify_callback);
        
        //keyboard
        glfwSetKeyCallback(window, key_callback);
        glfwSetCharCallback(window, character_callback);

        //mouse
        glfwSetMouseButtonCallback(window, button_callback);
        glfwSetScrollCallback(window, wheel_callback);

        set_resizable(m_is_resizable);
        set_pos(xpos, ypos);
        set_display_mode(m_mode);
    }

    void display_impl::resize_callback(GLFWwindow* window, int w, int h) {
        m_width     = w;
        m_height    = h;
    }

    void display_impl::position_callback(GLFWwindow* window, int x, int y) {
        xpos = x;
        ypos = y;
    }

    void display_impl::focus_callback(GLFWwindow* window, int focused) {
        m_focused = focused == GLFW_TRUE ? true : false;
    }

    void display_impl::iconify_callback(GLFWwindow* window, int iconify) {
        m_iconified = iconify == GLFW_TRUE ? true : false;
    }

    void display_impl::key_callback(GLFWwindow* window, int key, int scancode, int action, int mods) {
        if (keyboard_impl::is_created()) {
            if (!keyboard_impl::are_repeat_events_enabled() && action == GLFW_REPEAT)
                return;
            bool pressed = action == GLFW_PRESS || action == GLFW_REPEAT;
            keyboard_impl::add_key(key, pressed);
        }
    }

    void display_impl::character_callback(GLFWwindow* window, unsigned int codepoint) {
        if (keyboard_impl::is_created()) {
            keyboard_impl::add_char(codepoint);
        }
    }

    void display_impl::button_callback(GLFWwindow* window, int button, int action, int mods) {
        if (mouse_impl::is_created()) {
            mouse_impl::add_button_event(button, action == GLFW_PRESS);
        }
    }

    void display_impl::wheel_callback(GLFWwindow* window, double xoffset, double yoffset) {
        if (mouse_impl::is_created()) {
            mouse_impl::add_wheel_event((int) yoffset);
        }
    }

    int display_impl::get_width() {
        return m_width;
    }
    
    int display_impl::get_height() {
        return m_height;
    }

    int display_impl::get_x() {
        return xpos;
    }
    
    int display_impl::get_y() {
        return ypos;
    }

    void display_impl::set_pos(int x, int y) {
        if (x == -1 || y == -1) {
            const display_mode& desktop = get_desktop_display_mode();
            if (x == -1)
                x = desktop.get_width() / 2 - m_width / 2;
            if (y == -1)
                y = desktop.get_heigth() / 2 - m_height / 2;
        }
        xpos = x;
        ypos = y;
        if (is_created())
            glfwSetWindowPos(m_window, x, y);
    }

    void display_impl::context_make_current() {
#ifndef NDEBUG
        if (!is_created())
            throw lwcppgl_exception("Display must be created!");
#endif
        glfwMakeContextCurrent(m_window);
        gladLoadGL();
    }

    void display_impl::set_display_mode(const display_mode& mode) {
        m_mode = mode;
        if (is_created()) {
            glfwWindowHint(GLFW_REFRESH_RATE, mode.get_freequency());
            glfwSetWindowSize(m_window, mode.get_width(), mode.get_heigth());
        }
    }

    GLFWwindow* display_impl::get_windows_handle() {
        return m_window;
    }

    void display_impl::destroy() {
#ifndef NDEBUG
        if (!is_created())
            throw lwcppgl_exception("Display must be created!");
#endif
        glfwDestroyWindow(m_window);
        if (m_cursor != nullptr) {
            glfwDestroyCursor(m_cursor);
            m_cursor = nullptr;
        }
        m_lib_state.terminate();
        m_is_created    = false;
        m_window        = nullptr;
        xpos = -1;
        ypos = -1;
    }

    bool display_impl::is_close_requested() {
        if (!is_created())
            return true;
        return glfwWindowShouldClose(m_window);
    }

    void display_impl::update() {
#ifndef NDEBUG
        if (!is_created())
            throw lwcppgl_exception("Display must be created!");
#endif
        glfwPollEvents();
        glfwSwapBuffers(m_window);
    }
    
    void display_impl::sync(int fps) {
#ifndef NDEBUG
        if (!is_created())
            throw lwcppgl_exception("Display must be created!");
#endif  
        glfwSwapInterval(fps);
    }

    bool display_impl::is_created() {
        return m_is_created;
    }

    bool display_impl::is_resizable() {
        return m_is_resizable;
    }
    
    bool display_impl::is_focused() {
        return m_focused;
    }

    bool display_impl::is_iconified() {
#ifndef NDEBUG
        if (!is_created())
            throw lwcppgl_exception("Display must be created!");
#endif 
        return m_iconified;
    }

    void display_impl::set_resizable(bool resizable) {
        m_is_resizable = resizable;
        if (is_created())
            glfwSetWindowAttrib(m_window, GLFW_RESIZABLE, resizable ? GLFW_TRUE : GLFW_FALSE);
    }

    void display_impl::set_title(const char* title) {
        std::snprintf(m_title, sizeof(m_title), "%s", title);
        if (is_created())
            glfwSetWindowTitle(m_window, title);
    }

    void display_impl::set_fullscreen(bool fullscreen) {
#ifndef NDEBUG
        if (!is_created())
            throw lwcppgl_exception("Display must be created!");
#endif
        if (m_is_fullscreen == fullscreen || !m_mode.can_fullscreen())
            return;
        m_is_fullscreen = fullscreen;

        /**
         * Структура для хранения позиции и размера окна перед тем, как было переключение в полный экран.
         */
        static struct pre_fullscren_state {
            int w, h, x, y;
        } old_state;

        if (fullscreen) {
            old_state.w = m_width;
            old_state.h = m_height;
            old_state.x = xpos;
            old_state.y = ypos;
            GLFWmonitor* primary = glfwGetPrimaryMonitor();
            glfwSetWindowMonitor(m_window, primary, 0, 0, m_mode.get_width(), m_mode.get_heigth(), m_mode.get_freequency());        
        } else {
            glfwSetWindowMonitor(m_window, nullptr, old_state.x, old_state.y, old_state.w, old_state.h, 0);        
        }
    }
    
    void display_impl::set_icon(unsigned char* pixels, int w, int h) {
#ifndef NDEBUG
        if (!is_created())
            throw lwcppgl_exception("Display must be created!");
#endif
        if (pixels != nullptr) {
            const GLFWimage image = {.width = w, .height = h, .pixels = pixels};
            glfwSetWindowIcon(get_windows_handle(), 1, &image);
        } else {
            glfwSetWindowIcon(get_windows_handle(), 0, nullptr);
        }
    }

    void display_impl::set_cursor_icon(unsigned char* pixels, int w, int h) {
#ifndef NDEBUG
        if (!is_created())
            throw lwcppgl_exception("Display must be created!");
#endif
        if (m_cursor != nullptr)
            glfwDestroyCursor(m_cursor);        
        m_cursor = nullptr;

        if (pixels != nullptr) {
            GLFWimage image = {.width = w, .height = h, .pixels = pixels};
            m_cursor = glfwCreateCursor(&image, 0, 0);
            glfwSetCursor(m_window, m_cursor);
        }
    }

    bool display_impl::is_fullscreen() {
        return m_is_fullscreen;
    }

    const char* display_impl::get_title() {
        return m_title;
    }

/**
 * ==============================================================================================================================
 */

    void display::create() {
        display_impl::create();
    }

    void display::destroy() {
        display_impl::destroy();
    }

    bool display::is_close_requested() {
        return display_impl::is_close_requested();
    }
    
    void display::update() {
        display_impl::update();
    }

    void display::set_title(const char* title) {
        display_impl::set_title(title);
    }
    
    void display::set_icon(unsigned char* pixels, int w, int h) {
        display_impl::set_icon(pixels, w, h);
    }

    const char* display::get_title() {
        return display_impl::get_title();
    }

    void display::context_make_current() {
        display_impl::context_make_current();
    }

    int display::get_width() {
        return display_impl::get_width();
    }
    
    int display::get_height() {
        return display_impl::get_height();
    }

    void display::set_resizable(bool resizable) {
        display_impl::set_resizable(resizable);
    }
    
    bool display::is_resizable() {
        return display_impl::is_resizable();
    }

    int display::get_x() {
        return display_impl::get_x();
    }
    
    int display::get_y() {
        return display_impl::get_y();
    }

    void display::set_location(int x, int y) {
        display_impl::set_pos(x, y);
    }

    int display::get_available_display_modes(display_mode buf[], int bufsize) {
        return display_impl::get_display_modes(buf, bufsize);
    }

    void display::set_display_mode(const display_mode& mode) {
        display_impl::set_display_mode(mode);
    }

    void display::set_fullscreen(bool fullscreen) {
        return display_impl::set_fullscreen(fullscreen);
    }

    bool display::is_fullscreen() {
        return display_impl::is_fullscreen();
    }

    bool display::is_created() {
        return display_impl::is_created();
    }

    void display::sync(int fps) {
        return display_impl::sync(fps);
    }

    bool display::is_focused() {
        return display_impl::is_focused();
    }

    bool display::is_iconified() {
        return display_impl::is_iconified();
    }

    display_mode display::get_desktop_display_mode() {
        return display_impl::get_desktop_display_mode();
    }

    int display::to_string(char buf[], int bufsize) {
        return std::snprintf(buf, bufsize, "[w=%i, h=%i, x=%i, y=%i]", display_impl::get_width(), display_impl::get_height(), display::get_x(), display::get_y());
    }
    
    /**
     * ==========================================================================================================================
     */

    display_mode::display_mode() : m_w(0), m_h(0), m_refrash_rate(0), m_can_fullscreen(false) {

    }

    display_mode::display_mode(int w, int h) : display_mode(w, h, 0) {
        
    }

    display_mode::display_mode(int w, int h, int refrash) : m_w(w), m_h(h), m_refrash_rate(refrash), m_can_fullscreen(false) {
        
    }
    
    display_mode::display_mode(const display_mode& d) : 
    m_w(d.m_w), m_h(d.m_h), m_refrash_rate(d.m_refrash_rate) {
        
    }
    
    display_mode::display_mode(display_mode&& d) : display_mode(d) {

    }
    
    display_mode& display_mode::operator=(const display_mode& d) {
        if (&d != this) {
            m_w = d.m_w;
            m_h = d.m_h;
            m_refrash_rate      = d.m_refrash_rate;
            m_can_fullscreen = d.m_can_fullscreen;
        }
        return *this;
    }
    
    display_mode& display_mode::operator=(display_mode&& d) {
        if (&d != this) {
            m_w = d.m_w;
            m_h = d.m_h;
            m_refrash_rate      = d.m_refrash_rate;
            m_can_fullscreen    = d.m_can_fullscreen;
        }
        return *this;
    }
    
    int display_mode::get_width() const {
        return m_w;
    }
    
    int display_mode::get_heigth() const {
        return m_h;
    }
    
    int display_mode::get_freequency() const {
        return m_refrash_rate;
    }

    bool display_mode::can_fullscreen() const {
        return m_can_fullscreen;
    }

    int display_mode::to_string(char buf[], int buf_size) const {
        return std::snprintf(buf, buf_size, "[%ix%i @%i]", m_w, m_h, m_refrash_rate);
    }
}