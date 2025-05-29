#ifndef LWCPPGL_READ_WRITE_BUFFER_H
#define LWCPPGL_READ_WRITE_BUFFER_H

#include <cstring>
#include <cassert>

namespace lwcppgl
{

template<typename T, int SIZE>
struct inf_buf {
    T m_buf[SIZE];
    int m_read_pos;
    int m_write_pos;

    inf_buf();

    void write(const T& v);
    T& read();
    bool can_read();
    void clear();
};

    template<typename T, int SIZE>
    inf_buf<T, SIZE>::inf_buf() : m_read_pos(0), m_write_pos(0) {

    }

    template<typename T, int SIZE>
    void inf_buf<T, SIZE>::write(const T& v) {
        if (m_write_pos == SIZE) {
            int len = m_write_pos - m_read_pos;
            if (len != SIZE) {
                std::memmove(m_buf, m_buf + len, sizeof(T) * len);
                m_read_pos  = 0;
                m_write_pos = len;
            } else {
                std::memmove(m_buf, m_buf + 1, sizeof(T) * (len - 1));
                m_read_pos  = 0;
                m_write_pos = len - 1;
            }
            
        }
        assert(m_write_pos < SIZE);
        m_buf[m_write_pos++] = v;
    }
    
    template<typename T, int SIZE>
    T& inf_buf<T, SIZE>::read() {
        assert(m_read_pos < SIZE);
        return m_buf[m_read_pos++];
    }
    
    template<typename T, int SIZE>
    bool inf_buf<T, SIZE>::can_read() {
        return m_read_pos < m_write_pos;
    }

    template<typename T, int SIZE>
    void inf_buf<T, SIZE>::clear() {
        m_read_pos  = 0;
        m_write_pos = 0;
    }

}
#endif//LWCPPGL_READ_WRITE_BUFFER_H