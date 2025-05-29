#include <lwc++gl/lwc++gl_exceptios.hpp>
#include <cstdio>

namespace lwcppgl
{

    lwcppgl_exception::lwcppgl_exception() {
        m_cause[0] = '\0';
    }

    lwcppgl_exception::lwcppgl_exception(const char* cause) {
        set_cause(cause);
    }
    
    void lwcppgl_exception::set_cause(const char* cause) {
        std::snprintf(m_cause, sizeof(m_cause), "%s", cause);
    }

    lwcppgl_exception::lwcppgl_exception(const lwcppgl_exception& e) {
        set_cause(e.cause());
    }
    
    lwcppgl_exception::lwcppgl_exception(lwcppgl_exception&& e) {
        set_cause(e.cause());
    }
    
    lwcppgl_exception& lwcppgl_exception::operator= (const lwcppgl_exception& e) {
        if (&e != this) {
            set_cause(e.cause());
        }
        return *this;
    }
    
    lwcppgl_exception& lwcppgl_exception::operator= (lwcppgl_exception&& e) {
        if (&e != this) {
            set_cause(e.cause());
        }
        return *this;
    }
    
    lwcppgl_exception::~lwcppgl_exception() {

    }
    
    const char* lwcppgl_exception::cause() const {
        return m_cause;
    }

}