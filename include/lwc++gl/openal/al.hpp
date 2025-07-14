#ifndef LWCPPGL_OPENAL_AL_H
#define LWCPPGL_OPENAL_AL_H

#include <lwc++gl/exports.hpp>
#include <lwc++gl/openal/al_types.hpp>

namespace al
{

    const int AL_NONE                                = 0;
    const int AL_FALSE                               = 0;

    const int AL_TRUE                                = 1;
    const int AL_SOURCE_RELATIVE                     = 0x202;
    const int AL_CONE_INNER_ANGLE                    = 0x1001;
    const int AL_CONE_OUTER_ANGLE                    = 0x1002;
    const int AL_PITCH                               = 0x1003;
    const int AL_POSITION                            = 0x1004;
    const int AL_DIRECTION                           = 0x1005;
    const int AL_VELOCITY                            = 0x1006;
    const int AL_LOOPING                             = 0x1007;
    const int AL_BUFFER                              = 0x1009;
    const int AL_GAIN                                = 0x100A;
    const int AL_MIN_GAIN                            = 0x100D;
    const int AL_MAX_GAIN                            = 0x100E;
    const int AL_ORIENTATION                         = 0x100F;
    const int AL_SOURCE_STATE                        = 0x1010;

    const int AL_INITIAL                             = 0x1011;
    const int AL_PLAYING                             = 0x1012;
    const int AL_PAUSED                              = 0x1013;
    const int AL_STOPPED                             = 0x1014;

    const int AL_BUFFERS_QUEUED                      = 0x1015;
    const int AL_BUFFERS_PROCESSED                   = 0x1016;
    const int AL_REFERENCE_DISTANCE                  = 0x1020;
    const int AL_ROLLOFF_FACTOR                      = 0x1021;
    const int AL_CONE_OUTER_GAIN                     = 0x1022;

    const int AL_MAX_DISTANCE                        = 0x1023;
    const int AL_SEC_OFFSET                          = 0x1024;
    const int AL_SAMPLE_OFFSET                       = 0x1025;
    const int AL_BYTE_OFFSET                         = 0x1026;
    
    const int AL_SOURCE_TYPE                         = 0x1027;

    const int AL_STATIC                              = 0x1028;
    const int AL_STREAMING                           = 0x1029;
    const int AL_UNDETERMINED                        = 0x1030;

    const int AL_FORMAT_MONO8                        = 0x1100;
    const int AL_FORMAT_MONO16                       = 0x1101;
    const int AL_FORMAT_STEREO8                      = 0x1102;
    const int AL_FORMAT_STEREO16                     = 0x1103;

    const int AL_FREQUENCY                           = 0x2001;
    const int AL_BITS                                = 0x2002;
    const int AL_CHANNELS                            = 0x2003;
    const int AL_SIZE                                = 0x2004;

    const int AL_NO_ERROR                            = 0;
    const int AL_INVALID_NAME                        = 0xA001;
    const int AL_INVALID_ENUM                        = 0xA002;
    const int AL_INVALID_VALUE                       = 0xA003;
    const int AL_INVALID_OPERATION                   = 0xA004;
    const int AL_OUT_OF_MEMORY                       = 0xA005;

    const int AL_VENDOR                              = 0xB001;
    const int AL_VERSION                             = 0xB002;
    const int AL_RENDERER                            = 0xB003;
    const int AL_EXTENSIONS                          = 0xB004;

    const int AL_DOPPLER_FACTOR                      = 0xC000;
    const int AL_DOPPLER_VELOCITY                    = 0xC001;
    const int AL_SPEED_OF_SOUND                      = 0xC003;
    const int AL_DISTANCE_MODEL                      = 0xD000;

    const int AL_INVERSE_DISTANCE                    = 0xD001;
    const int AL_INVERSE_DISTANCE_CLAMPED            = 0xD002;
    const int AL_LINEAR_DISTANCE                     = 0xD003;
    const int AL_LINEAR_DISTANCE_CLAMPED             = 0xD004;
    const int AL_EXPONENT_DISTANCE                   = 0xD005;
    const int AL_EXPONENT_DISTANCE_CLAMPED           = 0xD006;
}

namespace al
{
    LWCPPGL_API void LWCPPGL_CALL alEnable(ALenum capability) ;
    LWCPPGL_API void LWCPPGL_CALL alDisable(ALenum capability) ;
    LWCPPGL_API ALboolean LWCPPGL_CALL alIsEnabled(ALenum capability) ;

