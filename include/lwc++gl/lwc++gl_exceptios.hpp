#ifndef LWCPPGL_EXCEPTIONS_G
#define LWCPPGL_EXCEPTIONS_G

namespace lwcppgl
{

/**
 * Класс для исключений библиотеки.
 */
class lwcppgl_exception {
    char m_cause[64];               //Описание причины исключения.
    void set_cause(const char*);
public:
    lwcppgl_exception();
    lwcppgl_exception(const char* cause);
    lwcppgl_exception(const lwcppgl_exception&);
    lwcppgl_exception(lwcppgl_exception&&);
    lwcppgl_exception& operator= (const lwcppgl_exception&);
    lwcppgl_exception& operator= (lwcppgl_exception&&);
    virtual ~lwcppgl_exception();
    const char* cause() const;
};

}

#endif//LWCPPGL_EXCEPTIONS_G