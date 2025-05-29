#ifndef LWCPPGL_DISPLAY_H
#define LWCPPGL_DISPLAY_H
#include <GLFW/glfw3.h>
#include "optional.hpp"
#include <lwc++gl/opengl/display.hpp>

namespace lwcppgl 
{

struct lib_init {
    bool m_init;
    void init();
    void terminate();
    bool is_init() const;
};

class display_impl {
    static const int TITLE_BUFFER = 64;
    static GLFWwindow*  m_window;
    static GLFWcursor*  m_cursor;
    static char         m_title[TITLE_BUFFER];
    static bool         m_is_created;
    static bool         m_is_resizable;
    static bool         m_is_fullscreen;
    static bool         m_focused;
    static bool         m_iconified;
    static optional<display_mode> m_desktop_display_mode;
    static display_mode m_mode;
    static int m_width, m_height;
    static int xpos, ypos;
    static lib_init     m_lib_state;

    static void resize_callback(GLFWwindow* window, int w, int h);
    static void position_callback(GLFWwindow* window, int x, int y);
    static void focus_callback(GLFWwindow* window, int focused);
    static void iconify_callback(GLFWwindow* window, int iconify);
    
    static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
    static void character_callback(GLFWwindow* window, unsigned int codepoint);

    static void button_callback(GLFWwindow* window, int button, int action, int mods);
    static void wheel_callback(GLFWwindow* window, double xoffset, double yoffset);

public:
    static void create();
    static void destroy();
    static bool is_close_requested();
    static void update();
    static void set_title(const char* title);
    static const char* get_title();
    static bool is_created();
    static void set_display_mode(const display_mode&);
    static void context_make_current();
    static int get_width();
    static int get_height();
    static int get_x();
    static int get_y();
    static bool is_resizable();
    static void set_resizable(bool resizable);
    static void set_pos(int x, int y);
    static int get_display_modes(display_mode buf[], int bufsize);
    static void set_fullscreen(bool fullscreen);
    static bool is_fullscreen();
    static void sync(int fps);
    static bool is_focused();
    static bool is_iconified();
    static const display_mode& get_desktop_display_mode();
    static GLFWwindow* get_windows_handle();
    static void set_icon(unsigned char* pixels, int w, int h);
    static void set_cursor_icon(unsigned char* pixels, int w, int h);
};

}

#endif//LWCPPGL_DISPLAY_H