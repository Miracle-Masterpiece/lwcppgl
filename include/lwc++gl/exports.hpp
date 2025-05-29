#ifndef LWCPPGL_EXPORTS_H
#define LWCPPGL_EXPORTS_H

#if defined(_WIN32)
#   if defined(LWCPPGL_EXPORTS)
#       define LWCPPGL_API __declspec(dllexport)
#   else
#       define LWCPPGL_API __declspec(dllimport)
#   endif
#else
#   if defined(__GNUC__) || defined(__clang__)
#       define LWCPPGL_API __attribute__((visibility("default")))
#   else
#       define LWCPPGL_API
#   endif
#endif

#if defined(_WIN32)
#   define LWCPPGL_CALL __stdcall
#else
#   define LWCPPGL_CALL
#endif

#endif//LWCPPGL_EXPORTS_H