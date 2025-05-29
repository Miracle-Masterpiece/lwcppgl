#include <lwc++gl/openal/al.hpp>
#include <AL/al.h>

namespace al
{

    LWCPPGL_API void LWCPPGL_CALL alEnable(ALenum capability) {
        ::alEnable(capability);
    }

    LWCPPGL_API void LWCPPGL_CALL alDisable(ALenum capability) {
        ::alDisable(capability);
    }
    
    LWCPPGL_API ALboolean LWCPPGL_CALL alIsEnabled(ALenum capability) {
        return ::alIsEnabled(capability);
    }

    LWCPPGL_API void LWCPPGL_CALL alDopplerFactor(ALfloat value) {
        ::alDopplerFactor(value);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alDopplerVelocity(ALfloat value) {
        ::alDopplerVelocity(value);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alSpeedOfSound(ALfloat value) {
        ::alSpeedOfSound(value);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alDistanceModel(ALenum distanceModel) {
        ::alDistanceModel(distanceModel);
    }

    LWCPPGL_API const ALchar* LWCPPGL_CALL alGetString(ALenum param) {
        return ::alGetString(param);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alGetBooleanv(ALenum param, ALboolean *values) {
        ::alGetBooleanv(param, (::ALboolean*) values);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alGetIntegerv(ALenum param, ALint *values) {
        ::alGetIntegerv(param, values);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alGetFloatv(ALenum param, ALfloat *values) {
        ::alGetFloatv(param, values);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alGetDoublev(ALenum param, ALdouble *values) {
        ::alGetDoublev(param, values);
    }
    
    LWCPPGL_API ALboolean LWCPPGL_CALL alGetBoolean(ALenum param) {
        return ::alGetBoolean(param);
    }

    LWCPPGL_API ALint LWCPPGL_CALL alGetInteger(ALenum param) {
        return ::alGetInteger(param);
    }

    LWCPPGL_API ALfloat LWCPPGL_CALL alGetFloat(ALenum param) {
        return ::alGetFloat(param);
    }
    
    LWCPPGL_API ALdouble LWCPPGL_CALL alGetDouble(ALenum param) {
        return ::alGetDouble(param);
    }

    LWCPPGL_API ALenum LWCPPGL_CALL alGetError(void) {
        return ::alGetError();
    }

    LWCPPGL_API ALboolean LWCPPGL_CALL alIsExtensionPresent(const ALchar *extname) {
        return ::alIsExtensionPresent(extname);
    }
    
    LWCPPGL_API void* LWCPPGL_CALL alGetProcAddress(const ALchar *fname) {
        return ::alGetProcAddress(fname);
    }
    
    LWCPPGL_API ALenum LWCPPGL_CALL alGetEnumValue(const ALchar *ename) {
        return ::alGetEnumValue(ename);
    }


    LWCPPGL_API void LWCPPGL_CALL alListenerf(ALenum param, ALfloat value) {
        ::alListenerf(param, value);
    }

    LWCPPGL_API void LWCPPGL_CALL alListener3f(ALenum param, ALfloat value1, ALfloat value2, ALfloat value3) {
        ::alListener3f(param, value1, value2, value3);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alListenerfv(ALenum param, const ALfloat *values) {
        ::alListenerfv(param, values);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alListeneri(ALenum param, ALint value) {
        ::alListeneri(param, value);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alListener3i(ALenum param, ALint value1, ALint value2, ALint value3) {
        ::alListener3i(param, value1, value2, value3);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alListeneriv(ALenum param, const ALint *values) {
        ::alListeneriv(param, values);
    }

    LWCPPGL_API void LWCPPGL_CALL alGetListenerf(ALenum param, ALfloat *value) {
        ::alGetListenerf(param, value);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alGetListener3f(ALenum param, ALfloat *value1, ALfloat *value2, ALfloat *value3) {
        ::alGetListener3f(param, value1, value2, value3);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alGetListenerfv(ALenum param, ALfloat *values) {
        ::alGetListenerfv(param, values);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alGetListeneri(ALenum param, ALint *value) {
        ::alGetListeneri(param, value);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alGetListener3i(ALenum param, ALint *value1, ALint *value2, ALint *value3) {
        ::alGetListener3i(param, value1, value2, value3);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alGetListeneriv(ALenum param, ALint *values) {
        ::alGetListeneriv(param, values);
    }

    LWCPPGL_API void LWCPPGL_CALL alGenSources(ALsizei n, ALuint *sources) {
        ::alGenSources(n, sources);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alDeleteSources(ALsizei n, const ALuint *sources) {
        ::alDeleteSources(n, sources);
    }
    
    LWCPPGL_API ALboolean LWCPPGL_CALL alIsSource(ALuint source) {
        return ::alIsSource(source);
    }

    LWCPPGL_API void LWCPPGL_CALL alSourcef(ALuint source, ALenum param, ALfloat value) {
        ::alSourcef(source, param, value);
    }

    LWCPPGL_API void LWCPPGL_CALL alSource3f(ALuint source, ALenum param, ALfloat value1, ALfloat value2, ALfloat value3) {
        ::alSource3f(source, param, value1, value2, value3);
    }

    LWCPPGL_API void LWCPPGL_CALL alSourcefv(ALuint source, ALenum param, const ALfloat *values) {
        ::alSourcefv(source, param, values);
    }

    LWCPPGL_API void LWCPPGL_CALL alSourcei(ALuint source, ALenum param, ALint value) {
        ::alSourcei(source, param, value);
    }

    LWCPPGL_API void LWCPPGL_CALL alSource3i(ALuint source, ALenum param, ALint value1, ALint value2, ALint value3) {
        ::alSource3i(source, param, value1, value2, value3);
    }

    LWCPPGL_API void LWCPPGL_CALL alSourceiv(ALuint source, ALenum param, const ALint *values) {
        ::alSourceiv(source, param, values);
    }

    LWCPPGL_API void LWCPPGL_CALL alGetSourcef(ALuint source, ALenum param, ALfloat *value) {
        ::alGetSourcef(source, param, value);
    }

    LWCPPGL_API void LWCPPGL_CALL alGetSource3f(ALuint source, ALenum param, ALfloat *value1, ALfloat *value2, ALfloat *value3) {
        ::alGetSource3f(source, param, value1, value2, value3);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alGetSourcefv(ALuint source, ALenum param, ALfloat *values) {
        ::alGetSourcefv(source, param, values);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alGetSourcei(ALuint source,  ALenum param, ALint *value) {
        ::alGetSourcei(source, param, value);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alGetSource3i(ALuint source, ALenum param, ALint *value1, ALint *value2, ALint *value3) {
        ::alGetSource3i(source, param, value1, value2, value3);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alGetSourceiv(ALuint source,  ALenum param, ALint *values) {
        ::alGetSourceiv(source, param, values);
    }

    LWCPPGL_API void LWCPPGL_CALL alSourcePlay(ALuint source) {
        ::alSourcePlay(source);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alSourceStop(ALuint source) {
        ::alSourceStop(source);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alSourceRewind(ALuint source) {
        ::alSourceRewind(source);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alSourcePause(ALuint source) {
        ::alSourcePause(source);
    }

    LWCPPGL_API void LWCPPGL_CALL alSourcePlayv(ALsizei n, const ALuint *sources) {
        ::alSourcePlayv(n, sources);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alSourceStopv(ALsizei n, const ALuint *sources) {
        ::alSourceStopv(n, sources);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alSourceRewindv(ALsizei n, const ALuint *sources) {
        ::alSourceRewindv(n, sources);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alSourcePausev(ALsizei n, const ALuint *sources) {
        ::alSourcePausev(n, sources);
    }

    LWCPPGL_API void LWCPPGL_CALL alSourceQueueBuffers(ALuint source, ALsizei nb, const ALuint *buffers) {
        ::alSourceQueueBuffers(source, nb, buffers);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alSourceUnqueueBuffers(ALuint source, ALsizei nb, ALuint *buffers) {
        ::alSourceUnqueueBuffers(source, nb, buffers);
    }

    LWCPPGL_API void LWCPPGL_CALL alGenBuffers(ALsizei n, ALuint *buffers) {
        ::alGenBuffers(n, buffers);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alDeleteBuffers(ALsizei n, const ALuint *buffers) {
        ::alDeleteBuffers(n, buffers);
    }
    
    LWCPPGL_API ALboolean LWCPPGL_CALL alIsBuffer(ALuint buffer) {
        return ::alIsBuffer(buffer);
    }

    LWCPPGL_API void LWCPPGL_CALL alBufferData(ALuint buffer, ALenum format, const ALvoid *data, ALsizei size, ALsizei samplerate) {
        ::alBufferData(buffer, format, data, size, samplerate);
    }

    LWCPPGL_API void LWCPPGL_CALL alBufferData(ALuint buffer, ALint num_channels, ALint bits_per_sample, const ALvoid* data, ALsizei size, ALsizei samplerate) {
        int format = 0;
        if (num_channels == 1){
            if (bits_per_sample == 8) {
                format = AL_FORMAT_MONO8;
            } else if (bits_per_sample == 16) {
                format = AL_FORMAT_MONO16;
            }
        } else if (num_channels == 2) {
            if (bits_per_sample == 8) {
                format =  AL_FORMAT_STEREO8;
            } else if (bits_per_sample == 16) {
                format =  AL_FORMAT_STEREO16;
            }
        }
        ::alBufferData(buffer, format, data, size, samplerate);
    }

    LWCPPGL_API void LWCPPGL_CALL alBufferf(ALuint buffer, ALenum param, ALfloat value) {
        ::alBufferf(buffer, param, value);
    }

    LWCPPGL_API void LWCPPGL_CALL alBuffer3f(ALuint buffer, ALenum param, ALfloat value1, ALfloat value2, ALfloat value3) {
        ::alBuffer3f(buffer, param, value1, value2, value3);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alBufferfv(ALuint buffer, ALenum param, const ALfloat *values) {
        ::alBufferfv(buffer, param, values);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alBufferi(ALuint buffer, ALenum param, ALint value) {
        ::alBufferi(buffer, param, value);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alBuffer3i(ALuint buffer, ALenum param, ALint value1, ALint value2, ALint value3) {
        ::alBuffer3i(buffer, param, value1, value2, value3);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alBufferiv(ALuint buffer, ALenum param, const ALint *values) {
        ::alBufferiv(buffer, param, values);
    }

    LWCPPGL_API void LWCPPGL_CALL alGetBufferf(ALuint buffer, ALenum param, ALfloat *value) {
        ::alGetBufferf(buffer, param, value);
    }

    LWCPPGL_API void LWCPPGL_CALL alGetBuffer3f(ALuint buffer, ALenum param, ALfloat *value1, ALfloat *value2, ALfloat *value3) {
        ::alGetBuffer3f(buffer, param, value1, value2, value3);
    }

    LWCPPGL_API void LWCPPGL_CALL alGetBufferfv(ALuint buffer, ALenum param, ALfloat *values) {
        ::alGetBufferfv(buffer, param, values);
    }

    LWCPPGL_API void LWCPPGL_CALL alGetBufferi(ALuint buffer, ALenum param, ALint *value) {
        ::alGetBufferi(buffer, param, value);
    }

    LWCPPGL_API void LWCPPGL_CALL alGetBuffer3i(ALuint buffer, ALenum param, ALint *value1, ALint *value2, ALint *value3) {
        ::alGetBuffer3i(buffer, param, value1, value2, value3);
    }

    LWCPPGL_API void LWCPPGL_CALL alGetBufferiv(ALuint buffer, ALenum param, ALint *values) {
        ::alGetBufferiv(buffer, param, values);
    }
}