    LWCPPGL_API void LWCPPGL_CALL alDopplerFactor(ALfloat value) ;
    LWCPPGL_API void LWCPPGL_CALL alDopplerVelocity(ALfloat value) ;
    LWCPPGL_API void LWCPPGL_CALL alSpeedOfSound(ALfloat value) ;
    LWCPPGL_API void LWCPPGL_CALL alDistanceModel(ALenum distanceModel) ;

    LWCPPGL_API const ALchar* LWCPPGL_CALL alGetString(ALenum param) ;
    LWCPPGL_API void LWCPPGL_CALL alGetBooleanv(ALenum param, ALboolean *values) ;
    LWCPPGL_API void LWCPPGL_CALL alGetIntegerv(ALenum param, ALint *values) ;
    LWCPPGL_API void LWCPPGL_CALL alGetFloatv(ALenum param, ALfloat *values) ;
    LWCPPGL_API void LWCPPGL_CALL alGetDoublev(ALenum param, ALdouble *values) ;
    LWCPPGL_API ALboolean LWCPPGL_CALL alGetBoolean(ALenum param) ;
    LWCPPGL_API ALint LWCPPGL_CALL alGetInteger(ALenum param) ;
    LWCPPGL_API ALfloat LWCPPGL_CALL alGetFloat(ALenum param) ;
    LWCPPGL_API ALdouble LWCPPGL_CALL alGetDouble(ALenum param) ;

    LWCPPGL_API ALenum LWCPPGL_CALL alGetError(void) ;
    LWCPPGL_API ALboolean LWCPPGL_CALL alIsExtensionPresent(const ALchar *extname) ;
    LWCPPGL_API void* LWCPPGL_CALL alGetProcAddress(const ALchar *fname) ;
    LWCPPGL_API ALenum LWCPPGL_CALL alGetEnumValue(const ALchar *ename) ;

    LWCPPGL_API void LWCPPGL_CALL alListenerf(ALenum param, ALfloat value) ;
    LWCPPGL_API void LWCPPGL_CALL alListener3f(ALenum param, ALfloat value1, ALfloat value2, ALfloat value3) ;
    LWCPPGL_API void LWCPPGL_CALL alListenerfv(ALenum param, const ALfloat *values) ;
    LWCPPGL_API void LWCPPGL_CALL alListeneri(ALenum param, ALint value) ;
    LWCPPGL_API void LWCPPGL_CALL alListener3i(ALenum param, ALint value1, ALint value2, ALint value3) ;
    LWCPPGL_API void LWCPPGL_CALL alListeneriv(ALenum param, const ALint *values) ;

    LWCPPGL_API void LWCPPGL_CALL alGetListenerf(ALenum param, ALfloat *value) ;
    LWCPPGL_API void LWCPPGL_CALL alGetListener3f(ALenum param, ALfloat *value1, ALfloat *value2, ALfloat *value3) ;
    LWCPPGL_API void LWCPPGL_CALL alGetListenerfv(ALenum param, ALfloat *values) ;
    LWCPPGL_API void LWCPPGL_CALL alGetListeneri(ALenum param, ALint *value) ;
    LWCPPGL_API void LWCPPGL_CALL alGetListener3i(ALenum param, ALint *value1, ALint *value2, ALint *value3) ;
    LWCPPGL_API void LWCPPGL_CALL alGetListeneriv(ALenum param, ALint *values) ;


    LWCPPGL_API void LWCPPGL_CALL alGenSources(ALsizei n, ALuint *sources) ;
    LWCPPGL_API void LWCPPGL_CALL alDeleteSources(ALsizei n, const ALuint *sources) ;
    LWCPPGL_API ALboolean LWCPPGL_CALL alIsSource(ALuint source) ;

    LWCPPGL_API void LWCPPGL_CALL alSourcef(ALuint source, ALenum param, ALfloat value) ;
    LWCPPGL_API void LWCPPGL_CALL alSource3f(ALuint source, ALenum param, ALfloat value1, ALfloat value2, ALfloat value3) ;
    LWCPPGL_API void LWCPPGL_CALL alSourcefv(ALuint source, ALenum param, const ALfloat *values) ;
    LWCPPGL_API void LWCPPGL_CALL alSourcei(ALuint source, ALenum param, ALint value) ;
    LWCPPGL_API void LWCPPGL_CALL alSource3i(ALuint source, ALenum param, ALint value1, ALint value2, ALint value3) ;
    LWCPPGL_API void LWCPPGL_CALL alSourceiv(ALuint source, ALenum param, const ALint *values) ;

