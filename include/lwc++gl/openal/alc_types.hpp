#ifndef LWCPPGL_OPENAL_ALC_TYPES_H
#define LWCPPGL_OPENAL_ALC_TYPES_H

#include <cstdint>

namespace alc
{

    /** Opaque device handle */
    typedef struct ALCdevice ALCdevice;
    
    /** Opaque context handle */
    typedef struct ALCcontext ALCcontext;

    /** 8-bit boolean */
    typedef uint8_t ALCboolean;

    /** character */
    typedef char ALCchar;

    /** signed 8-bit integer */
    typedef int8_t ALCbyte;

    /** unsigned 8-bit integer */
    typedef uint8_t ALCubyte;

    /** signed 16-bit integer */
    typedef int16_t ALCshort;

    /** unsigned 16-bit integer */
    typedef uint16_t ALCushort;

    /** signed 32-bit integer */
    typedef int32_t ALCint;

    /** unsigned 32-bit integer */
    typedef uint32_t ALCuint;

    /** non-negative 32-bit integer size */
    typedef uint32_t ALCsizei;

    /** 32-bit enumeration value */
    typedef int32_t ALCenum;

    /** 32-bit IEEE-754 floating-point */
    typedef float ALCfloat;

    /** 64-bit IEEE-754 floating-point */
    typedef double ALCdouble;

    /** void type (for opaque pointers only) */
    typedef void ALCvoid;
}

#endif//LWCPPGL_OPENAL_ALC_TYPES_H