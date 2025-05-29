#ifndef LWCPPGL_MOUSE_IMPL_H
#define LWCPPGL_MOUSE_IMPL_H
#include "read_write_buffer.hpp"

#define BUTTON_BUF_SIZE 64

namespace lwcppgl
{

class mouse_impl {
    friend class display_impl;
    
    struct button_state {
        int     m_button;
        bool    m_state;
    };
    
    static inf_buf<mouse_impl::button_state, BUTTON_BUF_SIZE> m_event_q;
    static button_state m_current_state;
    static int m_x;
    static int m_y;
    static int m_dx;
    static int m_dy;
    static int m_wheel_y;
    static bool m_is_created;
    static bool m_is_grabbed;

public:
    static void create();
    static void update();
    static void destroy();
    static void add_button_event(int button, bool state);
    static void add_wheel_event(int offset);
    static void discard_events();
    static void set_cursor_position(int x, int y);
    static void set_grabbed(bool grabbed);
    static void set_icon(unsigned char* pixels, int w, int h);

    static int get_x();
    static int get_y();
    static int get_dx();
    static int get_dy();
    static int get_event_button();
    static int get_dwheel();
    
    static bool is_grabbed();
    static bool is_created();
    static bool next();
    static bool get_event_button_state();
    static bool is_button_down(int button);
    
};

}// namespace lwcppgl

#endif//LWCPPGL_MOUSE_IMPL_H
