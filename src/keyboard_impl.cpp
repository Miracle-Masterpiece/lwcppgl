#include "keyboard_impl.h"
#include "display_impl.hpp"
#include <lwc++gl/lwc++gl_exceptios.hpp>
#include <lwc++gl/opengl/input/keyboard.hpp>
#include <cstring>

namespace lwcppgl 
{

    /*static*/ inf_buf<keyboard_impl::key_info, KEY_BUF_SIZE>   keyboard_impl::m_keys_q = {};
    /*static*/ inf_buf<unsigned int, CHAR_BUF_SIZE>                      keyboard_impl::m_char_q = {};
    /*static*/ keyboard_impl::key_info keyboard_impl::m_current_key = {};
    /*static*/ int keyboard_impl::m_current_char                    = {};
    /*static*/ bool keyboard_impl::m_created        = false;
    /*static*/ bool keyboard_impl::m_repeat_events  = true;
    
    bool keyboard_impl::is_created() {
        return m_created;
    }

    void keyboard_impl::create() {
        m_created = true;
    }

    void keyboard_impl::destroy() {
        m_created = false;
    }

    bool keyboard_impl::is_key_down(int key) {
#ifndef NDEBUG
        if (!keyboard_impl::is_created())
            throw lwcppgl_exception("Keyboard must be created!");
        if (!display_impl::is_created())
            throw lwcppgl_exception("Display must be created!");
#endif
        return glfwGetKey(display_impl::get_windows_handle(), key) == GLFW_TRUE;
    }

    void keyboard_impl::add_char(unsigned int codepoint) {
        m_char_q.write(codepoint);
    }

    bool keyboard_impl::next_key() {
#ifndef NDEBUG
        if (!keyboard_impl::is_created())
            throw lwcppgl_exception("Keyboard must be created!");
#endif
        if (m_keys_q.can_read()) {
            m_current_key = m_keys_q.read();
            return true;    
        }
        return false;
    }
    
    bool keyboard_impl::next_char() {
#ifndef NDEBUG
        if (!keyboard_impl::is_created())
            throw lwcppgl_exception("Keyboard must be created!");
#endif
        if (m_char_q.can_read()) {
            m_current_char = m_char_q.read();
            return true;    
        }
        return false;
    }

    int keyboard_impl::get_event_key() {
        return m_current_key.key;
    }

    int keyboard_impl::get_event_key_state() {
        return m_current_key.state;
    }

    void keyboard_impl::add_key(int key, bool pressed) {
        m_keys_q.write({key, pressed});
    }

    unsigned int keyboard_impl::get_event_character() {
        return m_current_char;
    }

    void keyboard_impl::enable_repeat_events(bool enable) {
        m_repeat_events = enable;
    }
    
    bool keyboard_impl::are_repeat_events_enabled() {
        return m_repeat_events;
    }

    void keyboard_impl::update() {

    }

    void keyboard_impl::discard_events() {
        m_char_q.clear();
    }

    /**
     * ==========================================================================================================================
     */

    bool keyboard::is_key_down(int key) {
        return keyboard_impl::is_key_down(key);
    }

    void keyboard::create() {
        keyboard_impl::create();
    }

    void keyboard::destroy() {
        keyboard_impl::destroy();
    }

    bool keyboard::get_event_key_state() {
        return keyboard_impl::get_event_key_state();
    }

    bool keyboard::next_key() {
        return keyboard_impl::next_key();
    }

    int keyboard::get_event_key() {
        return keyboard_impl::get_event_key();
    }

    bool keyboard::next_char() {
        return keyboard_impl::next_char();
    }

    int keyboard::get_event_character() {
        return keyboard_impl::get_event_character();
    }

    bool keyboard::are_repeat_events_enabled() {
        return keyboard_impl::are_repeat_events_enabled();
    }
    
    void keyboard::enable_repeat_events(bool enable) {
        keyboard_impl::enable_repeat_events(enable);
    }

    void keyboard::update() {
        keyboard_impl::update();
    }

    void keyboard::discard_events() {
        keyboard_impl::discard_events();
    }

}
