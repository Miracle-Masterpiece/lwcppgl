#ifndef LWCPPGL_OPENAL_TYPES_H
#define LWCPPGL_OPENAL_TYPES_H

#include <cstdint>

namespace al
{
    //8-bit bool
    typedef int8_t ALboolean;

    //character
    typedef char ALchar;

    //signed 8-bit int
    typedef int8_t ALbyte;

    //unsigned 8-bit int
    typedef uint8_t ALubyte;

    //signed 16-bit int
    typedef int16_t ALshort;

    //unsigned 16-bit int
    typedef uint16_t ALushort;

    //signed 32-bit int
    typedef int32_t ALint;

    //unsigned 32-bit int
    typedef uint32_t ALuint;

    //non-negative 32-bit
    typedef uint32_t ALsizei;

    //32-bit enum value
    typedef int32_t ALenum;

    //32-bit IEEE-754 floating-point
    typedef float ALfloat;

    //64-bit IEEE-754 floating-point
    typedef double ALdouble;

    //void type (pointers only)
    typedef void ALvoid;
}

#endif//LWCPPGL_OPENAL_TYPES_H