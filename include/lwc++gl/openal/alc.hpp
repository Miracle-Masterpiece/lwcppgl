#ifndef LWCPPGL_OPENAL_ALC_H
#define LWCPPGL_OPENAL_ALC_H

#include <lwc++gl/exports.hpp>
#include <lwc++gl/openal/alc_types.hpp>

namespace alc 
{
    /** Boolean False. */
    const int ALC_FALSE                              = 0;

    /** Boolean True. */
    const int ALC_TRUE                               = 1;

    /** Context attribute: <int> Hz. */
    const int ALC_FREQUENCY                          = 0x1007;

    /** Context attribute: <int> Hz. */
    const int ALC_REFRESH                            = 0x1008;

    /** Context attribute: AL_TRUE or AL_FALSE synchronous context? */
    const int ALC_SYNC                               = 0x1009;

    /** Context attribute: <int> requested Mono (3D) Sources. */
    const int ALC_MONO_SOURCES                       = 0x1010;

    /** Context attribute: <int> requested Stereo Sources. */
    const int ALC_STEREO_SOURCES                     = 0x1011;

    /** No error. */
    const int ALC_NO_ERROR                           = 0;

    /** Invalid device handle. */
    const int ALC_INVALID_DEVICE                     = 0xA001;

    /** Invalid context handle. */
    const int ALC_INVALID_CONTEXT                    = 0xA002;

    /** Invalid enumeration passed to an ALC call. */
    const int ALC_INVALID_ENUM                       = 0xA003;

    /** Invalid value passed to an ALC call. */
    const int ALC_INVALID_VALUE                      = 0xA004;

    /** Out of memory. */
    const int ALC_OUT_OF_MEMORY                      = 0xA005;

    /** Runtime ALC major version. */
    const int ALC_MAJOR_VERSION                      = 0x1000;
    
    /** Runtime ALC minor version. */
    const int ALC_MINOR_VERSION                      = 0x1001;

    /** Context attribute list size. */
    const int ALC_ATTRIBUTES_SIZE                    = 0x1002;
    
    /** Context attribute list properties. */
    const int ALC_ALL_ATTRIBUTES                     = 0x1003;

    /** String for the default device specifier. */
    const int ALC_DEFAULT_DEVICE_SPECIFIER           = 0x1004;
    
    /**
     * Device specifier string.
     *
     * If device handle is NULL, it is instead a null-character separated list of
     * strings of known device specifiers (list ends with an empty string).
     */
    const int ALC_DEVICE_SPECIFIER                   = 0x1005;
    
    /** String for space-separated list of ALC extensions. */
    const int ALC_EXTENSIONS                         = 0x1006;


    /** Capture extension */
    const int ALC_EXT_CAPTURE = 1;
    
    /**
     * Capture device specifier string.
     *
     * If device handle is NULL, it is instead a null-character separated list of
     * strings of known capture device specifiers (list ends with an empty string).
     */
    const int ALC_CAPTURE_DEVICE_SPECIFIER           = 0x310;
    
    /** String for the default capture device specifier. */
    const int ALC_CAPTURE_DEFAULT_DEVICE_SPECIFIER   = 0x311;
    
    /** Number of sample frames available for capture. */
    const int ALC_CAPTURE_SAMPLES                    = 0x312;


    /** Enumerate All extension */
    const int ALC_ENUMERATE_ALL_EXT = 1;
    
    /** String for the default extended device specifier. */
    const int ALC_DEFAULT_ALL_DEVICES_SPECIFIER      = 0x1012;
    
    /**
     * Device's extended specifier string.
     *
     * If device handle is NULL, it is instead a null-character separated list of
     * strings of known extended device specifiers (list ends with an empty string).
     */
    const int ALC_ALL_DEVICES_SPECIFIER              = 0x1013;
}

namespace alc
{
    /** Create and attach a context to the given device. */
    LWCPPGL_API ALCcontext* LWCPPGL_CALL alcCreateContext(ALCdevice *device, const ALCint *attrlist);
    
