#ifndef LWCPPGL_KEYBOARD_IMPL_H
#define LWCPPGL_KEYBOARD_IMPL_H
#include "read_write_buffer.hpp"

#define KEY_BUF_SIZE  64
#define CHAR_BUF_SIZE  64

namespace lwcppgl
{


class keyboard_impl {

    struct key_info {
        int     key;
        bool    state;
    };

    static inf_buf<keyboard_impl::key_info, KEY_BUF_SIZE>   m_keys_q;
    static inf_buf<unsigned int, CHAR_BUF_SIZE>             m_char_q;
    static keyboard_impl::key_info                          m_current_key;
    static bool                                             m_created;
    static bool                                             m_repeat_events;
    static int                                              m_current_char;
public:
    static void create();
    static void update();
    static void destroy();
    static void add_char(unsigned int codepoint);
    static void add_key(int key, bool is_press);
    static void enable_repeat_events(bool enable);
    static void discard_events();

    static bool is_created();
    static bool next_char();
    static bool next_key();
    static bool is_key_down(int key);
    static bool are_repeat_events_enabled();
    
    static int get_event_key_state();
    static int get_event_key();
    static unsigned int get_event_character();
};

}

#endif//LWCPPGL_KEYBOARD_IMPL_H