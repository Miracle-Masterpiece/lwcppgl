#include "mouse_impl.hpp"
#include "display_impl.hpp"
#include <lwc++gl/opengl/input/mouse.hpp>
#include <lwc++gl/lwc++gl_exceptios.hpp>

namespace lwcppgl
{

    /*static*/ inf_buf<mouse_impl::button_state, BUTTON_BUF_SIZE> mouse_impl::m_event_q;
    /*static*/ mouse_impl::button_state mouse_impl::m_current_state;
    /*static*/ int mouse_impl::m_x  = 0;
    /*static*/ int mouse_impl::m_y  = 0;
    /*static*/ int mouse_impl::m_dx = 0;
    /*static*/ int mouse_impl::m_dy = 0;
    /*static*/ int mouse_impl::m_wheel_y = 0;
    /*static*/ bool mouse_impl::m_is_created = false;
    /*static*/ bool mouse_impl::m_is_grabbed = false;    

    void mouse_impl::create() {
        m_is_created = true;
    }
    
    bool mouse_impl::is_created() {
        return m_is_created;
    }

    void mouse_impl::destroy() {
        m_is_created = false;
    }

    int mouse_impl::get_x() {
        return m_x;
    }
    
    int mouse_impl::get_y() {
        return m_y;
    }

    int mouse_impl::get_dx() {
        int dx  = m_dx;
        m_dx    = 0;
        return dx;
    }
    
    int mouse_impl::get_dy() {
        int dy  = m_dy;
        m_dy    = 0;
        return dy;
    }

    int mouse_impl::get_dwheel() {
        int val     = m_wheel_y;
        m_wheel_y   = 0;
        return val;
    }

    void mouse_impl::update() {
#ifndef NDEBUG
        if (!is_created())
            throw lwcppgl_exception("Mouse must be created!");
        if (!display_impl::is_created())
            throw lwcppgl_exception("Display must be created!");
#endif//NDEBUG
        double new_x;
        double new_y;
        glfwGetCursorPos(display_impl::get_windows_handle(), &new_x, &new_y);
        m_dx = (int) new_x - m_x;
        m_dy = (int) new_y - m_y;
        m_x = (int) new_x;
        m_y = (int) new_y;
    }

    bool mouse_impl::is_button_down(int button) {
#ifndef NDEBUG
        if (!is_created())
            throw lwcppgl_exception("Mouse must be created!");
        if (!display_impl::is_created())
            throw lwcppgl_exception("Display must be created!");
#endif//NDEBUG
        return glfwGetMouseButton(display_impl::get_windows_handle(), button) == GLFW_TRUE;
    }
    
    void mouse_impl::add_button_event(int button, bool state) {
        m_event_q.write({.m_button = button, .m_state = state});
    }
    
    void mouse_impl::add_wheel_event(int offset) {
        m_wheel_y += offset;
    }

    bool mouse_impl::next() {
#ifndef NDEBUG
        if (!is_created())
            throw lwcppgl_exception("Mouse must be created!");
#endif//NDEBUG
        if (m_event_q.can_read()) {
            m_current_state = m_event_q.read();
            return true;
        }
        return false;
    }
    
    void mouse_impl::set_cursor_position(int x, int y) {
#ifndef NDEBUG
        if (!is_created())
            throw lwcppgl_exception("Mouse must be created!");
        if (!display_impl::is_created())
            throw lwcppgl_exception("Display must be created!");
#endif//NDEBUG
        if (x < 0) 
            x = display_impl::get_width() / 2;
        if (y < 0) 
            y = display_impl::get_height() / 2;
        m_dx = 0;
        m_dy = 0;
        m_x = x;
        m_y = y;
        glfwSetCursorPos(display_impl::get_windows_handle(), (double) x, (double) y);
    }

    int mouse_impl::get_event_button() {
        return m_current_state.m_button;
    }
    
    bool mouse_impl::get_event_button_state() {
        return m_current_state.m_state;
    }

    void mouse_impl::discard_events() {
        m_event_q.clear();
    }

    void mouse_impl::set_grabbed(bool grabbed) {
#ifndef NDEBUG
        if (!is_created())
            throw lwcppgl_exception("Mouse must be created!");
        if (!display_impl::is_created())
            throw lwcppgl_exception("Display must be created!");
#endif//NDEBUG
        if (m_is_grabbed == grabbed)
            return;
        set_cursor_position(-1, -1);
        m_is_grabbed = grabbed;
        if (grabbed) {
            glfwSetInputMode(display_impl::get_windows_handle(), GLFW_CURSOR, GLFW_CURSOR_DISABLED);
        } else {
            glfwSetInputMode(display_impl::get_windows_handle(), GLFW_CURSOR, GLFW_CURSOR_NORMAL);
        }
    }

    void mouse_impl::set_icon(unsigned char* pixels, int w, int h) {
#ifndef NDEBUG
        if (!is_created())
            throw lwcppgl_exception("Mouse must be created!");
#endif//NDEBUG
        display_impl::set_cursor_icon(pixels, w, h);
    }
    
    bool mouse_impl::is_grabbed() {
        return m_is_grabbed;
    }

    /**
     * ===========================================================================================
     */

    void mouse::create() {
        mouse_impl::create();
    }

    void mouse::update() {
        mouse_impl::update();
    }
    
    void mouse::destroy() {
        mouse_impl::destroy();
    }

    bool mouse::is_created() {
        return mouse_impl::is_created();
    }

    int mouse::get_x() {
        return mouse_impl::get_x();
    }

    int mouse::get_y() {
        return mouse_impl::get_y();
    }

    int mouse::get_dx() {
        return mouse_impl::get_dx();
    }

    int mouse::get_dy() {
        return mouse_impl::get_dy();
    }

    int mouse::get_dwheel() {
        return mouse_impl::get_dwheel();
    }

    bool mouse::is_button_down(int button) {
        return mouse_impl::is_button_down(button);
    }

    bool mouse::next() {
        return mouse_impl::next();
    }
    
    int mouse::get_event_button() {
        return mouse_impl::get_event_button();
    }
    
    bool mouse::get_event_button_state() {
        return mouse_impl::get_event_button_state();
    }

    void mouse::discard_events() {
        mouse_impl::discard_events();
    }

    void mouse::set_cursor_position(int x, int y) {
        mouse_impl::set_cursor_position(x, y);
    }

    bool mouse::is_grabbed() {
        return mouse_impl::is_grabbed();
    }

    void mouse::set_grabbed(bool grabbed) {
        mouse_impl::set_grabbed(grabbed);
    }

    void mouse::set_icon(unsigned char* pixels, int w, int h) {
        mouse_impl::set_icon(pixels, w, h);
    }

    bool mouse::is_inside_window() {
        if (!display::is_focused()) 
            return false;
        int x = mouse::get_x();
        if (x < 0 || x > display::get_width()) 
            return false;
        int y = mouse::get_y();
        if (y < 0 || y > display::get_height()) 
            return false;
        return true;
    }

}// namespace lwcppgl