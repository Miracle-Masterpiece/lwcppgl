#ifndef LWCPPGL_OPTIONAL_H
#define LWCPPGL_OPTIONAL_H
#include <utility>

namespace lwcppgl 
{

template<typename T>
class optional {
    union {
        T m_value;
        char m_buf[sizeof(T)];
    };
    bool m_is_value;
    void cleanup();
public:
    optional();
    template<typename _T>
    optional(_T&&);
    optional(const optional<T>&);
    optional(optional<T>&&);
    optional<T>& operator=(const optional<T>&);
    optional<T>& operator=(optional<T>&&);
    ~optional();
    bool is_value() const;
    const T* operator->() const;
    const T& operator*() const;
    T* operator->();
    T& operator*();
};

    template<typename T>
    optional<T>::optional() : m_is_value(false) {

    }
    
    template<typename T>
    template<typename _T>
    optional<T>::optional(_T&& v) {
        new (m_buf) T(std::forward<_T>(v));
        m_is_value = true;
    }
    

    template<typename T>
    optional<T>::optional(const optional<T>& opt) {
        if (opt.is_value()) {
            new (m_buf) T(opt.m_value);
            m_is_value = true;
        } else {
            m_is_value = false;
        }
    }
    
    template<typename T>
    optional<T>::optional(optional<T>&& opt) {
        if (opt.is_value()) {
            new (m_buf) T(std::move(opt.m_value));
            m_is_value = true;
        } else {
            m_is_value = false;
        }
    }
    
    template<typename T>
    void optional<T>::cleanup() {
        if (is_value()) {
            m_value.~T();
            m_is_value = false;
        }
    }

    template<typename T>
    optional<T>& optional<T>::operator=(const optional<T>& opt) {
        if (&opt != this) {
            cleanup();
            if (opt.is_value()) {
                new(m_buf) T(opt.m_value);
                m_is_value = true;
            }
        }
        return *this;
    }
    
    template<typename T>
    optional<T>& optional<T>::operator=(optional<T>&& opt) {
        if (&opt != this) {
            cleanup();
            if (opt.is_value()) {
                new(m_buf) T(std::move(opt.m_value));
                m_is_value = true;
            }
        }
        return *this;
    }
    
    template<typename T>
    optional<T>::~optional() {
        cleanup();
    }
    
    template<typename T>
    bool optional<T>::is_value() const {
        return m_is_value;
    }
    
    template<typename T>
    const T* optional<T>::operator->() const {
        assert(is_value() == true);
        return &m_value;
    }
    
    template<typename T>
    const T& optional<T>::operator*() const {
        assert(is_value() == true);
        return m_value;
    }

    template<typename T>
    T* optional<T>::operator->() {
        assert(is_value() == true);
        return &m_value;
    }
    
    template<typename T>
    T& optional<T>::operator*() {
        assert(is_value() == true);
        return m_value;
    }

}

#endif//LWCPPGL_OPTIONAL_H