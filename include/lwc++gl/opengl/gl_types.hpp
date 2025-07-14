#ifndef LWCPPGL_GL_TYPES_H
#define LWCPPGL_GL_TYPES_H

#include <KHR/khrplatform.h>

typedef struct __GLsync *GLsync;
namespace gl
{
    typedef unsigned int GLenum;
    typedef unsigned char GLboolean;
    typedef unsigned int GLbitfield;
    typedef void GLvoid;
    typedef khronos_int8_t GLbyte;
    typedef khronos_uint8_t GLubyte;
    typedef khronos_int16_t GLshort;
    typedef khronos_uint16_t GLushort;
    typedef int GLint;
    typedef unsigned int GLuint;
    typedef khronos_int32_t GLclampx;
    typedef int GLsizei;
    typedef khronos_float_t GLfloat;
    typedef khronos_float_t GLclampf;
    typedef double GLdouble;
    typedef double GLclampd;
    typedef void *GLeglClientBufferEXT;
    typedef void *GLeglImageOES;
    typedef char GLchar;
    typedef char GLcharARB;
    typedef khronos_ssize_t GLsizeiptr;
    typedef khronos_intptr_t GLintptr;
    typedef khronos_int64_t GLint64;
    typedef khronos_uint64_t GLuint64;
    typedef void (*GLDEBUGPROC) (GLenum source,GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* message, const void* userParam);
}//namespace gl

#endif//LWCPPGL_GL_TYPES_H