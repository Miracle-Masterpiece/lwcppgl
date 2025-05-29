#include <lwc++gl/openal/alc.hpp>
#include <AL/alc.h>

namespace alc
{
    
    LWCPPGL_API ALCcontext* LWCPPGL_CALL alcCreateContext(ALCdevice *device, const ALCint *attrlist) {
        return (ALCcontext*) ::alcCreateContext((::ALCdevice*) device, attrlist);
    }
    
    
    LWCPPGL_API ALCboolean  LWCPPGL_CALL alcMakeContextCurrent(ALCcontext *context) {
        return ::alcMakeContextCurrent((::ALCcontext*) context);
    }
    
    LWCPPGL_API void        LWCPPGL_CALL alcProcessContext(ALCcontext *context) {
        ::alcProcessContext((::ALCcontext*)context);
    }
    
    LWCPPGL_API void        LWCPPGL_CALL alcSuspendContext(ALCcontext *context) {
        ::alcSuspendContext((::ALCcontext*)context);
    }
    
    LWCPPGL_API void        LWCPPGL_CALL alcDestroyContext(ALCcontext *context) {
        ::alcDestroyContext((::ALCcontext*)context);
    }
    
    LWCPPGL_API ALCcontext* LWCPPGL_CALL alcGetCurrentContext() {
        return (ALCcontext*) ::alcGetCurrentContext();
    }
    
    LWCPPGL_API ALCdevice*  LWCPPGL_CALL alcGetContextsDevice(ALCcontext *context) {
        return (ALCdevice*) ::alcGetContextsDevice((::ALCcontext*) context);
    }

    LWCPPGL_API ALCdevice* LWCPPGL_CALL alcOpenDevice(const ALCchar *devicename) {
        return (ALCdevice*) ::alcOpenDevice(devicename);
    }
    
    LWCPPGL_API ALCboolean LWCPPGL_CALL alcCloseDevice(ALCdevice *device) {
        return ::alcCloseDevice((::ALCdevice*) device);
    }

    LWCPPGL_API ALCenum LWCPPGL_CALL alcGetError(ALCdevice *device) {
        return ::alcGetError((::ALCdevice*) device);
    }

    LWCPPGL_API ALCboolean LWCPPGL_CALL alcIsExtensionPresent(ALCdevice *device, const ALCchar *extname) {
        return ::alcIsExtensionPresent((::ALCdevice*) device, extname);
    }
    
    LWCPPGL_API ALCvoid*   LWCPPGL_CALL alcGetProcAddress(ALCdevice *device, const ALCchar *funcname) {
        return ::alcGetProcAddress((::ALCdevice*) device, funcname);
    }
    
    LWCPPGL_API ALCenum    LWCPPGL_CALL alcGetEnumValue(ALCdevice *device, const ALCchar *enumname) {
        return ::alcGetEnumValue((::ALCdevice*) device, enumname);
    }

    LWCPPGL_API const ALCchar* LWCPPGL_CALL alcGetString(ALCdevice *device, ALCenum param) {
        return ::alcGetString((::ALCdevice*) device, param);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alcGetIntegerv(ALCdevice *device, ALCenum param, ALCsizei size, ALCint *values) {
        ::alcGetIntegerv((::ALCdevice*) device, param, size, values);
    }

    LWCPPGL_API ALCdevice* LWCPPGL_CALL alcCaptureOpenDevice(const ALCchar *devicename, ALCuint frequency, ALCenum format, ALCsizei buffersize) {
        return (ALCdevice*) ::alcCaptureOpenDevice(devicename, frequency, format, buffersize);
    }
    
    LWCPPGL_API ALCboolean LWCPPGL_CALL alcCaptureCloseDevice(ALCdevice *device) {
        return ::alcCaptureCloseDevice((::ALCdevice*) device);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alcCaptureStart(ALCdevice *device) {
        ::alcCaptureStart((::ALCdevice*) device);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alcCaptureStop(ALCdevice *device) {
        ::alcCaptureStop((::ALCdevice*) device);
    }
    
    LWCPPGL_API void LWCPPGL_CALL alcCaptureSamples(ALCdevice *device, ALCvoid *buffer, ALCsizei samples) {
        ::alcCaptureSamples((::ALCdevice*) device, buffer, samples);
    }
}