    /**
     * Makes the given context the active process-wide context. Passing NULL clears
     * the active context.
     */
    LWCPPGL_API ALCboolean  LWCPPGL_CALL alcMakeContextCurrent(ALCcontext *context);
    
    /** Resumes processing updates for the given context. */
    LWCPPGL_API void        LWCPPGL_CALL alcProcessContext(ALCcontext *context);
    
    /** Suspends updates for the given context. */
    LWCPPGL_API void        LWCPPGL_CALL alcSuspendContext(ALCcontext *context);
    
    /** Remove a context from its device and destroys it. */
    LWCPPGL_API void        LWCPPGL_CALL alcDestroyContext(ALCcontext *context);
    
    /** Returns the currently active context. */
    LWCPPGL_API ALCcontext* LWCPPGL_CALL alcGetCurrentContext();
    
    /** Returns the device that a particular context is attached to. */
    LWCPPGL_API ALCdevice*  LWCPPGL_CALL alcGetContextsDevice(ALCcontext *context);

    /** Opens the named playback device. */
    LWCPPGL_API ALCdevice* LWCPPGL_CALL alcOpenDevice(const ALCchar *devicename);
    
    /** Closes the given playback device. */
    LWCPPGL_API ALCboolean LWCPPGL_CALL alcCloseDevice(ALCdevice *device);

    /* Error support. */

    /** Obtain the most recent Device error. */
    LWCPPGL_API ALCenum LWCPPGL_CALL alcGetError(ALCdevice *device);

    /* Extension support. */

    /**
     * Query for the presence of an extension on the device. Pass a NULL device to
     * query a device-inspecific extension.
     */
    LWCPPGL_API ALCboolean LWCPPGL_CALL alcIsExtensionPresent(ALCdevice *device, const ALCchar *extname);
    
    /**
     * Retrieve the address of a function. Given a non-NULL device, the returned
     * function may be device-specific.
     */
    LWCPPGL_API ALCvoid*   LWCPPGL_CALL alcGetProcAddress(ALCdevice *device, const ALCchar *funcname);
    
    /**
     * Retrieve the value of an enum. Given a non-NULL device, the returned value
     * may be device-specific.
     */
    LWCPPGL_API ALCenum    LWCPPGL_CALL alcGetEnumValue(ALCdevice *device, const ALCchar *enumname);

    /* Query functions. */

    /** Returns information about the device, and error strings. */
    LWCPPGL_API const ALCchar* LWCPPGL_CALL alcGetString(ALCdevice *device, ALCenum param);
    
    /** Returns information about the device and the version of OpenAL. */
    LWCPPGL_API void           LWCPPGL_CALL alcGetIntegerv(ALCdevice *device, ALCenum param, ALCsizei size, ALCint *values);

    /* Capture functions. */

    /**
     * Opens the named capture device with the given frequency, format, and buffer
     * size.
     */
    LWCPPGL_API ALCdevice* LWCPPGL_CALL alcCaptureOpenDevice(const ALCchar *devicename, ALCuint frequency, ALCenum format, ALCsizei buffersize);
    
    /** Closes the given capture device. */
    LWCPPGL_API ALCboolean LWCPPGL_CALL alcCaptureCloseDevice(ALCdevice *device);
    
    /** Starts capturing samples into the device buffer. */
    LWCPPGL_API void       LWCPPGL_CALL alcCaptureStart(ALCdevice *device);
    
    /** Stops capturing samples. Samples in the device buffer remain available. */
    LWCPPGL_API void       LWCPPGL_CALL alcCaptureStop(ALCdevice *device);
    
    /** Reads samples from the device buffer. */
    LWCPPGL_API void       LWCPPGL_CALL alcCaptureSamples(ALCdevice *device, ALCvoid *buffer, ALCsizei samples);
}

#endif//LWCPPGL_OPENAL_ALC_H