    LWCPPGL_API void LWCPPGL_CALL alGetSourcef(ALuint source, ALenum param, ALfloat *value) ;
    LWCPPGL_API void LWCPPGL_CALL alGetSource3f(ALuint source, ALenum param, ALfloat *value1, ALfloat *value2, ALfloat *value3) ;
    LWCPPGL_API void LWCPPGL_CALL alGetSourcefv(ALuint source, ALenum param, ALfloat *values) ;
    LWCPPGL_API void LWCPPGL_CALL alGetSourcei(ALuint source,  ALenum param, ALint *value) ;
    LWCPPGL_API void LWCPPGL_CALL alGetSource3i(ALuint source, ALenum param, ALint *value1, ALint *value2, ALint *value3) ;
    LWCPPGL_API void LWCPPGL_CALL alGetSourceiv(ALuint source,  ALenum param, ALint *values) ;

    LWCPPGL_API void LWCPPGL_CALL alSourcePlay(ALuint source) ;
    LWCPPGL_API void LWCPPGL_CALL alSourceStop(ALuint source) ;
    LWCPPGL_API void LWCPPGL_CALL alSourceRewind(ALuint source) ;
    LWCPPGL_API void LWCPPGL_CALL alSourcePause(ALuint source) ;

    LWCPPGL_API void LWCPPGL_CALL alSourcePlayv(ALsizei n, const ALuint *sources) ;
    LWCPPGL_API void LWCPPGL_CALL alSourceStopv(ALsizei n, const ALuint *sources) ;
    LWCPPGL_API void LWCPPGL_CALL alSourceRewindv(ALsizei n, const ALuint *sources) ;
    LWCPPGL_API void LWCPPGL_CALL alSourcePausev(ALsizei n, const ALuint *sources) ;

    LWCPPGL_API void LWCPPGL_CALL alSourceQueueBuffers(ALuint source, ALsizei nb, const ALuint *buffers) ;
    LWCPPGL_API void LWCPPGL_CALL alSourceUnqueueBuffers(ALuint source, ALsizei nb, ALuint *buffers) ;

    LWCPPGL_API void LWCPPGL_CALL alGenBuffers(ALsizei n, ALuint *buffers) ;
    LWCPPGL_API void LWCPPGL_CALL alDeleteBuffers(ALsizei n, const ALuint *buffers) ;
    LWCPPGL_API ALboolean LWCPPGL_CALL alIsBuffer(ALuint buffer) ;

    LWCPPGL_API void LWCPPGL_CALL alBufferData(ALuint buffer, ALenum format, const ALvoid *data, ALsizei size, ALsizei samplerate) ;
    LWCPPGL_API void LWCPPGL_CALL alBufferData(ALuint buffer, ALint num_channels, ALint bits_per_sample, const ALvoid* data, ALsizei size, ALsizei samplerate);

    LWCPPGL_API void LWCPPGL_CALL alBufferf(ALuint buffer, ALenum param, ALfloat value) ;
    LWCPPGL_API void LWCPPGL_CALL alBuffer3f(ALuint buffer, ALenum param, ALfloat value1, ALfloat value2, ALfloat value3) ;
    LWCPPGL_API void LWCPPGL_CALL alBufferfv(ALuint buffer, ALenum param, const ALfloat *values) ;
    LWCPPGL_API void LWCPPGL_CALL alBufferi(ALuint buffer, ALenum param, ALint value) ;
    LWCPPGL_API void LWCPPGL_CALL alBuffer3i(ALuint buffer, ALenum param, ALint value1, ALint value2, ALint value3) ;
    LWCPPGL_API void LWCPPGL_CALL alBufferiv(ALuint buffer, ALenum param, const ALint *values) ;

    LWCPPGL_API void LWCPPGL_CALL alGetBufferf(ALuint buffer, ALenum param, ALfloat *value) ;
    LWCPPGL_API void LWCPPGL_CALL alGetBuffer3f(ALuint buffer, ALenum param, ALfloat *value1, ALfloat *value2, ALfloat *value3) ;
    LWCPPGL_API void LWCPPGL_CALL alGetBufferfv(ALuint buffer, ALenum param, ALfloat *values) ;
    LWCPPGL_API void LWCPPGL_CALL alGetBufferi(ALuint buffer, ALenum param, ALint *value) ;
    LWCPPGL_API void LWCPPGL_CALL alGetBuffer3i(ALuint buffer, ALenum param, ALint *value1, ALint *value2, ALint *value3) ;
    LWCPPGL_API void LWCPPGL_CALL alGetBufferiv(ALuint buffer, ALenum param, ALint *values) ;
}

#endif//LWCPPGL_OPENAL_AL_H