#include <lwc++gl/opengl/gl.hpp>
#include <glad/glad.h>

namespace gl
{
    #undef glCullFace
    void LWCPPGL_CALL glCullFace(GLenum mode) {
        glad_glCullFace(mode);
    }
    #undef glFrontFace
    void LWCPPGL_CALL glFrontFace(GLenum mode) {
        glad_glFrontFace(mode);
    }
    #undef glHint
    void LWCPPGL_CALL glHint(GLenum target, GLenum mode) {
        glad_glHint(target, mode);
    }
    #undef glLineWidth
    void LWCPPGL_CALL glLineWidth(GLfloat width) {
        glad_glLineWidth(width);
    }
    #undef glPointSize
    void LWCPPGL_CALL glPointSize(GLfloat size) {
        glad_glPointSize(size);
    }
    #undef glPolygonMode
    void LWCPPGL_CALL glPolygonMode(GLenum face, GLenum mode) {
        glad_glPolygonMode(face, mode);
    }
    #undef glScissor
    void LWCPPGL_CALL glScissor(GLint x, GLint y, GLsizei width, GLsizei height) {
        glad_glScissor(x, y, width, height);
    }
    #undef glTexParameterf
    void LWCPPGL_CALL glTexParameterf(GLenum target, GLenum pname, GLfloat param) {
        glad_glTexParameterf(target, pname, param);
    }
    #undef glTexParameterfv
    void LWCPPGL_CALL glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params) {
        glad_glTexParameterfv(target, pname, params);
    }
    #undef glTexParameteri
    void LWCPPGL_CALL glTexParameteri(GLenum target, GLenum pname, GLint param) {
        glad_glTexParameteri(target, pname, param);
    }
    #undef glTexParameteriv
    void LWCPPGL_CALL glTexParameteriv(GLenum target, GLenum pname, const GLint * params) {
        glad_glTexParameteriv(target, pname, params);
    }
    #undef glTexImage1D
    void LWCPPGL_CALL glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void* pixels) {
        glad_glTexImage1D(target, level, internalformat, width, border, format, type, pixels);
    }
    #undef glTexImage2D
    void LWCPPGL_CALL glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void* pixels) {
        glad_glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
    }
    #undef glDrawBuffer
    void LWCPPGL_CALL glDrawBuffer(GLenum buf) {
        glad_glDrawBuffer(buf);
    }
    #undef glClear
    void LWCPPGL_CALL glClear(GLbitfield mask) {
        glad_glClear(mask);
    }
    #undef glClearColor
    void LWCPPGL_CALL glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
        glad_glClearColor(red, green, blue, alpha);
    }
    #undef glClearStencil
    void LWCPPGL_CALL glClearStencil(GLint s) {
        glad_glClearStencil(s);
    }
    #undef glClearDepth
    void LWCPPGL_CALL glClearDepth(GLdouble depth) {
        glad_glClearDepth(depth);
    }
    #undef glStencilMask
    void LWCPPGL_CALL glStencilMask(GLuint mask) {
        glad_glStencilMask(mask);
    }
    #undef glColorMask
    void LWCPPGL_CALL glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) {
        glad_glColorMask(red, green, blue, alpha);
    }
    #undef glDepthMask
    void LWCPPGL_CALL glDepthMask(GLboolean flag) {
        glad_glDepthMask(flag);
    }
    #undef glDisable
    void LWCPPGL_CALL glDisable(GLenum cap) {
        glad_glDisable(cap);
    }
    #undef glEnable
    void LWCPPGL_CALL glEnable(GLenum cap) {
        glad_glEnable(cap);
    }
    #undef glFinish
    void LWCPPGL_CALL glFinish(void) {
        glad_glFinish();
    }
    #undef glFlush
    void LWCPPGL_CALL glFlush(void) {
        glad_glFlush();
    }
    #undef glBlendFunc
    void LWCPPGL_CALL glBlendFunc(GLenum sfactor, GLenum dfactor) {
        glad_glBlendFunc(sfactor, dfactor);
    }
    #undef glLogicOp
    void LWCPPGL_CALL glLogicOp(GLenum opcode) {
        glad_glLogicOp(opcode);
    }
    #undef glStencilFunc
    void LWCPPGL_CALL glStencilFunc(GLenum func, GLint ref, GLuint mask) {
        glad_glStencilFunc(func, ref, mask);
    }
    #undef glStencilOp
    void LWCPPGL_CALL glStencilOp(GLenum fail, GLenum zfail, GLenum zpass) {
        glad_glStencilOp(fail, zfail, zpass);
    }
    #undef glDepthFunc
    void LWCPPGL_CALL glDepthFunc(GLenum func) {
        glad_glDepthFunc(func);
    }
    #undef glPixelStoref
    void LWCPPGL_CALL glPixelStoref(GLenum pname, GLfloat param) {
        glad_glPixelStoref(pname, param);
    }
    #undef glPixelStorei
    void LWCPPGL_CALL glPixelStorei(GLenum pname, GLint param) {
        glad_glPixelStorei(pname, param);
    }
    #undef glReadBuffer
    void LWCPPGL_CALL glReadBuffer(GLenum src) {
        glad_glReadBuffer(src);
    }
    #undef glReadPixels
    void LWCPPGL_CALL glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void* pixels) {
        glad_glReadPixels(x, y, width, height, format, type, pixels);
    }
    #undef glGetBooleanv
    void LWCPPGL_CALL glGetBooleanv(GLenum pname, GLboolean * data) {
        glad_glGetBooleanv(pname, data);
    }
    #undef glGetDoublev
    void LWCPPGL_CALL glGetDoublev(GLenum pname, GLdouble * data) {
        glad_glGetDoublev(pname, data);
    }
    #undef glGetError
    GLenum LWCPPGL_CALL glGetError(void) {
        return glad_glGetError();
    }
    #undef glGetFloatv
    void LWCPPGL_CALL glGetFloatv(GLenum pname, GLfloat * data) {
        glad_glGetFloatv(pname, data);
    }
    #undef glGetIntegerv
    void LWCPPGL_CALL glGetIntegerv(GLenum pname, GLint * data) {
        glad_glGetIntegerv(pname, data);
    }
    #undef glGetString
    const GLubyte * LWCPPGL_CALL glGetString(GLenum name) {
        return glad_glGetString(name);
    }
    #undef glGetTexImage
    void LWCPPGL_CALL glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void* pixels) {
        glad_glGetTexImage(target, level, format, type, pixels);
    }
    #undef glGetTexParameterfv
    void LWCPPGL_CALL glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params) {
        glad_glGetTexParameterfv(target, pname, params);
    }
    #undef glGetTexParameteriv
    void LWCPPGL_CALL glGetTexParameteriv(GLenum target, GLenum pname, GLint * params) {
        glad_glGetTexParameteriv(target, pname, params);
    }
    #undef glGetTexLevelParameterfv
    void LWCPPGL_CALL glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params) {
        glad_glGetTexLevelParameterfv(target, level, pname, params);
    }
    #undef glGetTexLevelParameteriv
    void LWCPPGL_CALL glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params) {
        glad_glGetTexLevelParameteriv(target, level, pname, params);
    }
    #undef glIsEnabled
    GLboolean LWCPPGL_CALL glIsEnabled(GLenum cap) {
        return glad_glIsEnabled(cap);
    }
    #undef glDepthRange
    void LWCPPGL_CALL glDepthRange(GLdouble n, GLdouble f) {
        glad_glDepthRange(n, f);
    }
    #undef glViewport
    void LWCPPGL_CALL glViewport(GLint x, GLint y, GLsizei width, GLsizei height) {
        glad_glViewport(x, y, width, height);
    }
    #undef glNewList
    void LWCPPGL_CALL glNewList(GLuint list, GLenum mode) {
        glad_glNewList(list, mode);
    }
    #undef glEndList
    void LWCPPGL_CALL glEndList(void) {
        glad_glEndList();
    }
    #undef glCallList
    void LWCPPGL_CALL glCallList(GLuint list) {
        glad_glCallList(list);
    }
    #undef glCallLists
    void LWCPPGL_CALL glCallLists(GLsizei n, GLenum type, const void* lists) {
        glad_glCallLists(n, type, lists);
    }
    #undef glDeleteLists
    void LWCPPGL_CALL glDeleteLists(GLuint list, GLsizei range) {
        glad_glDeleteLists(list, range);
    }
    #undef glGenLists
    GLuint LWCPPGL_CALL glGenLists(GLsizei range) {
        return glad_glGenLists(range);
    }
    #undef glListBase
    void LWCPPGL_CALL glListBase(GLuint base) {
        glad_glListBase(base);
    }
    #undef glBegin
    void LWCPPGL_CALL glBegin(GLenum mode) {
        glad_glBegin(mode);
    }
    #undef glBitmap
    void LWCPPGL_CALL glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap) {
        glad_glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
    }
    #undef glColor3b
    void LWCPPGL_CALL glColor3b(GLbyte red, GLbyte green, GLbyte blue) {
        glad_glColor3b(red, green, blue);
    }
    #undef glColor3bv
    void LWCPPGL_CALL glColor3bv(const GLbyte * v) {
        glad_glColor3bv(v);
    }
    #undef glColor3d
    void LWCPPGL_CALL glColor3d(GLdouble red, GLdouble green, GLdouble blue) {
        glad_glColor3d(red, green, blue);
    }
    #undef glColor3dv
    void LWCPPGL_CALL glColor3dv(const GLdouble * v) {
        glad_glColor3dv(v);
    }
    #undef glColor3f
    void LWCPPGL_CALL glColor3f(GLfloat red, GLfloat green, GLfloat blue) {
        glad_glColor3f(red, green, blue);
    }
    #undef glColor3fv
    void LWCPPGL_CALL glColor3fv(const GLfloat * v) {
        glad_glColor3fv(v);
    }
    #undef glColor3i
    void LWCPPGL_CALL glColor3i(GLint red, GLint green, GLint blue) {
        glad_glColor3i(red, green, blue);
    }
    #undef glColor3iv
    void LWCPPGL_CALL glColor3iv(const GLint * v) {
        glad_glColor3iv(v);
    }
    #undef glColor3s
    void LWCPPGL_CALL glColor3s(GLshort red, GLshort green, GLshort blue) {
        glad_glColor3s(red, green, blue);
    }
    #undef glColor3sv
    void LWCPPGL_CALL glColor3sv(const GLshort * v) {
        glad_glColor3sv(v);
    }
    #undef glColor3ub
    void LWCPPGL_CALL glColor3ub(GLubyte red, GLubyte green, GLubyte blue) {
        glad_glColor3ub(red, green, blue);
    }
    #undef glColor3ubv
    void LWCPPGL_CALL glColor3ubv(const GLubyte * v) {
        glad_glColor3ubv(v);
    }
    #undef glColor3ui
    void LWCPPGL_CALL glColor3ui(GLuint red, GLuint green, GLuint blue) {
        glad_glColor3ui(red, green, blue);
    }
    #undef glColor3uiv
    void LWCPPGL_CALL glColor3uiv(const GLuint * v) {
        glad_glColor3uiv(v);
    }
    #undef glColor3us
    void LWCPPGL_CALL glColor3us(GLushort red, GLushort green, GLushort blue) {
        glad_glColor3us(red, green, blue);
    }
    #undef glColor3usv
    void LWCPPGL_CALL glColor3usv(const GLushort * v) {
        glad_glColor3usv(v);
    }
    #undef glColor4b
    void LWCPPGL_CALL glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha) {
        glad_glColor4b(red, green, blue, alpha);
    }
    #undef glColor4bv
    void LWCPPGL_CALL glColor4bv(const GLbyte * v) {
        glad_glColor4bv(v);
    }
    #undef glColor4d
    void LWCPPGL_CALL glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha) {
        glad_glColor4d(red, green, blue, alpha);
    }
    #undef glColor4dv
    void LWCPPGL_CALL glColor4dv(const GLdouble * v) {
        glad_glColor4dv(v);
    }
    #undef glColor4f
    void LWCPPGL_CALL glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
        glad_glColor4f(red, green, blue, alpha);
    }
    #undef glColor4fv
    void LWCPPGL_CALL glColor4fv(const GLfloat * v) {
        glad_glColor4fv(v);
    }
    #undef glColor4i
    void LWCPPGL_CALL glColor4i(GLint red, GLint green, GLint blue, GLint alpha) {
        glad_glColor4i(red, green, blue, alpha);
    }
    #undef glColor4iv
    void LWCPPGL_CALL glColor4iv(const GLint * v) {
        glad_glColor4iv(v);
    }
    #undef glColor4s
    void LWCPPGL_CALL glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha) {
        glad_glColor4s(red, green, blue, alpha);
    }
    #undef glColor4sv
    void LWCPPGL_CALL glColor4sv(const GLshort * v) {
        glad_glColor4sv(v);
    }
    #undef glColor4ub
    void LWCPPGL_CALL glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha) {
        glad_glColor4ub(red, green, blue, alpha);
    }
    #undef glColor4ubv
    void LWCPPGL_CALL glColor4ubv(const GLubyte * v) {
        glad_glColor4ubv(v);
    }
    #undef glColor4ui
    void LWCPPGL_CALL glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha) {
        glad_glColor4ui(red, green, blue, alpha);
    }
    #undef glColor4uiv
    void LWCPPGL_CALL glColor4uiv(const GLuint * v) {
        glad_glColor4uiv(v);
    }
    #undef glColor4us
    void LWCPPGL_CALL glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha) {
        glad_glColor4us(red, green, blue, alpha);
    }
    #undef glColor4usv
    void LWCPPGL_CALL glColor4usv(const GLushort * v) {
        glad_glColor4usv(v);
    }
    #undef glEdgeFlag
    void LWCPPGL_CALL glEdgeFlag(GLboolean flag) {
        glad_glEdgeFlag(flag);
    }
    #undef glEdgeFlagv
    void LWCPPGL_CALL glEdgeFlagv(const GLboolean * flag) {
        glad_glEdgeFlagv(flag);
    }
    #undef glEnd
    void LWCPPGL_CALL glEnd(void) {
        glad_glEnd();
    }
    #undef glIndexd
    void LWCPPGL_CALL glIndexd(GLdouble c) {
        glad_glIndexd(c);
    }
    #undef glIndexdv
    void LWCPPGL_CALL glIndexdv(const GLdouble * c) {
        glad_glIndexdv(c);
    }
    #undef glIndexf
    void LWCPPGL_CALL glIndexf(GLfloat c) {
        glad_glIndexf(c);
    }
    #undef glIndexfv
    void LWCPPGL_CALL glIndexfv(const GLfloat * c) {
        glad_glIndexfv(c);
    }
    #undef glIndexi
    void LWCPPGL_CALL glIndexi(GLint c) {
        glad_glIndexi(c);
    }
    #undef glIndexiv
    void LWCPPGL_CALL glIndexiv(const GLint * c) {
        glad_glIndexiv(c);
    }
    #undef glIndexs
    void LWCPPGL_CALL glIndexs(GLshort c) {
        glad_glIndexs(c);
    }
    #undef glIndexsv
    void LWCPPGL_CALL glIndexsv(const GLshort * c) {
        glad_glIndexsv(c);
    }
    #undef glNormal3b
    void LWCPPGL_CALL glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz) {
        glad_glNormal3b(nx, ny, nz);
    }
    #undef glNormal3bv
    void LWCPPGL_CALL glNormal3bv(const GLbyte * v) {
        glad_glNormal3bv(v);
    }
    #undef glNormal3d
    void LWCPPGL_CALL glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz) {
        glad_glNormal3d(nx, ny, nz);
    }
    #undef glNormal3dv
    void LWCPPGL_CALL glNormal3dv(const GLdouble * v) {
        glad_glNormal3dv(v);
    }
    #undef glNormal3f
    void LWCPPGL_CALL glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz) {
        glad_glNormal3f(nx, ny, nz);
    }
    #undef glNormal3fv
    void LWCPPGL_CALL glNormal3fv(const GLfloat * v) {
        glad_glNormal3fv(v);
    }
    #undef glNormal3i
    void LWCPPGL_CALL glNormal3i(GLint nx, GLint ny, GLint nz) {
        glad_glNormal3i(nx, ny, nz);
    }
    #undef glNormal3iv
    void LWCPPGL_CALL glNormal3iv(const GLint * v) {
        glad_glNormal3iv(v);
    }
    #undef glNormal3s
    void LWCPPGL_CALL glNormal3s(GLshort nx, GLshort ny, GLshort nz) {
        glad_glNormal3s(nx, ny, nz);
    }
    #undef glNormal3sv
    void LWCPPGL_CALL glNormal3sv(const GLshort * v) {
        glad_glNormal3sv(v);
    }
    #undef glRasterPos2d
    void LWCPPGL_CALL glRasterPos2d(GLdouble x, GLdouble y) {
        glad_glRasterPos2d(x, y);
    }
    #undef glRasterPos2dv
    void LWCPPGL_CALL glRasterPos2dv(const GLdouble * v) {
        glad_glRasterPos2dv(v);
    }
    #undef glRasterPos2f
    void LWCPPGL_CALL glRasterPos2f(GLfloat x, GLfloat y) {
        glad_glRasterPos2f(x, y);
    }
    #undef glRasterPos2fv
    void LWCPPGL_CALL glRasterPos2fv(const GLfloat * v) {
        glad_glRasterPos2fv(v);
    }
    #undef glRasterPos2i
    void LWCPPGL_CALL glRasterPos2i(GLint x, GLint y) {
        glad_glRasterPos2i(x, y);
    }
    #undef glRasterPos2iv
    void LWCPPGL_CALL glRasterPos2iv(const GLint * v) {
        glad_glRasterPos2iv(v);
    }
    #undef glRasterPos2s
    void LWCPPGL_CALL glRasterPos2s(GLshort x, GLshort y) {
        glad_glRasterPos2s(x, y);
    }
    #undef glRasterPos2sv
    void LWCPPGL_CALL glRasterPos2sv(const GLshort * v) {
        glad_glRasterPos2sv(v);
    }
    #undef glRasterPos3d
    void LWCPPGL_CALL glRasterPos3d(GLdouble x, GLdouble y, GLdouble z) {
        glad_glRasterPos3d(x, y, z);
    }
    #undef glRasterPos3dv
    void LWCPPGL_CALL glRasterPos3dv(const GLdouble * v) {
        glad_glRasterPos3dv(v);
    }
    #undef glRasterPos3f
    void LWCPPGL_CALL glRasterPos3f(GLfloat x, GLfloat y, GLfloat z) {
        glad_glRasterPos3f(x, y, z);
    }
    #undef glRasterPos3fv
    void LWCPPGL_CALL glRasterPos3fv(const GLfloat * v) {
        glad_glRasterPos3fv(v);
    }
    #undef glRasterPos3i
    void LWCPPGL_CALL glRasterPos3i(GLint x, GLint y, GLint z) {
        glad_glRasterPos3i(x, y, z);
    }
    #undef glRasterPos3iv
    void LWCPPGL_CALL glRasterPos3iv(const GLint * v) {
        glad_glRasterPos3iv(v);
    }
    #undef glRasterPos3s
    void LWCPPGL_CALL glRasterPos3s(GLshort x, GLshort y, GLshort z) {
        glad_glRasterPos3s(x, y, z);
    }
    #undef glRasterPos3sv
    void LWCPPGL_CALL glRasterPos3sv(const GLshort * v) {
        glad_glRasterPos3sv(v);
    }
    #undef glRasterPos4d
    void LWCPPGL_CALL glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
        glad_glRasterPos4d(x, y, z, w);
    }
    #undef glRasterPos4dv
    void LWCPPGL_CALL glRasterPos4dv(const GLdouble * v) {
        glad_glRasterPos4dv(v);
    }
    #undef glRasterPos4f
    void LWCPPGL_CALL glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
        glad_glRasterPos4f(x, y, z, w);
    }
    #undef glRasterPos4fv
    void LWCPPGL_CALL glRasterPos4fv(const GLfloat * v) {
        glad_glRasterPos4fv(v);
    }
    #undef glRasterPos4i
    void LWCPPGL_CALL glRasterPos4i(GLint x, GLint y, GLint z, GLint w) {
        glad_glRasterPos4i(x, y, z, w);
    }
    #undef glRasterPos4iv
    void LWCPPGL_CALL glRasterPos4iv(const GLint * v) {
        glad_glRasterPos4iv(v);
    }
    #undef glRasterPos4s
    void LWCPPGL_CALL glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w) {
        glad_glRasterPos4s(x, y, z, w);
    }
    #undef glRasterPos4sv
    void LWCPPGL_CALL glRasterPos4sv(const GLshort * v) {
        glad_glRasterPos4sv(v);
    }
    #undef glRectd
    void LWCPPGL_CALL glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2) {
        glad_glRectd(x1, y1, x2, y2);
    }
    #undef glRectdv
    void LWCPPGL_CALL glRectdv(const GLdouble * v1, const GLdouble * v2) {
        glad_glRectdv(v1, v2);
    }
    #undef glRectf
    void LWCPPGL_CALL glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2) {
        glad_glRectf(x1, y1, x2, y2);
    }
    #undef glRectfv
    void LWCPPGL_CALL glRectfv(const GLfloat * v1, const GLfloat * v2) {
        glad_glRectfv(v1, v2);
    }
    #undef glRecti
    void LWCPPGL_CALL glRecti(GLint x1, GLint y1, GLint x2, GLint y2) {
        glad_glRecti(x1, y1, x2, y2);
    }
    #undef glRectiv
    void LWCPPGL_CALL glRectiv(const GLint * v1, const GLint * v2) {
        glad_glRectiv(v1, v2);
    }
    #undef glRects
    void LWCPPGL_CALL glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2) {
        glad_glRects(x1, y1, x2, y2);
    }
    #undef glRectsv
    void LWCPPGL_CALL glRectsv(const GLshort * v1, const GLshort * v2) {
        glad_glRectsv(v1, v2);
    }
    #undef glTexCoord1d
    void LWCPPGL_CALL glTexCoord1d(GLdouble s) {
        glad_glTexCoord1d(s);
    }
    #undef glTexCoord1dv
    void LWCPPGL_CALL glTexCoord1dv(const GLdouble * v) {
        glad_glTexCoord1dv(v);
    }
    #undef glTexCoord1f
    void LWCPPGL_CALL glTexCoord1f(GLfloat s) {
        glad_glTexCoord1f(s);
    }
    #undef glTexCoord1fv
    void LWCPPGL_CALL glTexCoord1fv(const GLfloat * v) {
        glad_glTexCoord1fv(v);
    }
    #undef glTexCoord1i
    void LWCPPGL_CALL glTexCoord1i(GLint s) {
        glad_glTexCoord1i(s);
    }
    #undef glTexCoord1iv
    void LWCPPGL_CALL glTexCoord1iv(const GLint * v) {
        glad_glTexCoord1iv(v);
    }
    #undef glTexCoord1s
    void LWCPPGL_CALL glTexCoord1s(GLshort s) {
        glad_glTexCoord1s(s);
    }
    #undef glTexCoord1sv
    void LWCPPGL_CALL glTexCoord1sv(const GLshort * v) {
        glad_glTexCoord1sv(v);
    }
    #undef glTexCoord2d
    void LWCPPGL_CALL glTexCoord2d(GLdouble s, GLdouble t) {
        glad_glTexCoord2d(s, t);
    }
    #undef glTexCoord2dv
    void LWCPPGL_CALL glTexCoord2dv(const GLdouble * v) {
        glad_glTexCoord2dv(v);
    }
    #undef glTexCoord2f
    void LWCPPGL_CALL glTexCoord2f(GLfloat s, GLfloat t) {
        glad_glTexCoord2f(s, t);
    }
    #undef glTexCoord2fv
    void LWCPPGL_CALL glTexCoord2fv(const GLfloat * v) {
        glad_glTexCoord2fv(v);
    }
    #undef glTexCoord2i
    void LWCPPGL_CALL glTexCoord2i(GLint s, GLint t) {
        glad_glTexCoord2i(s, t);
    }
    #undef glTexCoord2iv
    void LWCPPGL_CALL glTexCoord2iv(const GLint * v) {
        glad_glTexCoord2iv(v);
    }
    #undef glTexCoord2s
    void LWCPPGL_CALL glTexCoord2s(GLshort s, GLshort t) {
        glad_glTexCoord2s(s, t);
    }
    #undef glTexCoord2sv
    void LWCPPGL_CALL glTexCoord2sv(const GLshort * v) {
        glad_glTexCoord2sv(v);
    }
    #undef glTexCoord3d
    void LWCPPGL_CALL glTexCoord3d(GLdouble s, GLdouble t, GLdouble r) {
        glad_glTexCoord3d(s, t, r);
    }
    #undef glTexCoord3dv
    void LWCPPGL_CALL glTexCoord3dv(const GLdouble * v) {
        glad_glTexCoord3dv(v);
    }
    #undef glTexCoord3f
    void LWCPPGL_CALL glTexCoord3f(GLfloat s, GLfloat t, GLfloat r) {
        glad_glTexCoord3f(s, t, r);
    }
    #undef glTexCoord3fv
    void LWCPPGL_CALL glTexCoord3fv(const GLfloat * v) {
        glad_glTexCoord3fv(v);
    }
    #undef glTexCoord3i
    void LWCPPGL_CALL glTexCoord3i(GLint s, GLint t, GLint r) {
        glad_glTexCoord3i(s, t, r);
    }
    #undef glTexCoord3iv
    void LWCPPGL_CALL glTexCoord3iv(const GLint * v) {
        glad_glTexCoord3iv(v);
    }
    #undef glTexCoord3s
    void LWCPPGL_CALL glTexCoord3s(GLshort s, GLshort t, GLshort r) {
        glad_glTexCoord3s(s, t, r);
    }
    #undef glTexCoord3sv
    void LWCPPGL_CALL glTexCoord3sv(const GLshort * v) {
        glad_glTexCoord3sv(v);
    }
    #undef glTexCoord4d
    void LWCPPGL_CALL glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q) {
        glad_glTexCoord4d(s, t, r, q);
    }
    #undef glTexCoord4dv
    void LWCPPGL_CALL glTexCoord4dv(const GLdouble * v) {
        glad_glTexCoord4dv(v);
    }
    #undef glTexCoord4f
    void LWCPPGL_CALL glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q) {
        glad_glTexCoord4f(s, t, r, q);
    }
    #undef glTexCoord4fv
    void LWCPPGL_CALL glTexCoord4fv(const GLfloat * v) {
        glad_glTexCoord4fv(v);
    }
    #undef glTexCoord4i
    void LWCPPGL_CALL glTexCoord4i(GLint s, GLint t, GLint r, GLint q) {
        glad_glTexCoord4i(s, t, r, q);
    }
    #undef glTexCoord4iv
    void LWCPPGL_CALL glTexCoord4iv(const GLint * v) {
        glad_glTexCoord4iv(v);
    }
    #undef glTexCoord4s
    void LWCPPGL_CALL glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q) {
        glad_glTexCoord4s(s, t, r, q);
    }
    #undef glTexCoord4sv
    void LWCPPGL_CALL glTexCoord4sv(const GLshort * v) {
        glad_glTexCoord4sv(v);
    }
    #undef glVertex2d
    void LWCPPGL_CALL glVertex2d(GLdouble x, GLdouble y) {
        glad_glVertex2d(x, y);
    }
    #undef glVertex2dv
    void LWCPPGL_CALL glVertex2dv(const GLdouble * v) {
        glad_glVertex2dv(v);
    }
    #undef glVertex2f
    void LWCPPGL_CALL glVertex2f(GLfloat x, GLfloat y) {
        glad_glVertex2f(x, y);
    }
    #undef glVertex2fv
    void LWCPPGL_CALL glVertex2fv(const GLfloat * v) {
        glad_glVertex2fv(v);
    }
    #undef glVertex2i
    void LWCPPGL_CALL glVertex2i(GLint x, GLint y) {
        glad_glVertex2i(x, y);
    }
    #undef glVertex2iv
    void LWCPPGL_CALL glVertex2iv(const GLint * v) {
        glad_glVertex2iv(v);
    }
    #undef glVertex2s
    void LWCPPGL_CALL glVertex2s(GLshort x, GLshort y) {
        glad_glVertex2s(x, y);
    }
    #undef glVertex2sv
    void LWCPPGL_CALL glVertex2sv(const GLshort * v) {
        glad_glVertex2sv(v);
    }
    #undef glVertex3d
    void LWCPPGL_CALL glVertex3d(GLdouble x, GLdouble y, GLdouble z) {
        glad_glVertex3d(x, y, z);
    }
    #undef glVertex3dv
    void LWCPPGL_CALL glVertex3dv(const GLdouble * v) {
        glad_glVertex3dv(v);
    }
    #undef glVertex3f
    void LWCPPGL_CALL glVertex3f(GLfloat x, GLfloat y, GLfloat z) {
        glad_glVertex3f(x, y, z);
    }
    #undef glVertex3fv
    void LWCPPGL_CALL glVertex3fv(const GLfloat * v) {
        glad_glVertex3fv(v);
    }
    #undef glVertex3i
    void LWCPPGL_CALL glVertex3i(GLint x, GLint y, GLint z) {
        glad_glVertex3i(x, y, z);
    }
    #undef glVertex3iv
    void LWCPPGL_CALL glVertex3iv(const GLint * v) {
        glad_glVertex3iv(v);
    }
    #undef glVertex3s
    void LWCPPGL_CALL glVertex3s(GLshort x, GLshort y, GLshort z) {
        glad_glVertex3s(x, y, z);
    }
    #undef glVertex3sv
    void LWCPPGL_CALL glVertex3sv(const GLshort * v) {
        glad_glVertex3sv(v);
    }
    #undef glVertex4d
    void LWCPPGL_CALL glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
        glad_glVertex4d(x, y, z, w);
    }
    #undef glVertex4dv
    void LWCPPGL_CALL glVertex4dv(const GLdouble * v) {
        glad_glVertex4dv(v);
    }
    #undef glVertex4f
    void LWCPPGL_CALL glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
        glad_glVertex4f(x, y, z, w);
    }
    #undef glVertex4fv
    void LWCPPGL_CALL glVertex4fv(const GLfloat * v) {
        glad_glVertex4fv(v);
    }
    #undef glVertex4i
    void LWCPPGL_CALL glVertex4i(GLint x, GLint y, GLint z, GLint w) {
        glad_glVertex4i(x, y, z, w);
    }
    #undef glVertex4iv
    void LWCPPGL_CALL glVertex4iv(const GLint * v) {
        glad_glVertex4iv(v);
    }
    #undef glVertex4s
    void LWCPPGL_CALL glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w) {
        glad_glVertex4s(x, y, z, w);
    }
    #undef glVertex4sv
    void LWCPPGL_CALL glVertex4sv(const GLshort * v) {
        glad_glVertex4sv(v);
    }
    #undef glClipPlane
    void LWCPPGL_CALL glClipPlane(GLenum plane, const GLdouble * equation) {
        glad_glClipPlane(plane, equation);
    }
    #undef glColorMaterial
    void LWCPPGL_CALL glColorMaterial(GLenum face, GLenum mode) {
        glad_glColorMaterial(face, mode);
    }
    #undef glFogf
    void LWCPPGL_CALL glFogf(GLenum pname, GLfloat param) {
        glad_glFogf(pname, param);
    }
    #undef glFogfv
    void LWCPPGL_CALL glFogfv(GLenum pname, const GLfloat * params) {
        glad_glFogfv(pname, params);
    }
    #undef glFogi
    void LWCPPGL_CALL glFogi(GLenum pname, GLint param) {
        glad_glFogi(pname, param);
    }
    #undef glFogiv
    void LWCPPGL_CALL glFogiv(GLenum pname, const GLint * params) {
        glad_glFogiv(pname, params);
    }
    #undef glLightf
    void LWCPPGL_CALL glLightf(GLenum light, GLenum pname, GLfloat param) {
        glad_glLightf(light, pname, param);
    }
    #undef glLightfv
    void LWCPPGL_CALL glLightfv(GLenum light, GLenum pname, const GLfloat * params) {
        glad_glLightfv(light, pname, params);
    }
    #undef glLighti
    void LWCPPGL_CALL glLighti(GLenum light, GLenum pname, GLint param) {
        glad_glLighti(light, pname, param);
    }
    #undef glLightiv
    void LWCPPGL_CALL glLightiv(GLenum light, GLenum pname, const GLint * params) {
        glad_glLightiv(light, pname, params);
    }
    #undef glLightModelf
    void LWCPPGL_CALL glLightModelf(GLenum pname, GLfloat param) {
        glad_glLightModelf(pname, param);
    }
    #undef glLightModelfv
    void LWCPPGL_CALL glLightModelfv(GLenum pname, const GLfloat * params) {
        glad_glLightModelfv(pname, params);
    }
    #undef glLightModeli
    void LWCPPGL_CALL glLightModeli(GLenum pname, GLint param) {
        glad_glLightModeli(pname, param);
    }
    #undef glLightModeliv
    void LWCPPGL_CALL glLightModeliv(GLenum pname, const GLint * params) {
        glad_glLightModeliv(pname, params);
    }
    #undef glLineStipple
    void LWCPPGL_CALL glLineStipple(GLint factor, GLushort pattern) {
        glad_glLineStipple(factor, pattern);
    }
    #undef glMaterialf
    void LWCPPGL_CALL glMaterialf(GLenum face, GLenum pname, GLfloat param) {
        glad_glMaterialf(face, pname, param);
    }
    #undef glMaterialfv
    void LWCPPGL_CALL glMaterialfv(GLenum face, GLenum pname, const GLfloat * params) {
        glad_glMaterialfv(face, pname, params);
    }
    #undef glMateriali
    void LWCPPGL_CALL glMateriali(GLenum face, GLenum pname, GLint param) {
        glad_glMateriali(face, pname, param);
    }
    #undef glMaterialiv
    void LWCPPGL_CALL glMaterialiv(GLenum face, GLenum pname, const GLint * params) {
        glad_glMaterialiv(face, pname, params);
    }
    #undef glPolygonStipple
    void LWCPPGL_CALL glPolygonStipple(const GLubyte * mask) {
        glad_glPolygonStipple(mask);
    }
    #undef glShadeModel
    void LWCPPGL_CALL glShadeModel(GLenum mode) {
        glad_glShadeModel(mode);
    }
    #undef glTexEnvf
    void LWCPPGL_CALL glTexEnvf(GLenum target, GLenum pname, GLfloat param) {
        glad_glTexEnvf(target, pname, param);
    }
    #undef glTexEnvfv
    void LWCPPGL_CALL glTexEnvfv(GLenum target, GLenum pname, const GLfloat * params) {
        glad_glTexEnvfv(target, pname, params);
    }
    #undef glTexEnvi
    void LWCPPGL_CALL glTexEnvi(GLenum target, GLenum pname, GLint param) {
        glad_glTexEnvi(target, pname, param);
    }
    #undef glTexEnviv
    void LWCPPGL_CALL glTexEnviv(GLenum target, GLenum pname, const GLint * params) {
        glad_glTexEnviv(target, pname, params);
    }
    #undef glTexGend
    void LWCPPGL_CALL glTexGend(GLenum coord, GLenum pname, GLdouble param) {
        glad_glTexGend(coord, pname, param);
    }
    #undef glTexGendv
    void LWCPPGL_CALL glTexGendv(GLenum coord, GLenum pname, const GLdouble * params) {
        glad_glTexGendv(coord, pname, params);
    }
    #undef glTexGenf
    void LWCPPGL_CALL glTexGenf(GLenum coord, GLenum pname, GLfloat param) {
        glad_glTexGenf(coord, pname, param);
    }
    #undef glTexGenfv
    void LWCPPGL_CALL glTexGenfv(GLenum coord, GLenum pname, const GLfloat * params) {
        glad_glTexGenfv(coord, pname, params);
    }
    #undef glTexGeni
    void LWCPPGL_CALL glTexGeni(GLenum coord, GLenum pname, GLint param) {
        glad_glTexGeni(coord, pname, param);
    }
    #undef glTexGeniv
    void LWCPPGL_CALL glTexGeniv(GLenum coord, GLenum pname, const GLint * params) {
        glad_glTexGeniv(coord, pname, params);
    }
    #undef glFeedbackBuffer
    void LWCPPGL_CALL glFeedbackBuffer(GLsizei size, GLenum type, GLfloat * buffer) {
        glad_glFeedbackBuffer(size, type, buffer);
    }
    #undef glSelectBuffer
    void LWCPPGL_CALL glSelectBuffer(GLsizei size, GLuint * buffer) {
        glad_glSelectBuffer(size, buffer);
    }
    #undef glRenderMode
    GLint LWCPPGL_CALL glRenderMode(GLenum mode) {
        return glad_glRenderMode(mode);
    }
    #undef glInitNames
    void LWCPPGL_CALL glInitNames(void) {
        glad_glInitNames();
    }
    #undef glLoadName
    void LWCPPGL_CALL glLoadName(GLuint name) {
        glad_glLoadName(name);
    }
    #undef glPassThrough
    void LWCPPGL_CALL glPassThrough(GLfloat token) {
        glad_glPassThrough(token);
    }
    #undef glPopName
    void LWCPPGL_CALL glPopName(void) {
        glad_glPopName();
    }
    #undef glPushName
    void LWCPPGL_CALL glPushName(GLuint name) {
        glad_glPushName(name);
    }
    #undef glClearAccum
    void LWCPPGL_CALL glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
        glad_glClearAccum(red, green, blue, alpha);
    }
    #undef glClearIndex
    void LWCPPGL_CALL glClearIndex(GLfloat c) {
        glad_glClearIndex(c);
    }
    #undef glIndexMask
    void LWCPPGL_CALL glIndexMask(GLuint mask) {
        glad_glIndexMask(mask);
    }
    #undef glAccum
    void LWCPPGL_CALL glAccum(GLenum op, GLfloat value) {
        glad_glAccum(op, value);
    }
    #undef glPopAttrib
    void LWCPPGL_CALL glPopAttrib(void) {
        glad_glPopAttrib();
    }
    #undef glPushAttrib
    void LWCPPGL_CALL glPushAttrib(GLbitfield mask) {
        glad_glPushAttrib(mask);
    }
    #undef glMap1d
    void LWCPPGL_CALL glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points) {
        glad_glMap1d(target, u1, u2, stride, order, points);
    }
    #undef glMap1f
    void LWCPPGL_CALL glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points) {
        glad_glMap1f(target, u1, u2, stride, order, points);
    }
    #undef glMap2d
    void LWCPPGL_CALL glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points) {
        glad_glMap2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
    }
    #undef glMap2f
    void LWCPPGL_CALL glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points) {
        glad_glMap2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
    }
    #undef glMapGrid1d
    void LWCPPGL_CALL glMapGrid1d(GLint un, GLdouble u1, GLdouble u2) {
        glad_glMapGrid1d(un, u1, u2);
    }
    #undef glMapGrid1f
    void LWCPPGL_CALL glMapGrid1f(GLint un, GLfloat u1, GLfloat u2) {
        glad_glMapGrid1f(un, u1, u2);
    }
    #undef glMapGrid2d
    void LWCPPGL_CALL glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2) {
        glad_glMapGrid2d(un, u1, u2, vn, v1, v2);
    }
    #undef glMapGrid2f
    void LWCPPGL_CALL glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2) {
        glad_glMapGrid2f(un, u1, u2, vn, v1, v2);
    }
    #undef glEvalCoord1d
    void LWCPPGL_CALL glEvalCoord1d(GLdouble u) {
        glad_glEvalCoord1d(u);
    }
    #undef glEvalCoord1dv
    void LWCPPGL_CALL glEvalCoord1dv(const GLdouble * u) {
        glad_glEvalCoord1dv(u);
    }
    #undef glEvalCoord1f
    void LWCPPGL_CALL glEvalCoord1f(GLfloat u) {
        glad_glEvalCoord1f(u);
    }
    #undef glEvalCoord1fv
    void LWCPPGL_CALL glEvalCoord1fv(const GLfloat * u) {
        glad_glEvalCoord1fv(u);
    }
    #undef glEvalCoord2d
    void LWCPPGL_CALL glEvalCoord2d(GLdouble u, GLdouble v) {
        glad_glEvalCoord2d(u, v);
    }
    #undef glEvalCoord2dv
    void LWCPPGL_CALL glEvalCoord2dv(const GLdouble * u) {
        glad_glEvalCoord2dv(u);
    }
    #undef glEvalCoord2f
    void LWCPPGL_CALL glEvalCoord2f(GLfloat u, GLfloat v) {
        glad_glEvalCoord2f(u, v);
    }
    #undef glEvalCoord2fv
    void LWCPPGL_CALL glEvalCoord2fv(const GLfloat * u) {
        glad_glEvalCoord2fv(u);
    }
    #undef glEvalMesh1
    void LWCPPGL_CALL glEvalMesh1(GLenum mode, GLint i1, GLint i2) {
        glad_glEvalMesh1(mode, i1, i2);
    }
    #undef glEvalPoint1
    void LWCPPGL_CALL glEvalPoint1(GLint i) {
        glad_glEvalPoint1(i);
    }
    #undef glEvalMesh2
    void LWCPPGL_CALL glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2) {
        glad_glEvalMesh2(mode, i1, i2, j1, j2);
    }
    #undef glEvalPoint2
    void LWCPPGL_CALL glEvalPoint2(GLint i, GLint j) {
        glad_glEvalPoint2(i, j);
    }
    #undef glAlphaFunc
    void LWCPPGL_CALL glAlphaFunc(GLenum func, GLfloat ref) {
        glad_glAlphaFunc(func, ref);
    }
    #undef glPixelZoom
    void LWCPPGL_CALL glPixelZoom(GLfloat xfactor, GLfloat yfactor) {
        glad_glPixelZoom(xfactor, yfactor);
    }
    #undef glPixelTransferf
    void LWCPPGL_CALL glPixelTransferf(GLenum pname, GLfloat param) {
        glad_glPixelTransferf(pname, param);
    }
    #undef glPixelTransferi
    void LWCPPGL_CALL glPixelTransferi(GLenum pname, GLint param) {
        glad_glPixelTransferi(pname, param);
    }
    #undef glPixelMapfv
    void LWCPPGL_CALL glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat * values) {
        glad_glPixelMapfv(map, mapsize, values);
    }
    #undef glPixelMapuiv
    void LWCPPGL_CALL glPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint * values) {
        glad_glPixelMapuiv(map, mapsize, values);
    }
    #undef glPixelMapusv
    void LWCPPGL_CALL glPixelMapusv(GLenum map, GLsizei mapsize, const GLushort * values) {
        glad_glPixelMapusv(map, mapsize, values);
    }
    #undef glCopyPixels
    void LWCPPGL_CALL glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type) {
        glad_glCopyPixels(x, y, width, height, type);
    }
    #undef glDrawPixels
    void LWCPPGL_CALL glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const void* pixels) {
        glad_glDrawPixels(width, height, format, type, pixels);
    }
    #undef glGetClipPlane
    void LWCPPGL_CALL glGetClipPlane(GLenum plane, GLdouble * equation) {
        glad_glGetClipPlane(plane, equation);
    }
    #undef glGetLightfv
    void LWCPPGL_CALL glGetLightfv(GLenum light, GLenum pname, GLfloat * params) {
        glad_glGetLightfv(light, pname, params);
    }
    #undef glGetLightiv
    void LWCPPGL_CALL glGetLightiv(GLenum light, GLenum pname, GLint * params) {
        glad_glGetLightiv(light, pname, params);
    }
    #undef glGetMapdv
    void LWCPPGL_CALL glGetMapdv(GLenum target, GLenum query, GLdouble * v) {
        glad_glGetMapdv(target, query, v);
    }
    #undef glGetMapfv
    void LWCPPGL_CALL glGetMapfv(GLenum target, GLenum query, GLfloat * v) {
        glad_glGetMapfv(target, query, v);
    }
    #undef glGetMapiv
    void LWCPPGL_CALL glGetMapiv(GLenum target, GLenum query, GLint * v) {
        glad_glGetMapiv(target, query, v);
    }
    #undef glGetMaterialfv
    void LWCPPGL_CALL glGetMaterialfv(GLenum face, GLenum pname, GLfloat * params) {
        glad_glGetMaterialfv(face, pname, params);
    }
    #undef glGetMaterialiv
    void LWCPPGL_CALL glGetMaterialiv(GLenum face, GLenum pname, GLint * params) {
        glad_glGetMaterialiv(face, pname, params);
    }
    #undef glGetPixelMapfv
    void LWCPPGL_CALL glGetPixelMapfv(GLenum map, GLfloat * values) {
        glad_glGetPixelMapfv(map, values);
    }
    #undef glGetPixelMapuiv
    void LWCPPGL_CALL glGetPixelMapuiv(GLenum map, GLuint * values) {
        glad_glGetPixelMapuiv(map, values);
    }
    #undef glGetPixelMapusv
    void LWCPPGL_CALL glGetPixelMapusv(GLenum map, GLushort * values) {
        glad_glGetPixelMapusv(map, values);
    }
    #undef glGetPolygonStipple
    void LWCPPGL_CALL glGetPolygonStipple(GLubyte * mask) {
        glad_glGetPolygonStipple(mask);
    }
    #undef glGetTexEnvfv
    void LWCPPGL_CALL glGetTexEnvfv(GLenum target, GLenum pname, GLfloat * params) {
        glad_glGetTexEnvfv(target, pname, params);
    }
    #undef glGetTexEnviv
    void LWCPPGL_CALL glGetTexEnviv(GLenum target, GLenum pname, GLint * params) {
        glad_glGetTexEnviv(target, pname, params);
    }
    #undef glGetTexGendv
    void LWCPPGL_CALL glGetTexGendv(GLenum coord, GLenum pname, GLdouble * params) {
        glad_glGetTexGendv(coord, pname, params);
    }
    #undef glGetTexGenfv
    void LWCPPGL_CALL glGetTexGenfv(GLenum coord, GLenum pname, GLfloat * params) {
        glad_glGetTexGenfv(coord, pname, params);
    }
    #undef glGetTexGeniv
    void LWCPPGL_CALL glGetTexGeniv(GLenum coord, GLenum pname, GLint * params) {
        glad_glGetTexGeniv(coord, pname, params);
    }
    #undef glIsList
    GLboolean LWCPPGL_CALL glIsList(GLuint list) {
        return glad_glIsList(list);
    }
    #undef glFrustum
    void LWCPPGL_CALL glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar) {
        glad_glFrustum(left, right, bottom, top, zNear, zFar);
    }
    #undef glLoadIdentity
    void LWCPPGL_CALL glLoadIdentity(void) {
        glad_glLoadIdentity();
    }
    #undef glLoadMatrixf
    void LWCPPGL_CALL glLoadMatrixf(const GLfloat * m) {
        glad_glLoadMatrixf(m);
    }
    #undef glLoadMatrixd
    void LWCPPGL_CALL glLoadMatrixd(const GLdouble * m) {
        glad_glLoadMatrixd(m);
    }
    #undef glMatrixMode
    void LWCPPGL_CALL glMatrixMode(GLenum mode) {
        glad_glMatrixMode(mode);
    }
    #undef glMultMatrixf
    void LWCPPGL_CALL glMultMatrixf(const GLfloat * m) {
        glad_glMultMatrixf(m);
    }
    #undef glMultMatrixd
    void LWCPPGL_CALL glMultMatrixd(const GLdouble * m) {
        glad_glMultMatrixd(m);
    }
    #undef glOrtho
    void LWCPPGL_CALL glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar) {
        glad_glOrtho(left, right, bottom, top, zNear, zFar);
    }
    #undef glPopMatrix
    void LWCPPGL_CALL glPopMatrix(void) {
        glad_glPopMatrix();
    }
    #undef glPushMatrix
    void LWCPPGL_CALL glPushMatrix(void) {
        glad_glPushMatrix();
    }
    #undef glRotated
    void LWCPPGL_CALL glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z) {
        glad_glRotated(angle, x, y, z);
    }
    #undef glRotatef
    void LWCPPGL_CALL glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z) {
        glad_glRotatef(angle, x, y, z);
    }
    #undef glScaled
    void LWCPPGL_CALL glScaled(GLdouble x, GLdouble y, GLdouble z) {
        glad_glScaled(x, y, z);
    }
    #undef glScalef
    void LWCPPGL_CALL glScalef(GLfloat x, GLfloat y, GLfloat z) {
        glad_glScalef(x, y, z);
    }
    #undef glTranslated
    void LWCPPGL_CALL glTranslated(GLdouble x, GLdouble y, GLdouble z) {
        glad_glTranslated(x, y, z);
    }
    #undef glTranslatef
    void LWCPPGL_CALL glTranslatef(GLfloat x, GLfloat y, GLfloat z) {
        glad_glTranslatef(x, y, z);
    }
    #undef glDrawArrays
    void LWCPPGL_CALL glDrawArrays(GLenum mode, GLint first, GLsizei count) {
        glad_glDrawArrays(mode, first, count);
    }
    #undef glDrawElements
    void LWCPPGL_CALL glDrawElements(GLenum mode, GLsizei count, GLenum type, const void* indices) {
        glad_glDrawElements(mode, count, type, indices);
    }
    #undef glGetPointerv
    void LWCPPGL_CALL glGetPointerv(GLenum pname, void* * params) {
        glad_glGetPointerv(pname, params);
    }
    #undef glPolygonOffset
    void LWCPPGL_CALL glPolygonOffset(GLfloat factor, GLfloat units) {
        glad_glPolygonOffset(factor, units);
    }
    #undef glCopyTexImage1D
    void LWCPPGL_CALL glCopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) {
        glad_glCopyTexImage1D(target, level, internalformat, x, y, width, border);
    }
    #undef glCopyTexImage2D
    void LWCPPGL_CALL glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) {
        glad_glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
    }
    #undef glCopyTexSubImage1D
    void LWCPPGL_CALL glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) {
        glad_glCopyTexSubImage1D(target, level, xoffset, x, y, width);
    }
    #undef glCopyTexSubImage2D
    void LWCPPGL_CALL glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
        glad_glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
    }
    #undef glTexSubImage1D
    void LWCPPGL_CALL glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void* pixels) {
        glad_glTexSubImage1D(target, level, xoffset, width, format, type, pixels);
    }
    #undef glTexSubImage2D
    void LWCPPGL_CALL glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* pixels) {
        glad_glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
    }
    #undef glBindTexture
    void LWCPPGL_CALL glBindTexture(GLenum target, GLuint texture) {
        glad_glBindTexture(target, texture);
    }
    #undef glDeleteTextures
    void LWCPPGL_CALL glDeleteTextures(GLsizei n, const GLuint * textures) {
        glad_glDeleteTextures(n, textures);
    }
    #undef glGenTextures
    void LWCPPGL_CALL glGenTextures(GLsizei n, GLuint * textures) {
        glad_glGenTextures(n, textures);
    }
    #undef glIsTexture
    GLboolean LWCPPGL_CALL glIsTexture(GLuint texture) {
        return glad_glIsTexture(texture);
    }
    #undef glArrayElement
    void LWCPPGL_CALL glArrayElement(GLint i) {
        glad_glArrayElement(i);
    }
    #undef glColorPointer
    void LWCPPGL_CALL glColorPointer(GLint size, GLenum type, GLsizei stride, const void* pointer) {
        glad_glColorPointer(size, type, stride, pointer);
    }
    #undef glDisableClientState
    void LWCPPGL_CALL glDisableClientState(GLenum array) {
        glad_glDisableClientState(array);
    }
    #undef glEdgeFlagPointer
    void LWCPPGL_CALL glEdgeFlagPointer(GLsizei stride, const void* pointer) {
        glad_glEdgeFlagPointer(stride, pointer);
    }
    #undef glEnableClientState
    void LWCPPGL_CALL glEnableClientState(GLenum array) {
        glad_glEnableClientState(array);
    }
    #undef glIndexPointer
    void LWCPPGL_CALL glIndexPointer(GLenum type, GLsizei stride, const void* pointer) {
        glad_glIndexPointer(type, stride, pointer);
    }
    #undef glInterleavedArrays
    void LWCPPGL_CALL glInterleavedArrays(GLenum format, GLsizei stride, const void* pointer) {
        glad_glInterleavedArrays(format, stride, pointer);
    }
    #undef glNormalPointer
    void LWCPPGL_CALL glNormalPointer(GLenum type, GLsizei stride, const void* pointer) {
        glad_glNormalPointer(type, stride, pointer);
    }
    #undef glTexCoordPointer
    void LWCPPGL_CALL glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const void* pointer) {
        glad_glTexCoordPointer(size, type, stride, pointer);
    }
    #undef glVertexPointer
    void LWCPPGL_CALL glVertexPointer(GLint size, GLenum type, GLsizei stride, const void* pointer) {
        glad_glVertexPointer(size, type, stride, pointer);
    }
    #undef glAreTexturesResident
    GLboolean LWCPPGL_CALL glAreTexturesResident(GLsizei n, const GLuint * textures, GLboolean * residences) {
        return glad_glAreTexturesResident(n, textures, residences);
    }
    #undef glPrioritizeTextures
    void LWCPPGL_CALL glPrioritizeTextures(GLsizei n, const GLuint * textures, const GLfloat * priorities) {
        glad_glPrioritizeTextures(n, textures, priorities);
    }
    #undef glIndexub
    void LWCPPGL_CALL glIndexub(GLubyte c) {
        glad_glIndexub(c);
    }
    #undef glIndexubv
    void LWCPPGL_CALL glIndexubv(const GLubyte * c) {
        glad_glIndexubv(c);
    }
    #undef glPopClientAttrib
    void LWCPPGL_CALL glPopClientAttrib(void) {
        glad_glPopClientAttrib();
    }
    #undef glPushClientAttrib
    void LWCPPGL_CALL glPushClientAttrib(GLbitfield mask) {
        glad_glPushClientAttrib(mask);
    }
    #undef glDrawRangeElements
    void LWCPPGL_CALL glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void* indices) {
        glad_glDrawRangeElements(mode, start, end, count, type, indices);
    }
    #undef glTexImage3D
    void LWCPPGL_CALL glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void* pixels) {
        glad_glTexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
    }
    #undef glTexSubImage3D
    void LWCPPGL_CALL glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void* pixels) {
        glad_glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
    }
    #undef glCopyTexSubImage3D
    void LWCPPGL_CALL glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
        glad_glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
    }
    #undef glActiveTexture
    void LWCPPGL_CALL glActiveTexture(GLenum texture) {
        glad_glActiveTexture(texture);
    }
    #undef glSampleCoverage
    void LWCPPGL_CALL glSampleCoverage(GLfloat value, GLboolean invert) {
        glad_glSampleCoverage(value, invert);
    }
    #undef glCompressedTexImage3D
    void LWCPPGL_CALL glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void* data) {
        glad_glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
    }
    #undef glCompressedTexImage2D
    void LWCPPGL_CALL glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void* data) {
        glad_glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
    }
    #undef glCompressedTexImage1D
    void LWCPPGL_CALL glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void* data) {
        glad_glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
    }
    #undef glCompressedTexSubImage3D
    void LWCPPGL_CALL glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void* data) {
        glad_glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
    }
    #undef glCompressedTexSubImage2D
    void LWCPPGL_CALL glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void* data) {
        glad_glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
    }
    #undef glCompressedTexSubImage1D
    void LWCPPGL_CALL glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void* data) {
        glad_glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
    }
    #undef glGetCompressedTexImage
    void LWCPPGL_CALL glGetCompressedTexImage(GLenum target, GLint level, void* img) {
        glad_glGetCompressedTexImage(target, level, img);
    }
    #undef glClientActiveTexture
    void LWCPPGL_CALL glClientActiveTexture(GLenum texture) {
        glad_glClientActiveTexture(texture);
    }
    #undef glMultiTexCoord1d
    void LWCPPGL_CALL glMultiTexCoord1d(GLenum target, GLdouble s) {
        glad_glMultiTexCoord1d(target, s);
    }
    #undef glMultiTexCoord1dv
    void LWCPPGL_CALL glMultiTexCoord1dv(GLenum target, const GLdouble * v) {
        glad_glMultiTexCoord1dv(target, v);
    }
    #undef glMultiTexCoord1f
    void LWCPPGL_CALL glMultiTexCoord1f(GLenum target, GLfloat s) {
        glad_glMultiTexCoord1f(target, s);
    }
    #undef glMultiTexCoord1fv
    void LWCPPGL_CALL glMultiTexCoord1fv(GLenum target, const GLfloat * v) {
        glad_glMultiTexCoord1fv(target, v);
    }
    #undef glMultiTexCoord1i
    void LWCPPGL_CALL glMultiTexCoord1i(GLenum target, GLint s) {
        glad_glMultiTexCoord1i(target, s);
    }
    #undef glMultiTexCoord1iv
    void LWCPPGL_CALL glMultiTexCoord1iv(GLenum target, const GLint * v) {
        glad_glMultiTexCoord1iv(target, v);
    }
    #undef glMultiTexCoord1s
    void LWCPPGL_CALL glMultiTexCoord1s(GLenum target, GLshort s) {
        glad_glMultiTexCoord1s(target, s);
    }
    #undef glMultiTexCoord1sv
    void LWCPPGL_CALL glMultiTexCoord1sv(GLenum target, const GLshort * v) {
        glad_glMultiTexCoord1sv(target, v);
    }
    #undef glMultiTexCoord2d
    void LWCPPGL_CALL glMultiTexCoord2d(GLenum target, GLdouble s, GLdouble t) {
        glad_glMultiTexCoord2d(target, s, t);
    }
    #undef glMultiTexCoord2dv
    void LWCPPGL_CALL glMultiTexCoord2dv(GLenum target, const GLdouble * v) {
        glad_glMultiTexCoord2dv(target, v);
    }
    #undef glMultiTexCoord2f
    void LWCPPGL_CALL glMultiTexCoord2f(GLenum target, GLfloat s, GLfloat t) {
        glad_glMultiTexCoord2f(target, s, t);
    }
    #undef glMultiTexCoord2fv
    void LWCPPGL_CALL glMultiTexCoord2fv(GLenum target, const GLfloat * v) {
        glad_glMultiTexCoord2fv(target, v);
    }
    #undef glMultiTexCoord2i
    void LWCPPGL_CALL glMultiTexCoord2i(GLenum target, GLint s, GLint t) {
        glad_glMultiTexCoord2i(target, s, t);
    }
    #undef glMultiTexCoord2iv
    void LWCPPGL_CALL glMultiTexCoord2iv(GLenum target, const GLint * v) {
        glad_glMultiTexCoord2iv(target, v);
    }
    #undef glMultiTexCoord2s
    void LWCPPGL_CALL glMultiTexCoord2s(GLenum target, GLshort s, GLshort t) {
        glad_glMultiTexCoord2s(target, s, t);
    }
    #undef glMultiTexCoord2sv
    void LWCPPGL_CALL glMultiTexCoord2sv(GLenum target, const GLshort * v) {
        glad_glMultiTexCoord2sv(target, v);
    }
    #undef glMultiTexCoord3d
    void LWCPPGL_CALL glMultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r) {
        glad_glMultiTexCoord3d(target, s, t, r);
    }
    #undef glMultiTexCoord3dv
    void LWCPPGL_CALL glMultiTexCoord3dv(GLenum target, const GLdouble * v) {
        glad_glMultiTexCoord3dv(target, v);
    }
    #undef glMultiTexCoord3f
    void LWCPPGL_CALL glMultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r) {
        glad_glMultiTexCoord3f(target, s, t, r);
    }
    #undef glMultiTexCoord3fv
    void LWCPPGL_CALL glMultiTexCoord3fv(GLenum target, const GLfloat * v) {
        glad_glMultiTexCoord3fv(target, v);
    }
    #undef glMultiTexCoord3i
    void LWCPPGL_CALL glMultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r) {
        glad_glMultiTexCoord3i(target, s, t, r);
    }
    #undef glMultiTexCoord3iv
    void LWCPPGL_CALL glMultiTexCoord3iv(GLenum target, const GLint * v) {
        glad_glMultiTexCoord3iv(target, v);
    }
    #undef glMultiTexCoord3s
    void LWCPPGL_CALL glMultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r) {
        glad_glMultiTexCoord3s(target, s, t, r);
    }
    #undef glMultiTexCoord3sv
    void LWCPPGL_CALL glMultiTexCoord3sv(GLenum target, const GLshort * v) {
        glad_glMultiTexCoord3sv(target, v);
    }
    #undef glMultiTexCoord4d
    void LWCPPGL_CALL glMultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q) {
        glad_glMultiTexCoord4d(target, s, t, r, q);
    }
    #undef glMultiTexCoord4dv
    void LWCPPGL_CALL glMultiTexCoord4dv(GLenum target, const GLdouble * v) {
        glad_glMultiTexCoord4dv(target, v);
    }
    #undef glMultiTexCoord4f
    void LWCPPGL_CALL glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) {
        glad_glMultiTexCoord4f(target, s, t, r, q);
    }
    #undef glMultiTexCoord4fv
    void LWCPPGL_CALL glMultiTexCoord4fv(GLenum target, const GLfloat * v) {
        glad_glMultiTexCoord4fv(target, v);
    }
    #undef glMultiTexCoord4i
    void LWCPPGL_CALL glMultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q) {
        glad_glMultiTexCoord4i(target, s, t, r, q);
    }
    #undef glMultiTexCoord4iv
    void LWCPPGL_CALL glMultiTexCoord4iv(GLenum target, const GLint * v) {
        glad_glMultiTexCoord4iv(target, v);
    }
    #undef glMultiTexCoord4s
    void LWCPPGL_CALL glMultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q) {
        glad_glMultiTexCoord4s(target, s, t, r, q);
    }
    #undef glMultiTexCoord4sv
    void LWCPPGL_CALL glMultiTexCoord4sv(GLenum target, const GLshort * v) {
        glad_glMultiTexCoord4sv(target, v);
    }
    #undef glLoadTransposeMatrixf
    void LWCPPGL_CALL glLoadTransposeMatrixf(const GLfloat * m) {
        glad_glLoadTransposeMatrixf(m);
    }
    #undef glLoadTransposeMatrixd
    void LWCPPGL_CALL glLoadTransposeMatrixd(const GLdouble * m) {
        glad_glLoadTransposeMatrixd(m);
    }
    #undef glMultTransposeMatrixf
    void LWCPPGL_CALL glMultTransposeMatrixf(const GLfloat * m) {
        glad_glMultTransposeMatrixf(m);
    }
    #undef glMultTransposeMatrixd
    void LWCPPGL_CALL glMultTransposeMatrixd(const GLdouble * m) {
        glad_glMultTransposeMatrixd(m);
    }
    #undef glBlendFuncSeparate
    void LWCPPGL_CALL glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) {
        glad_glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
    }
    #undef glMultiDrawArrays
    void LWCPPGL_CALL glMultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount) {
        glad_glMultiDrawArrays(mode, first, count, drawcount);
    }
    #undef glMultiDrawElements
    void LWCPPGL_CALL glMultiDrawElements(GLenum mode, const GLsizei * count, GLenum type, const void* const * indices, GLsizei drawcount) {
        glad_glMultiDrawElements(mode, count, type, indices, drawcount);
    }
    #undef glPointParameterf
    void LWCPPGL_CALL glPointParameterf(GLenum pname, GLfloat param) {
        glad_glPointParameterf(pname, param);
    }
    #undef glPointParameterfv
    void LWCPPGL_CALL glPointParameterfv(GLenum pname, const GLfloat * params) {
        glad_glPointParameterfv(pname, params);
    }
    #undef glPointParameteri
    void LWCPPGL_CALL glPointParameteri(GLenum pname, GLint param) {
        glad_glPointParameteri(pname, param);
    }
    #undef glPointParameteriv
    void LWCPPGL_CALL glPointParameteriv(GLenum pname, const GLint * params) {
        glad_glPointParameteriv(pname, params);
    }
    #undef glFogCoordf
    void LWCPPGL_CALL glFogCoordf(GLfloat coord) {
        glad_glFogCoordf(coord);
    }
    #undef glFogCoordfv
    void LWCPPGL_CALL glFogCoordfv(const GLfloat * coord) {
        glad_glFogCoordfv(coord);
    }
    #undef glFogCoordd
    void LWCPPGL_CALL glFogCoordd(GLdouble coord) {
        glad_glFogCoordd(coord);
    }
    #undef glFogCoorddv
    void LWCPPGL_CALL glFogCoorddv(const GLdouble * coord) {
        glad_glFogCoorddv(coord);
    }
    #undef glFogCoordPointer
    void LWCPPGL_CALL glFogCoordPointer(GLenum type, GLsizei stride, const void* pointer) {
        glad_glFogCoordPointer(type, stride, pointer);
    }
    #undef glSecondaryColor3b
    void LWCPPGL_CALL glSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue) {
        glad_glSecondaryColor3b(red, green, blue);
    }
    #undef glSecondaryColor3bv
    void LWCPPGL_CALL glSecondaryColor3bv(const GLbyte * v) {
        glad_glSecondaryColor3bv(v);
    }
    #undef glSecondaryColor3d
    void LWCPPGL_CALL glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue) {
        glad_glSecondaryColor3d(red, green, blue);
    }
    #undef glSecondaryColor3dv
    void LWCPPGL_CALL glSecondaryColor3dv(const GLdouble * v) {
        glad_glSecondaryColor3dv(v);
    }
    #undef glSecondaryColor3f
    void LWCPPGL_CALL glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue) {
        glad_glSecondaryColor3f(red, green, blue);
    }
    #undef glSecondaryColor3fv
    void LWCPPGL_CALL glSecondaryColor3fv(const GLfloat * v) {
        glad_glSecondaryColor3fv(v);
    }
    #undef glSecondaryColor3i
    void LWCPPGL_CALL glSecondaryColor3i(GLint red, GLint green, GLint blue) {
        glad_glSecondaryColor3i(red, green, blue);
    }
    #undef glSecondaryColor3iv
    void LWCPPGL_CALL glSecondaryColor3iv(const GLint * v) {
        glad_glSecondaryColor3iv(v);
    }
    #undef glSecondaryColor3s
    void LWCPPGL_CALL glSecondaryColor3s(GLshort red, GLshort green, GLshort blue) {
        glad_glSecondaryColor3s(red, green, blue);
    }
    #undef glSecondaryColor3sv
    void LWCPPGL_CALL glSecondaryColor3sv(const GLshort * v) {
        glad_glSecondaryColor3sv(v);
    }
    #undef glSecondaryColor3ub
    void LWCPPGL_CALL glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue) {
        glad_glSecondaryColor3ub(red, green, blue);
    }
    #undef glSecondaryColor3ubv
    void LWCPPGL_CALL glSecondaryColor3ubv(const GLubyte * v) {
        glad_glSecondaryColor3ubv(v);
    }
    #undef glSecondaryColor3ui
    void LWCPPGL_CALL glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue) {
        glad_glSecondaryColor3ui(red, green, blue);
    }
    #undef glSecondaryColor3uiv
    void LWCPPGL_CALL glSecondaryColor3uiv(const GLuint * v) {
        glad_glSecondaryColor3uiv(v);
    }
    #undef glSecondaryColor3us
    void LWCPPGL_CALL glSecondaryColor3us(GLushort red, GLushort green, GLushort blue) {
        glad_glSecondaryColor3us(red, green, blue);
    }
    #undef glSecondaryColor3usv
    void LWCPPGL_CALL glSecondaryColor3usv(const GLushort * v) {
        glad_glSecondaryColor3usv(v);
    }
    #undef glSecondaryColorPointer
    void LWCPPGL_CALL glSecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const void* pointer) {
        glad_glSecondaryColorPointer(size, type, stride, pointer);
    }
    #undef glWindowPos2d
    void LWCPPGL_CALL glWindowPos2d(GLdouble x, GLdouble y) {
        glad_glWindowPos2d(x, y);
    }
    #undef glWindowPos2dv
    void LWCPPGL_CALL glWindowPos2dv(const GLdouble * v) {
        glad_glWindowPos2dv(v);
    }
    #undef glWindowPos2f
    void LWCPPGL_CALL glWindowPos2f(GLfloat x, GLfloat y) {
        glad_glWindowPos2f(x, y);
    }
    #undef glWindowPos2fv
    void LWCPPGL_CALL glWindowPos2fv(const GLfloat * v) {
        glad_glWindowPos2fv(v);
    }
    #undef glWindowPos2i
    void LWCPPGL_CALL glWindowPos2i(GLint x, GLint y) {
        glad_glWindowPos2i(x, y);
    }
    #undef glWindowPos2iv
    void LWCPPGL_CALL glWindowPos2iv(const GLint * v) {
        glad_glWindowPos2iv(v);
    }
    #undef glWindowPos2s
    void LWCPPGL_CALL glWindowPos2s(GLshort x, GLshort y) {
        glad_glWindowPos2s(x, y);
    }
    #undef glWindowPos2sv
    void LWCPPGL_CALL glWindowPos2sv(const GLshort * v) {
        glad_glWindowPos2sv(v);
    }
    #undef glWindowPos3d
    void LWCPPGL_CALL glWindowPos3d(GLdouble x, GLdouble y, GLdouble z) {
        glad_glWindowPos3d(x, y, z);
    }
    #undef glWindowPos3dv
    void LWCPPGL_CALL glWindowPos3dv(const GLdouble * v) {
        glad_glWindowPos3dv(v);
    }
    #undef glWindowPos3f
    void LWCPPGL_CALL glWindowPos3f(GLfloat x, GLfloat y, GLfloat z) {
        glad_glWindowPos3f(x, y, z);
    }
    #undef glWindowPos3fv
    void LWCPPGL_CALL glWindowPos3fv(const GLfloat * v) {
        glad_glWindowPos3fv(v);
    }
    #undef glWindowPos3i
    void LWCPPGL_CALL glWindowPos3i(GLint x, GLint y, GLint z) {
        glad_glWindowPos3i(x, y, z);
    }
    #undef glWindowPos3iv
    void LWCPPGL_CALL glWindowPos3iv(const GLint * v) {
        glad_glWindowPos3iv(v);
    }
    #undef glWindowPos3s
    void LWCPPGL_CALL glWindowPos3s(GLshort x, GLshort y, GLshort z) {
        glad_glWindowPos3s(x, y, z);
    }
    #undef glWindowPos3sv
    void LWCPPGL_CALL glWindowPos3sv(const GLshort * v) {
        glad_glWindowPos3sv(v);
    }
    #undef glBlendColor
    void LWCPPGL_CALL glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
        glad_glBlendColor(red, green, blue, alpha);
    }
    #undef glBlendEquation
    void LWCPPGL_CALL glBlendEquation(GLenum mode) {
        glad_glBlendEquation(mode);
    }
    #undef glGenQueries
    void LWCPPGL_CALL glGenQueries(GLsizei n, GLuint * ids) {
        glad_glGenQueries(n, ids);
    }
    #undef glDeleteQueries
    void LWCPPGL_CALL glDeleteQueries(GLsizei n, const GLuint * ids) {
        glad_glDeleteQueries(n, ids);
    }
    #undef glIsQuery
    GLboolean LWCPPGL_CALL glIsQuery(GLuint id) {
        return glad_glIsQuery(id);
    }
    #undef glBeginQuery
    void LWCPPGL_CALL glBeginQuery(GLenum target, GLuint id) {
        glad_glBeginQuery(target, id);
    }
    #undef glEndQuery
    void LWCPPGL_CALL glEndQuery(GLenum target) {
        glad_glEndQuery(target);
    }
    #undef glGetQueryiv
    void LWCPPGL_CALL glGetQueryiv(GLenum target, GLenum pname, GLint * params) {
        glad_glGetQueryiv(target, pname, params);
    }
    #undef glGetQueryObjectiv
    void LWCPPGL_CALL glGetQueryObjectiv(GLuint id, GLenum pname, GLint * params) {
        glad_glGetQueryObjectiv(id, pname, params);
    }
    #undef glGetQueryObjectuiv
    void LWCPPGL_CALL glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params) {
        glad_glGetQueryObjectuiv(id, pname, params);
    }
    #undef glBindBuffer
    void LWCPPGL_CALL glBindBuffer(GLenum target, GLuint buffer) {
        glad_glBindBuffer(target, buffer);
    }
    #undef glDeleteBuffers
    void LWCPPGL_CALL glDeleteBuffers(GLsizei n, const GLuint * buffers) {
        glad_glDeleteBuffers(n, buffers);
    }
    #undef glGenBuffers
    void LWCPPGL_CALL glGenBuffers(GLsizei n, GLuint * buffers) {
        glad_glGenBuffers(n, buffers);
    }
    #undef glIsBuffer
    GLboolean LWCPPGL_CALL glIsBuffer(GLuint buffer) {
        return glad_glIsBuffer(buffer);
    }
    #undef glBufferData
    void LWCPPGL_CALL glBufferData(GLenum target, GLsizeiptr size, const void* data, GLenum usage) {
        glad_glBufferData(target, size, data, usage);
    }
    #undef glBufferSubData
    void LWCPPGL_CALL glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void* data) {
        glad_glBufferSubData(target, offset, size, data);
    }
    #undef glGetBufferSubData
    void LWCPPGL_CALL glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void* data) {
        glad_glGetBufferSubData(target, offset, size, data);
    }
    #undef glMapBuffer
    void * LWCPPGL_CALL glMapBuffer(GLenum target, GLenum access) {
        return glad_glMapBuffer(target, access);
    }
    #undef glUnmapBuffer
    GLboolean LWCPPGL_CALL glUnmapBuffer(GLenum target) {
        return glad_glUnmapBuffer(target);
    }
    #undef glGetBufferParameteriv
    void LWCPPGL_CALL glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params) {
        glad_glGetBufferParameteriv(target, pname, params);
    }
    #undef glGetBufferPointerv
    void LWCPPGL_CALL glGetBufferPointerv(GLenum target, GLenum pname, void* * params) {
        glad_glGetBufferPointerv(target, pname, params);
    }
    #undef glBlendEquationSeparate
    void LWCPPGL_CALL glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha) {
        glad_glBlendEquationSeparate(modeRGB, modeAlpha);
    }
    #undef glDrawBuffers
    void LWCPPGL_CALL glDrawBuffers(GLsizei n, const GLenum * bufs) {
        glad_glDrawBuffers(n, bufs);
    }
    #undef glStencilOpSeparate
    void LWCPPGL_CALL glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) {
        glad_glStencilOpSeparate(face, sfail, dpfail, dppass);
    }
    #undef glStencilFuncSeparate
    void LWCPPGL_CALL glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask) {
        glad_glStencilFuncSeparate(face, func, ref, mask);
    }
    #undef glStencilMaskSeparate
    void LWCPPGL_CALL glStencilMaskSeparate(GLenum face, GLuint mask) {
        glad_glStencilMaskSeparate(face, mask);
    }
    #undef glAttachShader
    void LWCPPGL_CALL glAttachShader(GLuint program, GLuint shader) {
        glad_glAttachShader(program, shader);
    }
    #undef glBindAttribLocation
    void LWCPPGL_CALL glBindAttribLocation(GLuint program, GLuint index, const GLchar * name) {
        glad_glBindAttribLocation(program, index, name);
    }
    #undef glCompileShader
    void LWCPPGL_CALL glCompileShader(GLuint shader) {
        glad_glCompileShader(shader);
    }
    #undef glCreateProgram
    GLuint LWCPPGL_CALL glCreateProgram(void) {
        return glad_glCreateProgram();
    }
    #undef glCreateShader
    GLuint LWCPPGL_CALL glCreateShader(GLenum type) {
        return glad_glCreateShader(type);
    }
    #undef glDeleteProgram
    void LWCPPGL_CALL glDeleteProgram(GLuint program) {
        glad_glDeleteProgram(program);
    }
    #undef glDeleteShader
    void LWCPPGL_CALL glDeleteShader(GLuint shader) {
        glad_glDeleteShader(shader);
    }
    #undef glDetachShader
    void LWCPPGL_CALL glDetachShader(GLuint program, GLuint shader) {
        glad_glDetachShader(program, shader);
    }
    #undef glDisableVertexAttribArray
    void LWCPPGL_CALL glDisableVertexAttribArray(GLuint index) {
        glad_glDisableVertexAttribArray(index);
    }
    #undef glEnableVertexAttribArray
    void LWCPPGL_CALL glEnableVertexAttribArray(GLuint index) {
        glad_glEnableVertexAttribArray(index);
    }
    #undef glGetActiveAttrib
    void LWCPPGL_CALL glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name) {
        glad_glGetActiveAttrib(program, index, bufSize, length, size, type, name);
    }
    #undef glGetActiveUniform
    void LWCPPGL_CALL glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name) {
        glad_glGetActiveUniform(program, index, bufSize, length, size, type, name);
    }
    #undef glGetAttachedShaders
    void LWCPPGL_CALL glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders) {
        glad_glGetAttachedShaders(program, maxCount, count, shaders);
    }
    #undef glGetAttribLocation
    GLint LWCPPGL_CALL glGetAttribLocation(GLuint program, const GLchar * name) {
        return glad_glGetAttribLocation(program, name);
    }
    #undef glGetProgramiv
    void LWCPPGL_CALL glGetProgramiv(GLuint program, GLenum pname, GLint * params) {
        glad_glGetProgramiv(program, pname, params);
    }
    #undef glGetProgramInfoLog
    void LWCPPGL_CALL glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog) {
        glad_glGetProgramInfoLog(program, bufSize, length, infoLog);
    }
    #undef glGetShaderiv
    void LWCPPGL_CALL glGetShaderiv(GLuint shader, GLenum pname, GLint * params) {
        glad_glGetShaderiv(shader, pname, params);
    }
    #undef glGetShaderInfoLog
    void LWCPPGL_CALL glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog) {
        glad_glGetShaderInfoLog(shader, bufSize, length, infoLog);
    }
    #undef glGetShaderSource
    void LWCPPGL_CALL glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source) {
        glad_glGetShaderSource(shader, bufSize, length, source);
    }
    #undef glGetUniformLocation
    GLint LWCPPGL_CALL glGetUniformLocation(GLuint program, const GLchar * name) {
        return glad_glGetUniformLocation(program, name);
    }
    #undef glGetUniformfv
    void LWCPPGL_CALL glGetUniformfv(GLuint program, GLint location, GLfloat * params) {
        glad_glGetUniformfv(program, location, params);
    }
    #undef glGetUniformiv
    void LWCPPGL_CALL glGetUniformiv(GLuint program, GLint location, GLint * params) {
        glad_glGetUniformiv(program, location, params);
    }
    #undef glGetVertexAttribdv
    void LWCPPGL_CALL glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble * params) {
        glad_glGetVertexAttribdv(index, pname, params);
    }
    #undef glGetVertexAttribfv
    void LWCPPGL_CALL glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params) {
        glad_glGetVertexAttribfv(index, pname, params);
    }
    #undef glGetVertexAttribiv
    void LWCPPGL_CALL glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params) {
        glad_glGetVertexAttribiv(index, pname, params);
    }
    #undef glGetVertexAttribPointerv
    void LWCPPGL_CALL glGetVertexAttribPointerv(GLuint index, GLenum pname, void* * pointer) {
        glad_glGetVertexAttribPointerv(index, pname, pointer);
    }
    #undef glIsProgram
    GLboolean LWCPPGL_CALL glIsProgram(GLuint program) {
        return glad_glIsProgram(program);
    }
    #undef glIsShader
    GLboolean LWCPPGL_CALL glIsShader(GLuint shader) {
        return glad_glIsShader(shader);
    }
    #undef glLinkProgram
    void LWCPPGL_CALL glLinkProgram(GLuint program) {
        glad_glLinkProgram(program);
    }
    #undef glShaderSource
    void LWCPPGL_CALL glShaderSource(GLuint shader, GLsizei count, const GLchar * const * string, const GLint * length) {
        glad_glShaderSource(shader, count, string, length);
    }
    #undef glUseProgram
    void LWCPPGL_CALL glUseProgram(GLuint program) {
        glad_glUseProgram(program);
    }
    #undef glUniform1f
    void LWCPPGL_CALL glUniform1f(GLint location, GLfloat v0) {
        glad_glUniform1f(location, v0);
    }
    #undef glUniform2f
    void LWCPPGL_CALL glUniform2f(GLint location, GLfloat v0, GLfloat v1) {
        glad_glUniform2f(location, v0, v1);
    }
    #undef glUniform3f
    void LWCPPGL_CALL glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2) {
        glad_glUniform3f(location, v0, v1, v2);
    }
    #undef glUniform4f
    void LWCPPGL_CALL glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) {
        glad_glUniform4f(location, v0, v1, v2, v3);
    }
    #undef glUniform1i
    void LWCPPGL_CALL glUniform1i(GLint location, GLint v0) {
        glad_glUniform1i(location, v0);
    }
    #undef glUniform2i
    void LWCPPGL_CALL glUniform2i(GLint location, GLint v0, GLint v1) {
        glad_glUniform2i(location, v0, v1);
    }
    #undef glUniform3i
    void LWCPPGL_CALL glUniform3i(GLint location, GLint v0, GLint v1, GLint v2) {
        glad_glUniform3i(location, v0, v1, v2);
    }
    #undef glUniform4i
    void LWCPPGL_CALL glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3) {
        glad_glUniform4i(location, v0, v1, v2, v3);
    }
    #undef glUniform1fv
    void LWCPPGL_CALL glUniform1fv(GLint location, GLsizei count, const GLfloat * value) {
        glad_glUniform1fv(location, count, value);
    }
    #undef glUniform2fv
    void LWCPPGL_CALL glUniform2fv(GLint location, GLsizei count, const GLfloat * value) {
        glad_glUniform2fv(location, count, value);
    }
    #undef glUniform3fv
    void LWCPPGL_CALL glUniform3fv(GLint location, GLsizei count, const GLfloat * value) {
        glad_glUniform3fv(location, count, value);
    }
    #undef glUniform4fv
    void LWCPPGL_CALL glUniform4fv(GLint location, GLsizei count, const GLfloat * value) {
        glad_glUniform4fv(location, count, value);
    }
    #undef glUniform1iv
    void LWCPPGL_CALL glUniform1iv(GLint location, GLsizei count, const GLint * value) {
        glad_glUniform1iv(location, count, value);
    }
    #undef glUniform2iv
    void LWCPPGL_CALL glUniform2iv(GLint location, GLsizei count, const GLint * value) {
        glad_glUniform2iv(location, count, value);
    }
    #undef glUniform3iv
    void LWCPPGL_CALL glUniform3iv(GLint location, GLsizei count, const GLint * value) {
        glad_glUniform3iv(location, count, value);
    }
    #undef glUniform4iv
    void LWCPPGL_CALL glUniform4iv(GLint location, GLsizei count, const GLint * value) {
        glad_glUniform4iv(location, count, value);
    }
    #undef glUniformMatrix2fv
    void LWCPPGL_CALL glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
        glad_glUniformMatrix2fv(location, count, transpose, value);
    }
    #undef glUniformMatrix3fv
    void LWCPPGL_CALL glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
        glad_glUniformMatrix3fv(location, count, transpose, value);
    }
    #undef glUniformMatrix4fv
    void LWCPPGL_CALL glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
        glad_glUniformMatrix4fv(location, count, transpose, value);
    }
    #undef glValidateProgram
    void LWCPPGL_CALL glValidateProgram(GLuint program) {
        glad_glValidateProgram(program);
    }
    #undef glVertexAttrib1d
    void LWCPPGL_CALL glVertexAttrib1d(GLuint index, GLdouble x) {
        glad_glVertexAttrib1d(index, x);
    }
    #undef glVertexAttrib1dv
    void LWCPPGL_CALL glVertexAttrib1dv(GLuint index, const GLdouble * v) {
        glad_glVertexAttrib1dv(index, v);
    }
    #undef glVertexAttrib1f
    void LWCPPGL_CALL glVertexAttrib1f(GLuint index, GLfloat x) {
        glad_glVertexAttrib1f(index, x);
    }
    #undef glVertexAttrib1fv
    void LWCPPGL_CALL glVertexAttrib1fv(GLuint index, const GLfloat * v) {
        glad_glVertexAttrib1fv(index, v);
    }
    #undef glVertexAttrib1s
    void LWCPPGL_CALL glVertexAttrib1s(GLuint index, GLshort x) {
        glad_glVertexAttrib1s(index, x);
    }
    #undef glVertexAttrib1sv
    void LWCPPGL_CALL glVertexAttrib1sv(GLuint index, const GLshort * v) {
        glad_glVertexAttrib1sv(index, v);
    }
    #undef glVertexAttrib2d
    void LWCPPGL_CALL glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y) {
        glad_glVertexAttrib2d(index, x, y);
    }
    #undef glVertexAttrib2dv
    void LWCPPGL_CALL glVertexAttrib2dv(GLuint index, const GLdouble * v) {
        glad_glVertexAttrib2dv(index, v);
    }
    #undef glVertexAttrib2f
    void LWCPPGL_CALL glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y) {
        glad_glVertexAttrib2f(index, x, y);
    }
    #undef glVertexAttrib2fv
    void LWCPPGL_CALL glVertexAttrib2fv(GLuint index, const GLfloat * v) {
        glad_glVertexAttrib2fv(index, v);
    }
    #undef glVertexAttrib2s
    void LWCPPGL_CALL glVertexAttrib2s(GLuint index, GLshort x, GLshort y) {
        glad_glVertexAttrib2s(index, x, y);
    }
    #undef glVertexAttrib2sv
    void LWCPPGL_CALL glVertexAttrib2sv(GLuint index, const GLshort * v) {
        glad_glVertexAttrib2sv(index, v);
    }
    #undef glVertexAttrib3d
    void LWCPPGL_CALL glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z) {
        glad_glVertexAttrib3d(index, x, y, z);
    }
    #undef glVertexAttrib3dv
    void LWCPPGL_CALL glVertexAttrib3dv(GLuint index, const GLdouble * v) {
        glad_glVertexAttrib3dv(index, v);
    }
    #undef glVertexAttrib3f
    void LWCPPGL_CALL glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z) {
        glad_glVertexAttrib3f(index, x, y, z);
    }
    #undef glVertexAttrib3fv
    void LWCPPGL_CALL glVertexAttrib3fv(GLuint index, const GLfloat * v) {
        glad_glVertexAttrib3fv(index, v);
    }
    #undef glVertexAttrib3s
    void LWCPPGL_CALL glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z) {
        glad_glVertexAttrib3s(index, x, y, z);
    }
    #undef glVertexAttrib3sv
    void LWCPPGL_CALL glVertexAttrib3sv(GLuint index, const GLshort * v) {
        glad_glVertexAttrib3sv(index, v);
    }
    #undef glVertexAttrib4Nbv
    void LWCPPGL_CALL glVertexAttrib4Nbv(GLuint index, const GLbyte * v) {
        glad_glVertexAttrib4Nbv(index, v);
    }
    #undef glVertexAttrib4Niv
    void LWCPPGL_CALL glVertexAttrib4Niv(GLuint index, const GLint * v) {
        glad_glVertexAttrib4Niv(index, v);
    }
    #undef glVertexAttrib4Nsv
    void LWCPPGL_CALL glVertexAttrib4Nsv(GLuint index, const GLshort * v) {
        glad_glVertexAttrib4Nsv(index, v);
    }
    #undef glVertexAttrib4Nub
    void LWCPPGL_CALL glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) {
        glad_glVertexAttrib4Nub(index, x, y, z, w);
    }
    #undef glVertexAttrib4Nubv
    void LWCPPGL_CALL glVertexAttrib4Nubv(GLuint index, const GLubyte * v) {
        glad_glVertexAttrib4Nubv(index, v);
    }
    #undef glVertexAttrib4Nuiv
    void LWCPPGL_CALL glVertexAttrib4Nuiv(GLuint index, const GLuint * v) {
        glad_glVertexAttrib4Nuiv(index, v);
    }
    #undef glVertexAttrib4Nusv
    void LWCPPGL_CALL glVertexAttrib4Nusv(GLuint index, const GLushort * v) {
        glad_glVertexAttrib4Nusv(index, v);
    }
    #undef glVertexAttrib4bv
    void LWCPPGL_CALL glVertexAttrib4bv(GLuint index, const GLbyte * v) {
        glad_glVertexAttrib4bv(index, v);
    }
    #undef glVertexAttrib4d
    void LWCPPGL_CALL glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
        glad_glVertexAttrib4d(index, x, y, z, w);
    }
    #undef glVertexAttrib4dv
    void LWCPPGL_CALL glVertexAttrib4dv(GLuint index, const GLdouble * v) {
        glad_glVertexAttrib4dv(index, v);
    }
    #undef glVertexAttrib4f
    void LWCPPGL_CALL glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
        glad_glVertexAttrib4f(index, x, y, z, w);
    }
    #undef glVertexAttrib4fv
    void LWCPPGL_CALL glVertexAttrib4fv(GLuint index, const GLfloat * v) {
        glad_glVertexAttrib4fv(index, v);
    }
    #undef glVertexAttrib4iv
    void LWCPPGL_CALL glVertexAttrib4iv(GLuint index, const GLint * v) {
        glad_glVertexAttrib4iv(index, v);
    }
    #undef glVertexAttrib4s
    void LWCPPGL_CALL glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) {
        glad_glVertexAttrib4s(index, x, y, z, w);
    }
    #undef glVertexAttrib4sv
    void LWCPPGL_CALL glVertexAttrib4sv(GLuint index, const GLshort * v) {
        glad_glVertexAttrib4sv(index, v);
    }
    #undef glVertexAttrib4ubv
    void LWCPPGL_CALL glVertexAttrib4ubv(GLuint index, const GLubyte * v) {
        glad_glVertexAttrib4ubv(index, v);
    }
    #undef glVertexAttrib4uiv
    void LWCPPGL_CALL glVertexAttrib4uiv(GLuint index, const GLuint * v) {
        glad_glVertexAttrib4uiv(index, v);
    }
    #undef glVertexAttrib4usv
    void LWCPPGL_CALL glVertexAttrib4usv(GLuint index, const GLushort * v) {
        glad_glVertexAttrib4usv(index, v);
    }
    #undef glVertexAttribPointer
    void LWCPPGL_CALL glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void* pointer) {
        glad_glVertexAttribPointer(index, size, type, normalized, stride, pointer);
    }
    #undef glUniformMatrix2x3fv
    void LWCPPGL_CALL glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
        glad_glUniformMatrix2x3fv(location, count, transpose, value);
    }
    #undef glUniformMatrix3x2fv
    void LWCPPGL_CALL glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
        glad_glUniformMatrix3x2fv(location, count, transpose, value);
    }
    #undef glUniformMatrix2x4fv
    void LWCPPGL_CALL glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
        glad_glUniformMatrix2x4fv(location, count, transpose, value);
    }
    #undef glUniformMatrix4x2fv
    void LWCPPGL_CALL glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
        glad_glUniformMatrix4x2fv(location, count, transpose, value);
    }
    #undef glUniformMatrix3x4fv
    void LWCPPGL_CALL glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
        glad_glUniformMatrix3x4fv(location, count, transpose, value);
    }
    #undef glUniformMatrix4x3fv
    void LWCPPGL_CALL glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
        glad_glUniformMatrix4x3fv(location, count, transpose, value);
    }
    #undef glColorMaski
    void LWCPPGL_CALL glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a) {
        glad_glColorMaski(index, r, g, b, a);
    }
    #undef glGetBooleani_v
    void LWCPPGL_CALL glGetBooleani_v(GLenum target, GLuint index, GLboolean * data) {
        glad_glGetBooleani_v(target, index, data);
    }
    #undef glGetIntegeri_v
    void LWCPPGL_CALL glGetIntegeri_v(GLenum target, GLuint index, GLint * data) {
        glad_glGetIntegeri_v(target, index, data);
    }
    #undef glEnablei
    void LWCPPGL_CALL glEnablei(GLenum target, GLuint index) {
        glad_glEnablei(target, index);
    }
    #undef glDisablei
    void LWCPPGL_CALL glDisablei(GLenum target, GLuint index) {
        glad_glDisablei(target, index);
    }
    #undef glIsEnabledi
    GLboolean LWCPPGL_CALL glIsEnabledi(GLenum target, GLuint index) {
        return glad_glIsEnabledi(target, index);
    }
    #undef glBeginTransformFeedback
    void LWCPPGL_CALL glBeginTransformFeedback(GLenum primitiveMode) {
        glad_glBeginTransformFeedback(primitiveMode);
    }
    #undef glEndTransformFeedback
    void LWCPPGL_CALL glEndTransformFeedback(void) {
        glad_glEndTransformFeedback();
    }
    #undef glBindBufferRange
    void LWCPPGL_CALL glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) {
        glad_glBindBufferRange(target, index, buffer, offset, size);
    }
    #undef glBindBufferBase
    void LWCPPGL_CALL glBindBufferBase(GLenum target, GLuint index, GLuint buffer) {
        glad_glBindBufferBase(target, index, buffer);
    }
    #undef glTransformFeedbackVaryings
    void LWCPPGL_CALL glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar * const * varyings, GLenum bufferMode) {
        glad_glTransformFeedbackVaryings(program, count, varyings, bufferMode);
    }
    #undef glGetTransformFeedbackVarying
    void LWCPPGL_CALL glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name) {
        glad_glGetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
    }
    #undef glClampColor
    void LWCPPGL_CALL glClampColor(GLenum target, GLenum clamp) {
        glad_glClampColor(target, clamp);
    }
    #undef glBeginConditionalRender
    void LWCPPGL_CALL glBeginConditionalRender(GLuint id, GLenum mode) {
        glad_glBeginConditionalRender(id, mode);
    }
    #undef glEndConditionalRender
    void LWCPPGL_CALL glEndConditionalRender(void) {
        glad_glEndConditionalRender();
    }
    #undef glVertexAttribIPointer
    void LWCPPGL_CALL glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void* pointer) {
        glad_glVertexAttribIPointer(index, size, type, stride, pointer);
    }
    #undef glGetVertexAttribIiv
    void LWCPPGL_CALL glGetVertexAttribIiv(GLuint index, GLenum pname, GLint * params) {
        glad_glGetVertexAttribIiv(index, pname, params);
    }
    #undef glGetVertexAttribIuiv
    void LWCPPGL_CALL glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params) {
        glad_glGetVertexAttribIuiv(index, pname, params);
    }
    #undef glVertexAttribI1i
    void LWCPPGL_CALL glVertexAttribI1i(GLuint index, GLint x) {
        glad_glVertexAttribI1i(index, x);
    }
    #undef glVertexAttribI2i
    void LWCPPGL_CALL glVertexAttribI2i(GLuint index, GLint x, GLint y) {
        glad_glVertexAttribI2i(index, x, y);
    }
    #undef glVertexAttribI3i
    void LWCPPGL_CALL glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z) {
        glad_glVertexAttribI3i(index, x, y, z);
    }
    #undef glVertexAttribI4i
    void LWCPPGL_CALL glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w) {
        glad_glVertexAttribI4i(index, x, y, z, w);
    }
    #undef glVertexAttribI1ui
    void LWCPPGL_CALL glVertexAttribI1ui(GLuint index, GLuint x) {
        glad_glVertexAttribI1ui(index, x);
    }
    #undef glVertexAttribI2ui
    void LWCPPGL_CALL glVertexAttribI2ui(GLuint index, GLuint x, GLuint y) {
        glad_glVertexAttribI2ui(index, x, y);
    }
    #undef glVertexAttribI3ui
    void LWCPPGL_CALL glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z) {
        glad_glVertexAttribI3ui(index, x, y, z);
    }
    #undef glVertexAttribI4ui
    void LWCPPGL_CALL glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) {
        glad_glVertexAttribI4ui(index, x, y, z, w);
    }
    #undef glVertexAttribI1iv
    void LWCPPGL_CALL glVertexAttribI1iv(GLuint index, const GLint * v) {
        glad_glVertexAttribI1iv(index, v);
    }
    #undef glVertexAttribI2iv
    void LWCPPGL_CALL glVertexAttribI2iv(GLuint index, const GLint * v) {
        glad_glVertexAttribI2iv(index, v);
    }
    #undef glVertexAttribI3iv
    void LWCPPGL_CALL glVertexAttribI3iv(GLuint index, const GLint * v) {
        glad_glVertexAttribI3iv(index, v);
    }
    #undef glVertexAttribI4iv
    void LWCPPGL_CALL glVertexAttribI4iv(GLuint index, const GLint * v) {
        glad_glVertexAttribI4iv(index, v);
    }
    #undef glVertexAttribI1uiv
    void LWCPPGL_CALL glVertexAttribI1uiv(GLuint index, const GLuint * v) {
        glad_glVertexAttribI1uiv(index, v);
    }
    #undef glVertexAttribI2uiv
    void LWCPPGL_CALL glVertexAttribI2uiv(GLuint index, const GLuint * v) {
        glad_glVertexAttribI2uiv(index, v);
    }
    #undef glVertexAttribI3uiv
    void LWCPPGL_CALL glVertexAttribI3uiv(GLuint index, const GLuint * v) {
        glad_glVertexAttribI3uiv(index, v);
    }
    #undef glVertexAttribI4uiv
    void LWCPPGL_CALL glVertexAttribI4uiv(GLuint index, const GLuint * v) {
        glad_glVertexAttribI4uiv(index, v);
    }
    #undef glVertexAttribI4bv
    void LWCPPGL_CALL glVertexAttribI4bv(GLuint index, const GLbyte * v) {
        glad_glVertexAttribI4bv(index, v);
    }
    #undef glVertexAttribI4sv
    void LWCPPGL_CALL glVertexAttribI4sv(GLuint index, const GLshort * v) {
        glad_glVertexAttribI4sv(index, v);
    }
    #undef glVertexAttribI4ubv
    void LWCPPGL_CALL glVertexAttribI4ubv(GLuint index, const GLubyte * v) {
        glad_glVertexAttribI4ubv(index, v);
    }
    #undef glVertexAttribI4usv
    void LWCPPGL_CALL glVertexAttribI4usv(GLuint index, const GLushort * v) {
        glad_glVertexAttribI4usv(index, v);
    }
    #undef glGetUniformuiv
    void LWCPPGL_CALL glGetUniformuiv(GLuint program, GLint location, GLuint * params) {
        glad_glGetUniformuiv(program, location, params);
    }
    #undef glBindFragDataLocation
    void LWCPPGL_CALL glBindFragDataLocation(GLuint program, GLuint color, const GLchar * name) {
        glad_glBindFragDataLocation(program, color, name);
    }
    #undef glGetFragDataLocation
    GLint LWCPPGL_CALL glGetFragDataLocation(GLuint program, const GLchar * name) {
        return glad_glGetFragDataLocation(program, name);
    }
    #undef glUniform1ui
    void LWCPPGL_CALL glUniform1ui(GLint location, GLuint v0) {
        glad_glUniform1ui(location, v0);
    }
    #undef glUniform2ui
    void LWCPPGL_CALL glUniform2ui(GLint location, GLuint v0, GLuint v1) {
        glad_glUniform2ui(location, v0, v1);
    }
    #undef glUniform3ui
    void LWCPPGL_CALL glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2) {
        glad_glUniform3ui(location, v0, v1, v2);
    }
    #undef glUniform4ui
    void LWCPPGL_CALL glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) {
        glad_glUniform4ui(location, v0, v1, v2, v3);
    }
    #undef glUniform1uiv
    void LWCPPGL_CALL glUniform1uiv(GLint location, GLsizei count, const GLuint * value) {
        glad_glUniform1uiv(location, count, value);
    }
    #undef glUniform2uiv
    void LWCPPGL_CALL glUniform2uiv(GLint location, GLsizei count, const GLuint * value) {
        glad_glUniform2uiv(location, count, value);
    }
    #undef glUniform3uiv
    void LWCPPGL_CALL glUniform3uiv(GLint location, GLsizei count, const GLuint * value) {
        glad_glUniform3uiv(location, count, value);
    }
    #undef glUniform4uiv
    void LWCPPGL_CALL glUniform4uiv(GLint location, GLsizei count, const GLuint * value) {
        glad_glUniform4uiv(location, count, value);
    }
    #undef glTexParameterIiv
    void LWCPPGL_CALL glTexParameterIiv(GLenum target, GLenum pname, const GLint * params) {
        glad_glTexParameterIiv(target, pname, params);
    }
    #undef glTexParameterIuiv
    void LWCPPGL_CALL glTexParameterIuiv(GLenum target, GLenum pname, const GLuint * params) {
        glad_glTexParameterIuiv(target, pname, params);
    }
    #undef glGetTexParameterIiv
    void LWCPPGL_CALL glGetTexParameterIiv(GLenum target, GLenum pname, GLint * params) {
        glad_glGetTexParameterIiv(target, pname, params);
    }
    #undef glGetTexParameterIuiv
    void LWCPPGL_CALL glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint * params) {
        glad_glGetTexParameterIuiv(target, pname, params);
    }
    #undef glClearBufferiv
    void LWCPPGL_CALL glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint * value) {
        glad_glClearBufferiv(buffer, drawbuffer, value);
    }
    #undef glClearBufferuiv
    void LWCPPGL_CALL glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint * value) {
        glad_glClearBufferuiv(buffer, drawbuffer, value);
    }
    #undef glClearBufferfv
    void LWCPPGL_CALL glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat * value) {
        glad_glClearBufferfv(buffer, drawbuffer, value);
    }
    #undef glClearBufferfi
    void LWCPPGL_CALL glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil) {
        glad_glClearBufferfi(buffer, drawbuffer, depth, stencil);
    }
    #undef glGetStringi
    const GLubyte * LWCPPGL_CALL glGetStringi(GLenum name, GLuint index) {
        return glad_glGetStringi(name, index);
    }
    #undef glIsRenderbuffer
    GLboolean LWCPPGL_CALL glIsRenderbuffer(GLuint renderbuffer) {
        return glad_glIsRenderbuffer(renderbuffer);
    }
    #undef glBindRenderbuffer
    void LWCPPGL_CALL glBindRenderbuffer(GLenum target, GLuint renderbuffer) {
        glad_glBindRenderbuffer(target, renderbuffer);
    }
    #undef glDeleteRenderbuffers
    void LWCPPGL_CALL glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers) {
        glad_glDeleteRenderbuffers(n, renderbuffers);
    }
    #undef glGenRenderbuffers
    void LWCPPGL_CALL glGenRenderbuffers(GLsizei n, GLuint * renderbuffers) {
        glad_glGenRenderbuffers(n, renderbuffers);
    }
    #undef glRenderbufferStorage
    void LWCPPGL_CALL glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) {
        glad_glRenderbufferStorage(target, internalformat, width, height);
    }
    #undef glGetRenderbufferParameteriv
    void LWCPPGL_CALL glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params) {
        glad_glGetRenderbufferParameteriv(target, pname, params);
    }
    #undef glIsFramebuffer
    GLboolean LWCPPGL_CALL glIsFramebuffer(GLuint framebuffer) {
        return glad_glIsFramebuffer(framebuffer);
    }
    #undef glBindFramebuffer
    void LWCPPGL_CALL glBindFramebuffer(GLenum target, GLuint framebuffer) {
        glad_glBindFramebuffer(target, framebuffer);
    }
    #undef glDeleteFramebuffers
    void LWCPPGL_CALL glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers) {
        glad_glDeleteFramebuffers(n, framebuffers);
    }
    #undef glGenFramebuffers
    void LWCPPGL_CALL glGenFramebuffers(GLsizei n, GLuint * framebuffers) {
        glad_glGenFramebuffers(n, framebuffers);
    }
    #undef glCheckFramebufferStatus
    GLenum LWCPPGL_CALL glCheckFramebufferStatus(GLenum target) {
        return glad_glCheckFramebufferStatus(target);
    }
    #undef glFramebufferTexture1D
    void LWCPPGL_CALL glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
        glad_glFramebufferTexture1D(target, attachment, textarget, texture, level);
    }
    #undef glFramebufferTexture2D
    void LWCPPGL_CALL glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
        glad_glFramebufferTexture2D(target, attachment, textarget, texture, level);
    }
    #undef glFramebufferTexture3D
    void LWCPPGL_CALL glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) {
        glad_glFramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
    }
    #undef glFramebufferRenderbuffer
    void LWCPPGL_CALL glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) {
        glad_glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
    }
    #undef glGetFramebufferAttachmentParameteriv
    void LWCPPGL_CALL glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params) {
        glad_glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
    }
    #undef glGenerateMipmap
    void LWCPPGL_CALL glGenerateMipmap(GLenum target) {
        glad_glGenerateMipmap(target);
    }
    #undef glBlitFramebuffer
    void LWCPPGL_CALL glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) {
        glad_glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
    }
    #undef glRenderbufferStorageMultisample
    void LWCPPGL_CALL glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) {
        glad_glRenderbufferStorageMultisample(target, samples, internalformat, width, height);
    }
    #undef glFramebufferTextureLayer
    void LWCPPGL_CALL glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) {
        glad_glFramebufferTextureLayer(target, attachment, texture, level, layer);
    }
    #undef glMapBufferRange
    void * LWCPPGL_CALL glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access) {
        return glad_glMapBufferRange(target, offset, length, access);
    }
    #undef glFlushMappedBufferRange
    void LWCPPGL_CALL glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length) {
        glad_glFlushMappedBufferRange(target, offset, length);
    }
    #undef glBindVertexArray
    void LWCPPGL_CALL glBindVertexArray(GLuint array) {
        glad_glBindVertexArray(array);
    }
    #undef glDeleteVertexArrays
    void LWCPPGL_CALL glDeleteVertexArrays(GLsizei n, const GLuint * arrays) {
        glad_glDeleteVertexArrays(n, arrays);
    }
    #undef glGenVertexArrays
    void LWCPPGL_CALL glGenVertexArrays(GLsizei n, GLuint * arrays) {
        glad_glGenVertexArrays(n, arrays);
    }
    #undef glIsVertexArray
    GLboolean LWCPPGL_CALL glIsVertexArray(GLuint array) {
        return glad_glIsVertexArray(array);
    }
    #undef glDrawArraysInstanced
    void LWCPPGL_CALL glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount) {
        glad_glDrawArraysInstanced(mode, first, count, instancecount);
    }
    #undef glDrawElementsInstanced
    void LWCPPGL_CALL glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instancecount) {
        glad_glDrawElementsInstanced(mode, count, type, indices, instancecount);
    }
    #undef glTexBuffer
    void LWCPPGL_CALL glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer) {
        glad_glTexBuffer(target, internalformat, buffer);
    }
    #undef glPrimitiveRestartIndex
    void LWCPPGL_CALL glPrimitiveRestartIndex(GLuint index) {
        glad_glPrimitiveRestartIndex(index);
    }
    #undef glCopyBufferSubData
    void LWCPPGL_CALL glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) {
        glad_glCopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
    }
    #undef glGetUniformIndices
    void LWCPPGL_CALL glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar * const * uniformNames, GLuint * uniformIndices) {
        glad_glGetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
    }
    #undef glGetActiveUniformsiv
    void LWCPPGL_CALL glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params) {
        glad_glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
    }
    #undef glGetActiveUniformName
    void LWCPPGL_CALL glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName) {
        glad_glGetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
    }
    #undef glGetUniformBlockIndex
    GLuint LWCPPGL_CALL glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName) {
        return glad_glGetUniformBlockIndex(program, uniformBlockName);
    }
    #undef glGetActiveUniformBlockiv
    void LWCPPGL_CALL glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params) {
        glad_glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
    }
    #undef glGetActiveUniformBlockName
    void LWCPPGL_CALL glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName) {
        glad_glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
    }
    #undef glUniformBlockBinding
    void LWCPPGL_CALL glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding) {
        glad_glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
    }
    #undef glDrawElementsBaseVertex
    void LWCPPGL_CALL glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void* indices, GLint basevertex) {
        glad_glDrawElementsBaseVertex(mode, count, type, indices, basevertex);
    }
    #undef glDrawRangeElementsBaseVertex
    void LWCPPGL_CALL glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void* indices, GLint basevertex) {
        glad_glDrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex);
    }
    #undef glDrawElementsInstancedBaseVertex
    void LWCPPGL_CALL glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instancecount, GLint basevertex) {
        glad_glDrawElementsInstancedBaseVertex(mode, count, type, indices, instancecount, basevertex);
    }
    #undef glMultiDrawElementsBaseVertex
    void LWCPPGL_CALL glMultiDrawElementsBaseVertex(GLenum mode, const GLsizei * count, GLenum type, const void* const * indices, GLsizei drawcount, const GLint * basevertex) {
        glad_glMultiDrawElementsBaseVertex(mode, count, type, indices, drawcount, basevertex);
    }
    #undef glProvokingVertex
    void LWCPPGL_CALL glProvokingVertex(GLenum mode) {
        glad_glProvokingVertex(mode);
    }
    #undef glFenceSync
    GLsync LWCPPGL_CALL glFenceSync(GLenum condition, GLbitfield flags) {
        return glad_glFenceSync(condition, flags);
    }
    #undef glIsSync
    GLboolean LWCPPGL_CALL glIsSync(GLsync sync) {
        return glad_glIsSync(sync);
    }
    #undef glDeleteSync
    void LWCPPGL_CALL glDeleteSync(GLsync sync) {
        glad_glDeleteSync(sync);
    }
    #undef glClientWaitSync
    GLenum LWCPPGL_CALL glClientWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout) {
        return glad_glClientWaitSync(sync, flags, timeout);
    }
    #undef glWaitSync
    void LWCPPGL_CALL glWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout) {
        glad_glWaitSync(sync, flags, timeout);
    }
    #undef glGetInteger64v
    void LWCPPGL_CALL glGetInteger64v(GLenum pname, GLint64 * data) {
        glad_glGetInteger64v(pname, data);
    }
    #undef glGetSynciv
    void LWCPPGL_CALL glGetSynciv(GLsync sync, GLenum pname, GLsizei count, GLsizei * length, GLint * values) {
        glad_glGetSynciv(sync, pname, count, length, values);
    }
    #undef glGetInteger64i_v
    void LWCPPGL_CALL glGetInteger64i_v(GLenum target, GLuint index, GLint64 * data) {
        glad_glGetInteger64i_v(target, index, data);
    }
    #undef glGetBufferParameteri64v
    void LWCPPGL_CALL glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 * params) {
        glad_glGetBufferParameteri64v(target, pname, params);
    }
    #undef glFramebufferTexture
    void LWCPPGL_CALL glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level) {
        glad_glFramebufferTexture(target, attachment, texture, level);
    }
    #undef glTexImage2DMultisample
    void LWCPPGL_CALL glTexImage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) {
        glad_glTexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
    }
    #undef glTexImage3DMultisample
    void LWCPPGL_CALL glTexImage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) {
        glad_glTexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
    }
    #undef glGetMultisamplefv
    void LWCPPGL_CALL glGetMultisamplefv(GLenum pname, GLuint index, GLfloat * val) {
        glad_glGetMultisamplefv(pname, index, val);
    }
    #undef glSampleMaski
    void LWCPPGL_CALL glSampleMaski(GLuint maskNumber, GLbitfield mask) {
        glad_glSampleMaski(maskNumber, mask);
    }
    #undef glBindFragDataLocationIndexed
    void LWCPPGL_CALL glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name) {
        glad_glBindFragDataLocationIndexed(program, colorNumber, index, name);
    }
    #undef glGetFragDataIndex
    GLint LWCPPGL_CALL glGetFragDataIndex(GLuint program, const GLchar * name) {
        return glad_glGetFragDataIndex(program, name);
    }
    #undef glGenSamplers
    void LWCPPGL_CALL glGenSamplers(GLsizei count, GLuint * samplers) {
        glad_glGenSamplers(count, samplers);
    }
    #undef glDeleteSamplers
    void LWCPPGL_CALL glDeleteSamplers(GLsizei count, const GLuint * samplers) {
        glad_glDeleteSamplers(count, samplers);
    }
    #undef glIsSampler
    GLboolean LWCPPGL_CALL glIsSampler(GLuint sampler) {
        return glad_glIsSampler(sampler);
    }
    #undef glBindSampler
    void LWCPPGL_CALL glBindSampler(GLuint unit, GLuint sampler) {
        glad_glBindSampler(unit, sampler);
    }
    #undef glSamplerParameteri
    void LWCPPGL_CALL glSamplerParameteri(GLuint sampler, GLenum pname, GLint param) {
        glad_glSamplerParameteri(sampler, pname, param);
    }
    #undef glSamplerParameteriv
    void LWCPPGL_CALL glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint * param) {
        glad_glSamplerParameteriv(sampler, pname, param);
    }
    #undef glSamplerParameterf
    void LWCPPGL_CALL glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param) {
        glad_glSamplerParameterf(sampler, pname, param);
    }
    #undef glSamplerParameterfv
    void LWCPPGL_CALL glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat * param) {
        glad_glSamplerParameterfv(sampler, pname, param);
    }
    #undef glSamplerParameterIiv
    void LWCPPGL_CALL glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint * param) {
        glad_glSamplerParameterIiv(sampler, pname, param);
    }
    #undef glSamplerParameterIuiv
    void LWCPPGL_CALL glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint * param) {
        glad_glSamplerParameterIuiv(sampler, pname, param);
    }
    #undef glGetSamplerParameteriv
    void LWCPPGL_CALL glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint * params) {
        glad_glGetSamplerParameteriv(sampler, pname, params);
    }
    #undef glGetSamplerParameterIiv
    void LWCPPGL_CALL glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint * params) {
        glad_glGetSamplerParameterIiv(sampler, pname, params);
    }
    #undef glGetSamplerParameterfv
    void LWCPPGL_CALL glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat * params) {
        glad_glGetSamplerParameterfv(sampler, pname, params);
    }
    #undef glGetSamplerParameterIuiv
    void LWCPPGL_CALL glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint * params) {
        glad_glGetSamplerParameterIuiv(sampler, pname, params);
    }
    #undef glQueryCounter
    void LWCPPGL_CALL glQueryCounter(GLuint id, GLenum target) {
        glad_glQueryCounter(id, target);
    }
    #undef glGetQueryObjecti64v
    void LWCPPGL_CALL glGetQueryObjecti64v(GLuint id, GLenum pname, GLint64 * params) {
        glad_glGetQueryObjecti64v(id, pname, params);
    }
    #undef glGetQueryObjectui64v
    void LWCPPGL_CALL glGetQueryObjectui64v(GLuint id, GLenum pname, GLuint64 * params) {
        glad_glGetQueryObjectui64v(id, pname, params);
    }
    #undef glVertexAttribDivisor
    void LWCPPGL_CALL glVertexAttribDivisor(GLuint index, GLuint divisor) {
        glad_glVertexAttribDivisor(index, divisor);
    }
    #undef glVertexAttribP1ui
    void LWCPPGL_CALL glVertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) {
        glad_glVertexAttribP1ui(index, type, normalized, value);
    }
    #undef glVertexAttribP1uiv
    void LWCPPGL_CALL glVertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value) {
        glad_glVertexAttribP1uiv(index, type, normalized, value);
    }
    #undef glVertexAttribP2ui
    void LWCPPGL_CALL glVertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) {
        glad_glVertexAttribP2ui(index, type, normalized, value);
    }
    #undef glVertexAttribP2uiv
    void LWCPPGL_CALL glVertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value) {
        glad_glVertexAttribP2uiv(index, type, normalized, value);
    }
    #undef glVertexAttribP3ui
    void LWCPPGL_CALL glVertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) {
        glad_glVertexAttribP3ui(index, type, normalized, value);
    }
    #undef glVertexAttribP3uiv
    void LWCPPGL_CALL glVertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value) {
        glad_glVertexAttribP3uiv(index, type, normalized, value);
    }
    #undef glVertexAttribP4ui
    void LWCPPGL_CALL glVertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) {
        glad_glVertexAttribP4ui(index, type, normalized, value);
    }
    #undef glVertexAttribP4uiv
    void LWCPPGL_CALL glVertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value) {
        glad_glVertexAttribP4uiv(index, type, normalized, value);
    }
    #undef glVertexP2ui
    void LWCPPGL_CALL glVertexP2ui(GLenum type, GLuint value) {
        glad_glVertexP2ui(type, value);
    }
    #undef glVertexP2uiv
    void LWCPPGL_CALL glVertexP2uiv(GLenum type, const GLuint * value) {
        glad_glVertexP2uiv(type, value);
    }
    #undef glVertexP3ui
    void LWCPPGL_CALL glVertexP3ui(GLenum type, GLuint value) {
        glad_glVertexP3ui(type, value);
    }
    #undef glVertexP3uiv
    void LWCPPGL_CALL glVertexP3uiv(GLenum type, const GLuint * value) {
        glad_glVertexP3uiv(type, value);
    }
    #undef glVertexP4ui
    void LWCPPGL_CALL glVertexP4ui(GLenum type, GLuint value) {
        glad_glVertexP4ui(type, value);
    }
    #undef glVertexP4uiv
    void LWCPPGL_CALL glVertexP4uiv(GLenum type, const GLuint * value) {
        glad_glVertexP4uiv(type, value);
    }
    #undef glTexCoordP1ui
    void LWCPPGL_CALL glTexCoordP1ui(GLenum type, GLuint coords) {
        glad_glTexCoordP1ui(type, coords);
    }
    #undef glTexCoordP1uiv
    void LWCPPGL_CALL glTexCoordP1uiv(GLenum type, const GLuint * coords) {
        glad_glTexCoordP1uiv(type, coords);
    }
    #undef glTexCoordP2ui
    void LWCPPGL_CALL glTexCoordP2ui(GLenum type, GLuint coords) {
        glad_glTexCoordP2ui(type, coords);
    }
    #undef glTexCoordP2uiv
    void LWCPPGL_CALL glTexCoordP2uiv(GLenum type, const GLuint * coords) {
        glad_glTexCoordP2uiv(type, coords);
    }
    #undef glTexCoordP3ui
    void LWCPPGL_CALL glTexCoordP3ui(GLenum type, GLuint coords) {
        glad_glTexCoordP3ui(type, coords);
    }
    #undef glTexCoordP3uiv
    void LWCPPGL_CALL glTexCoordP3uiv(GLenum type, const GLuint * coords) {
        glad_glTexCoordP3uiv(type, coords);
    }
    #undef glTexCoordP4ui
    void LWCPPGL_CALL glTexCoordP4ui(GLenum type, GLuint coords) {
        glad_glTexCoordP4ui(type, coords);
    }
    #undef glTexCoordP4uiv
    void LWCPPGL_CALL glTexCoordP4uiv(GLenum type, const GLuint * coords) {
        glad_glTexCoordP4uiv(type, coords);
    }
    #undef glMultiTexCoordP1ui
    void LWCPPGL_CALL glMultiTexCoordP1ui(GLenum texture, GLenum type, GLuint coords) {
        glad_glMultiTexCoordP1ui(texture, type, coords);
    }
    #undef glMultiTexCoordP1uiv
    void LWCPPGL_CALL glMultiTexCoordP1uiv(GLenum texture, GLenum type, const GLuint * coords) {
        glad_glMultiTexCoordP1uiv(texture, type, coords);
    }
    #undef glMultiTexCoordP2ui
    void LWCPPGL_CALL glMultiTexCoordP2ui(GLenum texture, GLenum type, GLuint coords) {
        glad_glMultiTexCoordP2ui(texture, type, coords);
    }
    #undef glMultiTexCoordP2uiv
    void LWCPPGL_CALL glMultiTexCoordP2uiv(GLenum texture, GLenum type, const GLuint * coords) {
        glad_glMultiTexCoordP2uiv(texture, type, coords);
    }
    #undef glMultiTexCoordP3ui
    void LWCPPGL_CALL glMultiTexCoordP3ui(GLenum texture, GLenum type, GLuint coords) {
        glad_glMultiTexCoordP3ui(texture, type, coords);
    }
    #undef glMultiTexCoordP3uiv
    void LWCPPGL_CALL glMultiTexCoordP3uiv(GLenum texture, GLenum type, const GLuint * coords) {
        glad_glMultiTexCoordP3uiv(texture, type, coords);
    }
    #undef glMultiTexCoordP4ui
    void LWCPPGL_CALL glMultiTexCoordP4ui(GLenum texture, GLenum type, GLuint coords) {
        glad_glMultiTexCoordP4ui(texture, type, coords);
    }
    #undef glMultiTexCoordP4uiv
    void LWCPPGL_CALL glMultiTexCoordP4uiv(GLenum texture, GLenum type, const GLuint * coords) {
        glad_glMultiTexCoordP4uiv(texture, type, coords);
    }
    #undef glNormalP3ui
    void LWCPPGL_CALL glNormalP3ui(GLenum type, GLuint coords) {
        glad_glNormalP3ui(type, coords);
    }
    #undef glNormalP3uiv
    void LWCPPGL_CALL glNormalP3uiv(GLenum type, const GLuint * coords) {
        glad_glNormalP3uiv(type, coords);
    }
    #undef glColorP3ui
    void LWCPPGL_CALL glColorP3ui(GLenum type, GLuint color) {
        glad_glColorP3ui(type, color);
    }
    #undef glColorP3uiv
    void LWCPPGL_CALL glColorP3uiv(GLenum type, const GLuint * color) {
        glad_glColorP3uiv(type, color);
    }
    #undef glColorP4ui
    void LWCPPGL_CALL glColorP4ui(GLenum type, GLuint color) {
        glad_glColorP4ui(type, color);
    }
    #undef glColorP4uiv
    void LWCPPGL_CALL glColorP4uiv(GLenum type, const GLuint * color) {
        glad_glColorP4uiv(type, color);
    }
    #undef glSecondaryColorP3ui
    void LWCPPGL_CALL glSecondaryColorP3ui(GLenum type, GLuint color) {
        glad_glSecondaryColorP3ui(type, color);
    }
    #undef glSecondaryColorP3uiv
    void LWCPPGL_CALL glSecondaryColorP3uiv(GLenum type, const GLuint * color) {
        glad_glSecondaryColorP3uiv(type, color);
    }
    #undef glMinSampleShading
    void LWCPPGL_CALL glMinSampleShading(GLfloat value) {
        glad_glMinSampleShading(value);
    }
    #undef glBlendEquationi
    void LWCPPGL_CALL glBlendEquationi(GLuint buf, GLenum mode) {
        glad_glBlendEquationi(buf, mode);
    }
    #undef glBlendEquationSeparatei
    void LWCPPGL_CALL glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha) {
        glad_glBlendEquationSeparatei(buf, modeRGB, modeAlpha);
    }
    #undef glBlendFunci
    void LWCPPGL_CALL glBlendFunci(GLuint buf, GLenum src, GLenum dst) {
        glad_glBlendFunci(buf, src, dst);
    }
    #undef glBlendFuncSeparatei
    void LWCPPGL_CALL glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) {
        glad_glBlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
    }
    #undef glDrawArraysIndirect
    void LWCPPGL_CALL glDrawArraysIndirect(GLenum mode, const void* indirect) {
        glad_glDrawArraysIndirect(mode, indirect);
    }
    #undef glDrawElementsIndirect
    void LWCPPGL_CALL glDrawElementsIndirect(GLenum mode, GLenum type, const void* indirect) {
        glad_glDrawElementsIndirect(mode, type, indirect);
    }
    #undef glUniform1d
    void LWCPPGL_CALL glUniform1d(GLint location, GLdouble x) {
        glad_glUniform1d(location, x);
    }
    #undef glUniform2d
    void LWCPPGL_CALL glUniform2d(GLint location, GLdouble x, GLdouble y) {
        glad_glUniform2d(location, x, y);
    }
    #undef glUniform3d
    void LWCPPGL_CALL glUniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z) {
        glad_glUniform3d(location, x, y, z);
    }
    #undef glUniform4d
    void LWCPPGL_CALL glUniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
        glad_glUniform4d(location, x, y, z, w);
    }
    #undef glUniform1dv
    void LWCPPGL_CALL glUniform1dv(GLint location, GLsizei count, const GLdouble * value) {
        glad_glUniform1dv(location, count, value);
    }
    #undef glUniform2dv
    void LWCPPGL_CALL glUniform2dv(GLint location, GLsizei count, const GLdouble * value) {
        glad_glUniform2dv(location, count, value);
    }
    #undef glUniform3dv
    void LWCPPGL_CALL glUniform3dv(GLint location, GLsizei count, const GLdouble * value) {
        glad_glUniform3dv(location, count, value);
    }
    #undef glUniform4dv
    void LWCPPGL_CALL glUniform4dv(GLint location, GLsizei count, const GLdouble * value) {
        glad_glUniform4dv(location, count, value);
    }
    #undef glUniformMatrix2dv
    void LWCPPGL_CALL glUniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
        glad_glUniformMatrix2dv(location, count, transpose, value);
    }
    #undef glUniformMatrix3dv
    void LWCPPGL_CALL glUniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
        glad_glUniformMatrix3dv(location, count, transpose, value);
    }
    #undef glUniformMatrix4dv
    void LWCPPGL_CALL glUniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
        glad_glUniformMatrix4dv(location, count, transpose, value);
    }
    #undef glUniformMatrix2x3dv
    void LWCPPGL_CALL glUniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
        glad_glUniformMatrix2x3dv(location, count, transpose, value);
    }
    #undef glUniformMatrix2x4dv
    void LWCPPGL_CALL glUniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
        glad_glUniformMatrix2x4dv(location, count, transpose, value);
    }
    #undef glUniformMatrix3x2dv
    void LWCPPGL_CALL glUniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
        glad_glUniformMatrix3x2dv(location, count, transpose, value);
    }
    #undef glUniformMatrix3x4dv
    void LWCPPGL_CALL glUniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
        glad_glUniformMatrix3x4dv(location, count, transpose, value);
    }
    #undef glUniformMatrix4x2dv
    void LWCPPGL_CALL glUniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
        glad_glUniformMatrix4x2dv(location, count, transpose, value);
    }
    #undef glUniformMatrix4x3dv
    void LWCPPGL_CALL glUniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
        glad_glUniformMatrix4x3dv(location, count, transpose, value);
    }
    #undef glGetUniformdv
    void LWCPPGL_CALL glGetUniformdv(GLuint program, GLint location, GLdouble * params) {
        glad_glGetUniformdv(program, location, params);
    }
    #undef glGetSubroutineUniformLocation
    GLint LWCPPGL_CALL glGetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar * name) {
        return glad_glGetSubroutineUniformLocation(program, shadertype, name);
    }
    #undef glGetSubroutineIndex
    GLuint LWCPPGL_CALL glGetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar * name) {
        return glad_glGetSubroutineIndex(program, shadertype, name);
    }
    #undef glGetActiveSubroutineUniformiv
    void LWCPPGL_CALL glGetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values) {
        glad_glGetActiveSubroutineUniformiv(program, shadertype, index, pname, values);
    }
    #undef glGetActiveSubroutineUniformName
    void LWCPPGL_CALL glGetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name) {
        glad_glGetActiveSubroutineUniformName(program, shadertype, index, bufSize, length, name);
    }
    #undef glGetActiveSubroutineName
    void LWCPPGL_CALL glGetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name) {
        glad_glGetActiveSubroutineName(program, shadertype, index, bufSize, length, name);
    }
    #undef glUniformSubroutinesuiv
    void LWCPPGL_CALL glUniformSubroutinesuiv(GLenum shadertype, GLsizei count, const GLuint * indices) {
        glad_glUniformSubroutinesuiv(shadertype, count, indices);
    }
    #undef glGetUniformSubroutineuiv
    void LWCPPGL_CALL glGetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint * params) {
        glad_glGetUniformSubroutineuiv(shadertype, location, params);
    }
    #undef glGetProgramStageiv
    void LWCPPGL_CALL glGetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint * values) {
        glad_glGetProgramStageiv(program, shadertype, pname, values);
    }
    #undef glPatchParameteri
    void LWCPPGL_CALL glPatchParameteri(GLenum pname, GLint value) {
        glad_glPatchParameteri(pname, value);
    }
    #undef glPatchParameterfv
    void LWCPPGL_CALL glPatchParameterfv(GLenum pname, const GLfloat * values) {
        glad_glPatchParameterfv(pname, values);
    }
    #undef glBindTransformFeedback
    void LWCPPGL_CALL glBindTransformFeedback(GLenum target, GLuint id) {
        glad_glBindTransformFeedback(target, id);
    }
    #undef glDeleteTransformFeedbacks
    void LWCPPGL_CALL glDeleteTransformFeedbacks(GLsizei n, const GLuint * ids) {
        glad_glDeleteTransformFeedbacks(n, ids);
    }
    #undef glGenTransformFeedbacks
    void LWCPPGL_CALL glGenTransformFeedbacks(GLsizei n, GLuint * ids) {
        glad_glGenTransformFeedbacks(n, ids);
    }
    #undef glIsTransformFeedback
    GLboolean LWCPPGL_CALL glIsTransformFeedback(GLuint id) {
        return glad_glIsTransformFeedback(id);
    }
    #undef glPauseTransformFeedback
    void LWCPPGL_CALL glPauseTransformFeedback(void) {
        glad_glPauseTransformFeedback();
    }
    #undef glResumeTransformFeedback
    void LWCPPGL_CALL glResumeTransformFeedback(void) {
        glad_glResumeTransformFeedback();
    }
    #undef glDrawTransformFeedback
    void LWCPPGL_CALL glDrawTransformFeedback(GLenum mode, GLuint id) {
        glad_glDrawTransformFeedback(mode, id);
    }
    #undef glDrawTransformFeedbackStream
    void LWCPPGL_CALL glDrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream) {
        glad_glDrawTransformFeedbackStream(mode, id, stream);
    }
    #undef glBeginQueryIndexed
    void LWCPPGL_CALL glBeginQueryIndexed(GLenum target, GLuint index, GLuint id) {
        glad_glBeginQueryIndexed(target, index, id);
    }
    #undef glEndQueryIndexed
    void LWCPPGL_CALL glEndQueryIndexed(GLenum target, GLuint index) {
        glad_glEndQueryIndexed(target, index);
    }
    #undef glGetQueryIndexediv
    void LWCPPGL_CALL glGetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint * params) {
        glad_glGetQueryIndexediv(target, index, pname, params);
    }
    #undef glReleaseShaderCompiler
    void LWCPPGL_CALL glReleaseShaderCompiler(void) {
        glad_glReleaseShaderCompiler();
    }
    #undef glShaderBinary
    void LWCPPGL_CALL glShaderBinary(GLsizei count, const GLuint * shaders, GLenum binaryFormat, const void* binary, GLsizei length) {
        glad_glShaderBinary(count, shaders, binaryFormat, binary, length);
    }
    #undef glGetShaderPrecisionFormat
    void LWCPPGL_CALL glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision) {
        glad_glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
    }
    #undef glDepthRangef
    void LWCPPGL_CALL glDepthRangef(GLfloat n, GLfloat f) {
        glad_glDepthRangef(n, f);
    }
    #undef glClearDepthf
    void LWCPPGL_CALL glClearDepthf(GLfloat d) {
        glad_glClearDepthf(d);
    }
    #undef glGetProgramBinary
    void LWCPPGL_CALL glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void* binary) {
        glad_glGetProgramBinary(program, bufSize, length, binaryFormat, binary);
    }
    #undef glProgramBinary
    void LWCPPGL_CALL glProgramBinary(GLuint program, GLenum binaryFormat, const void* binary, GLsizei length) {
        glad_glProgramBinary(program, binaryFormat, binary, length);
    }
    #undef glProgramParameteri
    void LWCPPGL_CALL glProgramParameteri(GLuint program, GLenum pname, GLint value) {
        glad_glProgramParameteri(program, pname, value);
    }
    #undef glUseProgramStages
    void LWCPPGL_CALL glUseProgramStages(GLuint pipeline, GLbitfield stages, GLuint program) {
        glad_glUseProgramStages(pipeline, stages, program);
    }
    #undef glActiveShaderProgram
    void LWCPPGL_CALL glActiveShaderProgram(GLuint pipeline, GLuint program) {
        glad_glActiveShaderProgram(pipeline, program);
    }
    #undef glCreateShaderProgramv
    GLuint LWCPPGL_CALL glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar * const * strings) {
        return glad_glCreateShaderProgramv(type, count, strings);
    }
    #undef glBindProgramPipeline
    void LWCPPGL_CALL glBindProgramPipeline(GLuint pipeline) {
        glad_glBindProgramPipeline(pipeline);
    }
    #undef glDeleteProgramPipelines
    void LWCPPGL_CALL glDeleteProgramPipelines(GLsizei n, const GLuint * pipelines) {
        glad_glDeleteProgramPipelines(n, pipelines);
    }
    #undef glGenProgramPipelines
    void LWCPPGL_CALL glGenProgramPipelines(GLsizei n, GLuint * pipelines) {
        glad_glGenProgramPipelines(n, pipelines);
    }
    #undef glIsProgramPipeline
    GLboolean LWCPPGL_CALL glIsProgramPipeline(GLuint pipeline) {
        return glad_glIsProgramPipeline(pipeline);
    }
    #undef glGetProgramPipelineiv
    void LWCPPGL_CALL glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint * params) {
        glad_glGetProgramPipelineiv(pipeline, pname, params);
    }
    #undef glProgramUniform1i
    void LWCPPGL_CALL glProgramUniform1i(GLuint program, GLint location, GLint v0) {
        glad_glProgramUniform1i(program, location, v0);
    }
    #undef glProgramUniform1iv
    void LWCPPGL_CALL glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint * value) {
        glad_glProgramUniform1iv(program, location, count, value);
    }
    #undef glProgramUniform1f
    void LWCPPGL_CALL glProgramUniform1f(GLuint program, GLint location, GLfloat v0) {
        glad_glProgramUniform1f(program, location, v0);
    }
    #undef glProgramUniform1fv
    void LWCPPGL_CALL glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat * value) {
        glad_glProgramUniform1fv(program, location, count, value);
    }
    #undef glProgramUniform1d
    void LWCPPGL_CALL glProgramUniform1d(GLuint program, GLint location, GLdouble v0) {
        glad_glProgramUniform1d(program, location, v0);
    }
    #undef glProgramUniform1dv
    void LWCPPGL_CALL glProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble * value) {
        glad_glProgramUniform1dv(program, location, count, value);
    }
    #undef glProgramUniform1ui
    void LWCPPGL_CALL glProgramUniform1ui(GLuint program, GLint location, GLuint v0) {
        glad_glProgramUniform1ui(program, location, v0);
    }
    #undef glProgramUniform1uiv
    void LWCPPGL_CALL glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint * value) {
        glad_glProgramUniform1uiv(program, location, count, value);
    }
    #undef glProgramUniform2i
    void LWCPPGL_CALL glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1) {
        glad_glProgramUniform2i(program, location, v0, v1);
    }
    #undef glProgramUniform2iv
    void LWCPPGL_CALL glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint * value) {
        glad_glProgramUniform2iv(program, location, count, value);
    }
    #undef glProgramUniform2f
    void LWCPPGL_CALL glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1) {
        glad_glProgramUniform2f(program, location, v0, v1);
    }
    #undef glProgramUniform2fv
    void LWCPPGL_CALL glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat * value) {
        glad_glProgramUniform2fv(program, location, count, value);
    }
    #undef glProgramUniform2d
    void LWCPPGL_CALL glProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1) {
        glad_glProgramUniform2d(program, location, v0, v1);
    }
    #undef glProgramUniform2dv
    void LWCPPGL_CALL glProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble * value) {
        glad_glProgramUniform2dv(program, location, count, value);
    }
    #undef glProgramUniform2ui
    void LWCPPGL_CALL glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1) {
        glad_glProgramUniform2ui(program, location, v0, v1);
    }
    #undef glProgramUniform2uiv
    void LWCPPGL_CALL glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint * value) {
        glad_glProgramUniform2uiv(program, location, count, value);
    }
    #undef glProgramUniform3i
    void LWCPPGL_CALL glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2) {
        glad_glProgramUniform3i(program, location, v0, v1, v2);
    }
    #undef glProgramUniform3iv
    void LWCPPGL_CALL glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint * value) {
        glad_glProgramUniform3iv(program, location, count, value);
    }
    #undef glProgramUniform3f
    void LWCPPGL_CALL glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) {
        glad_glProgramUniform3f(program, location, v0, v1, v2);
    }
    #undef glProgramUniform3fv
    void LWCPPGL_CALL glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat * value) {
        glad_glProgramUniform3fv(program, location, count, value);
    }
    #undef glProgramUniform3d
    void LWCPPGL_CALL glProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2) {
        glad_glProgramUniform3d(program, location, v0, v1, v2);
    }
    #undef glProgramUniform3dv
    void LWCPPGL_CALL glProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble * value) {
        glad_glProgramUniform3dv(program, location, count, value);
    }
    #undef glProgramUniform3ui
    void LWCPPGL_CALL glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) {
        glad_glProgramUniform3ui(program, location, v0, v1, v2);
    }
    #undef glProgramUniform3uiv
    void LWCPPGL_CALL glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint * value) {
        glad_glProgramUniform3uiv(program, location, count, value);
    }
    #undef glProgramUniform4i
    void LWCPPGL_CALL glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) {
        glad_glProgramUniform4i(program, location, v0, v1, v2, v3);
    }
    #undef glProgramUniform4iv
    void LWCPPGL_CALL glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint * value) {
        glad_glProgramUniform4iv(program, location, count, value);
    }
    #undef glProgramUniform4f
    void LWCPPGL_CALL glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) {
        glad_glProgramUniform4f(program, location, v0, v1, v2, v3);
    }
    #undef glProgramUniform4fv
    void LWCPPGL_CALL glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat * value) {
        glad_glProgramUniform4fv(program, location, count, value);
    }
    #undef glProgramUniform4d
    void LWCPPGL_CALL glProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3) {
        glad_glProgramUniform4d(program, location, v0, v1, v2, v3);
    }
    #undef glProgramUniform4dv
    void LWCPPGL_CALL glProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble * value) {
        glad_glProgramUniform4dv(program, location, count, value);
    }
    #undef glProgramUniform4ui
    void LWCPPGL_CALL glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) {
        glad_glProgramUniform4ui(program, location, v0, v1, v2, v3);
    }
    #undef glProgramUniform4uiv
    void LWCPPGL_CALL glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint * value) {
        glad_glProgramUniform4uiv(program, location, count, value);
    }
    #undef glProgramUniformMatrix2fv
    void LWCPPGL_CALL glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
        glad_glProgramUniformMatrix2fv(program, location, count, transpose, value);
    }
    #undef glProgramUniformMatrix3fv
    void LWCPPGL_CALL glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
        glad_glProgramUniformMatrix3fv(program, location, count, transpose, value);
    }
    #undef glProgramUniformMatrix4fv
    void LWCPPGL_CALL glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
        glad_glProgramUniformMatrix4fv(program, location, count, transpose, value);
    }
    #undef glProgramUniformMatrix2dv
    void LWCPPGL_CALL glProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
        glad_glProgramUniformMatrix2dv(program, location, count, transpose, value);
    }
    #undef glProgramUniformMatrix3dv
    void LWCPPGL_CALL glProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
        glad_glProgramUniformMatrix3dv(program, location, count, transpose, value);
    }
    #undef glProgramUniformMatrix4dv
    void LWCPPGL_CALL glProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
        glad_glProgramUniformMatrix4dv(program, location, count, transpose, value);
    }
    #undef glProgramUniformMatrix2x3fv
    void LWCPPGL_CALL glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
        glad_glProgramUniformMatrix2x3fv(program, location, count, transpose, value);
    }
    #undef glProgramUniformMatrix3x2fv
    void LWCPPGL_CALL glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
        glad_glProgramUniformMatrix3x2fv(program, location, count, transpose, value);
    }
    #undef glProgramUniformMatrix2x4fv
    void LWCPPGL_CALL glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
        glad_glProgramUniformMatrix2x4fv(program, location, count, transpose, value);
    }
    #undef glProgramUniformMatrix4x2fv
    void LWCPPGL_CALL glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
        glad_glProgramUniformMatrix4x2fv(program, location, count, transpose, value);
    }
    #undef glProgramUniformMatrix3x4fv
    void LWCPPGL_CALL glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
        glad_glProgramUniformMatrix3x4fv(program, location, count, transpose, value);
    }
    #undef glProgramUniformMatrix4x3fv
    void LWCPPGL_CALL glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
        glad_glProgramUniformMatrix4x3fv(program, location, count, transpose, value);
    }
    #undef glProgramUniformMatrix2x3dv
    void LWCPPGL_CALL glProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
        glad_glProgramUniformMatrix2x3dv(program, location, count, transpose, value);
    }
    #undef glProgramUniformMatrix3x2dv
    void LWCPPGL_CALL glProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
        glad_glProgramUniformMatrix3x2dv(program, location, count, transpose, value);
    }
    #undef glProgramUniformMatrix2x4dv
    void LWCPPGL_CALL glProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
        glad_glProgramUniformMatrix2x4dv(program, location, count, transpose, value);
    }
    #undef glProgramUniformMatrix4x2dv
    void LWCPPGL_CALL glProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
        glad_glProgramUniformMatrix4x2dv(program, location, count, transpose, value);
    }
    #undef glProgramUniformMatrix3x4dv
    void LWCPPGL_CALL glProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
        glad_glProgramUniformMatrix3x4dv(program, location, count, transpose, value);
    }
    #undef glProgramUniformMatrix4x3dv
    void LWCPPGL_CALL glProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) {
        glad_glProgramUniformMatrix4x3dv(program, location, count, transpose, value);
    }
    #undef glValidateProgramPipeline
    void LWCPPGL_CALL glValidateProgramPipeline(GLuint pipeline) {
        glad_glValidateProgramPipeline(pipeline);
    }
    #undef glGetProgramPipelineInfoLog
    void LWCPPGL_CALL glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog) {
        glad_glGetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
    }
    #undef glVertexAttribL1d
    void LWCPPGL_CALL glVertexAttribL1d(GLuint index, GLdouble x) {
        glad_glVertexAttribL1d(index, x);
    }
    #undef glVertexAttribL2d
    void LWCPPGL_CALL glVertexAttribL2d(GLuint index, GLdouble x, GLdouble y) {
        glad_glVertexAttribL2d(index, x, y);
    }
    #undef glVertexAttribL3d
    void LWCPPGL_CALL glVertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z) {
        glad_glVertexAttribL3d(index, x, y, z);
    }
    #undef glVertexAttribL4d
    void LWCPPGL_CALL glVertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
        glad_glVertexAttribL4d(index, x, y, z, w);
    }
    #undef glVertexAttribL1dv
    void LWCPPGL_CALL glVertexAttribL1dv(GLuint index, const GLdouble * v) {
        glad_glVertexAttribL1dv(index, v);
    }
    #undef glVertexAttribL2dv
    void LWCPPGL_CALL glVertexAttribL2dv(GLuint index, const GLdouble * v) {
        glad_glVertexAttribL2dv(index, v);
    }
    #undef glVertexAttribL3dv
    void LWCPPGL_CALL glVertexAttribL3dv(GLuint index, const GLdouble * v) {
        glad_glVertexAttribL3dv(index, v);
    }
    #undef glVertexAttribL4dv
    void LWCPPGL_CALL glVertexAttribL4dv(GLuint index, const GLdouble * v) {
        glad_glVertexAttribL4dv(index, v);
    }
    #undef glVertexAttribLPointer
    void LWCPPGL_CALL glVertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void* pointer) {
        glad_glVertexAttribLPointer(index, size, type, stride, pointer);
    }
    #undef glGetVertexAttribLdv
    void LWCPPGL_CALL glGetVertexAttribLdv(GLuint index, GLenum pname, GLdouble * params) {
        glad_glGetVertexAttribLdv(index, pname, params);
    }
    #undef glViewportArrayv
    void LWCPPGL_CALL glViewportArrayv(GLuint first, GLsizei count, const GLfloat * v) {
        glad_glViewportArrayv(first, count, v);
    }
    #undef glViewportIndexedf
    void LWCPPGL_CALL glViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h) {
        glad_glViewportIndexedf(index, x, y, w, h);
    }
    #undef glViewportIndexedfv
    void LWCPPGL_CALL glViewportIndexedfv(GLuint index, const GLfloat * v) {
        glad_glViewportIndexedfv(index, v);
    }
    #undef glScissorArrayv
    void LWCPPGL_CALL glScissorArrayv(GLuint first, GLsizei count, const GLint * v) {
        glad_glScissorArrayv(first, count, v);
    }
    #undef glScissorIndexed
    void LWCPPGL_CALL glScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height) {
        glad_glScissorIndexed(index, left, bottom, width, height);
    }
    #undef glScissorIndexedv
    void LWCPPGL_CALL glScissorIndexedv(GLuint index, const GLint * v) {
        glad_glScissorIndexedv(index, v);
    }
    #undef glDepthRangeArrayv
    void LWCPPGL_CALL glDepthRangeArrayv(GLuint first, GLsizei count, const GLdouble * v) {
        glad_glDepthRangeArrayv(first, count, v);
    }
    #undef glDepthRangeIndexed
    void LWCPPGL_CALL glDepthRangeIndexed(GLuint index, GLdouble n, GLdouble f) {
        glad_glDepthRangeIndexed(index, n, f);
    }
    #undef glGetFloati_v
    void LWCPPGL_CALL glGetFloati_v(GLenum target, GLuint index, GLfloat * data) {
        glad_glGetFloati_v(target, index, data);
    }
    #undef glGetDoublei_v
    void LWCPPGL_CALL glGetDoublei_v(GLenum target, GLuint index, GLdouble * data) {
        glad_glGetDoublei_v(target, index, data);
    }
    #undef glDrawArraysInstancedBaseInstance
    void LWCPPGL_CALL glDrawArraysInstancedBaseInstance(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance) {
        glad_glDrawArraysInstancedBaseInstance(mode, first, count, instancecount, baseinstance);
    }
    #undef glDrawElementsInstancedBaseInstance
    void LWCPPGL_CALL glDrawElementsInstancedBaseInstance(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instancecount, GLuint baseinstance) {
        glad_glDrawElementsInstancedBaseInstance(mode, count, type, indices, instancecount, baseinstance);
    }
    #undef glDrawElementsInstancedBaseVertexBaseInstance
    void LWCPPGL_CALL glDrawElementsInstancedBaseVertexBaseInstance(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance) {
        glad_glDrawElementsInstancedBaseVertexBaseInstance(mode, count, type, indices, instancecount, basevertex, baseinstance);
    }
    #undef glGetInternalformativ
    void LWCPPGL_CALL glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint * params) {
        glad_glGetInternalformativ(target, internalformat, pname, count, params);
    }
    #undef glGetActiveAtomicCounterBufferiv
    void LWCPPGL_CALL glGetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, GLenum pname, GLint * params) {
        glad_glGetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params);
    }
    #undef glBindImageTexture
    void LWCPPGL_CALL glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format) {
        glad_glBindImageTexture(unit, texture, level, layered, layer, access, format);
    }
    #undef glMemoryBarrier
    void LWCPPGL_CALL glMemoryBarrier(GLbitfield barriers) {
        glad_glMemoryBarrier(barriers);
    }
    #undef glTexStorage1D
    void LWCPPGL_CALL glTexStorage1D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width) {
        glad_glTexStorage1D(target, levels, internalformat, width);
    }
    #undef glTexStorage2D
    void LWCPPGL_CALL glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) {
        glad_glTexStorage2D(target, levels, internalformat, width, height);
    }
    #undef glTexStorage3D
    void LWCPPGL_CALL glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) {
        glad_glTexStorage3D(target, levels, internalformat, width, height, depth);
    }
    #undef glDrawTransformFeedbackInstanced
    void LWCPPGL_CALL glDrawTransformFeedbackInstanced(GLenum mode, GLuint id, GLsizei instancecount) {
        glad_glDrawTransformFeedbackInstanced(mode, id, instancecount);
    }
    #undef glDrawTransformFeedbackStreamInstanced
    void LWCPPGL_CALL glDrawTransformFeedbackStreamInstanced(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount) {
        glad_glDrawTransformFeedbackStreamInstanced(mode, id, stream, instancecount);
    }
    #undef glClearBufferData
    void LWCPPGL_CALL glClearBufferData(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void* data) {
        glad_glClearBufferData(target, internalformat, format, type, data);
    }
    #undef glClearBufferSubData
    void LWCPPGL_CALL glClearBufferSubData(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void* data) {
        glad_glClearBufferSubData(target, internalformat, offset, size, format, type, data);
    }
    #undef glDispatchCompute
    void LWCPPGL_CALL glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z) {
        glad_glDispatchCompute(num_groups_x, num_groups_y, num_groups_z);
    }
    #undef glDispatchComputeIndirect
    void LWCPPGL_CALL glDispatchComputeIndirect(GLintptr indirect) {
        glad_glDispatchComputeIndirect(indirect);
    }
    #undef glCopyImageSubData
    void LWCPPGL_CALL glCopyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth) {
        glad_glCopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
    }
    #undef glFramebufferParameteri
    void LWCPPGL_CALL glFramebufferParameteri(GLenum target, GLenum pname, GLint param) {
        glad_glFramebufferParameteri(target, pname, param);
    }
    #undef glGetFramebufferParameteriv
    void LWCPPGL_CALL glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint * params) {
        glad_glGetFramebufferParameteriv(target, pname, params);
    }
    #undef glGetInternalformati64v
    void LWCPPGL_CALL glGetInternalformati64v(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint64 * params) {
        glad_glGetInternalformati64v(target, internalformat, pname, count, params);
    }
    #undef glInvalidateTexSubImage
    void LWCPPGL_CALL glInvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth) {
        glad_glInvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth);
    }
    #undef glInvalidateTexImage
    void LWCPPGL_CALL glInvalidateTexImage(GLuint texture, GLint level) {
        glad_glInvalidateTexImage(texture, level);
    }
    #undef glInvalidateBufferSubData
    void LWCPPGL_CALL glInvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length) {
        glad_glInvalidateBufferSubData(buffer, offset, length);
    }
    #undef glInvalidateBufferData
    void LWCPPGL_CALL glInvalidateBufferData(GLuint buffer) {
        glad_glInvalidateBufferData(buffer);
    }
    #undef glInvalidateFramebuffer
    void LWCPPGL_CALL glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments) {
        glad_glInvalidateFramebuffer(target, numAttachments, attachments);
    }
    #undef glInvalidateSubFramebuffer
    void LWCPPGL_CALL glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height) {
        glad_glInvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
    }
    #undef glMultiDrawArraysIndirect
    void LWCPPGL_CALL glMultiDrawArraysIndirect(GLenum mode, const void* indirect, GLsizei drawcount, GLsizei stride) {
        glad_glMultiDrawArraysIndirect(mode, indirect, drawcount, stride);
    }
    #undef glMultiDrawElementsIndirect
    void LWCPPGL_CALL glMultiDrawElementsIndirect(GLenum mode, GLenum type, const void* indirect, GLsizei drawcount, GLsizei stride) {
        glad_glMultiDrawElementsIndirect(mode, type, indirect, drawcount, stride);
    }
    #undef glGetProgramInterfaceiv
    void LWCPPGL_CALL glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint * params) {
        glad_glGetProgramInterfaceiv(program, programInterface, pname, params);
    }
    #undef glGetProgramResourceIndex
    GLuint LWCPPGL_CALL glGetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar * name) {
        return glad_glGetProgramResourceIndex(program, programInterface, name);
    }
    #undef glGetProgramResourceName
    void LWCPPGL_CALL glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name) {
        glad_glGetProgramResourceName(program, programInterface, index, bufSize, length, name);
    }
    #undef glGetProgramResourceiv
    void LWCPPGL_CALL glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei count, GLsizei * length, GLint * params) {
        glad_glGetProgramResourceiv(program, programInterface, index, propCount, props, count, length, params);
    }
    #undef glGetProgramResourceLocation
    GLint LWCPPGL_CALL glGetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar * name) {
        return glad_glGetProgramResourceLocation(program, programInterface, name);
    }
    #undef glGetProgramResourceLocationIndex
    GLint LWCPPGL_CALL glGetProgramResourceLocationIndex(GLuint program, GLenum programInterface, const GLchar * name) {
        return glad_glGetProgramResourceLocationIndex(program, programInterface, name);
    }
    #undef glShaderStorageBlockBinding
    void LWCPPGL_CALL glShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding) {
        glad_glShaderStorageBlockBinding(program, storageBlockIndex, storageBlockBinding);
    }
    #undef glTexBufferRange
    void LWCPPGL_CALL glTexBufferRange(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) {
        glad_glTexBufferRange(target, internalformat, buffer, offset, size);
    }
    #undef glTexStorage2DMultisample
    void LWCPPGL_CALL glTexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) {
        glad_glTexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
    }
    #undef glTexStorage3DMultisample
    void LWCPPGL_CALL glTexStorage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) {
        glad_glTexStorage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
    }
    #undef glTextureView
    void LWCPPGL_CALL glTextureView(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers) {
        glad_glTextureView(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
    }
    #undef glBindVertexBuffer
    void LWCPPGL_CALL glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) {
        glad_glBindVertexBuffer(bindingindex, buffer, offset, stride);
    }
    #undef glVertexAttribFormat
    void LWCPPGL_CALL glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) {
        glad_glVertexAttribFormat(attribindex, size, type, normalized, relativeoffset);
    }
    #undef glVertexAttribIFormat
    void LWCPPGL_CALL glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) {
        glad_glVertexAttribIFormat(attribindex, size, type, relativeoffset);
    }
    #undef glVertexAttribLFormat
    void LWCPPGL_CALL glVertexAttribLFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) {
        glad_glVertexAttribLFormat(attribindex, size, type, relativeoffset);
    }
    #undef glVertexAttribBinding
    void LWCPPGL_CALL glVertexAttribBinding(GLuint attribindex, GLuint bindingindex) {
        glad_glVertexAttribBinding(attribindex, bindingindex);
    }
    #undef glVertexBindingDivisor
    void LWCPPGL_CALL glVertexBindingDivisor(GLuint bindingindex, GLuint divisor) {
        glad_glVertexBindingDivisor(bindingindex, divisor);
    }
    #undef glDebugMessageControl
    void LWCPPGL_CALL glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled) {
        glad_glDebugMessageControl(source, type, severity, count, ids, enabled);
    }
    #undef glDebugMessageInsert
    void LWCPPGL_CALL glDebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf) {
        glad_glDebugMessageInsert(source, type, id, severity, length, buf);
    }
    #undef glDebugMessageCallback
    void LWCPPGL_CALL glDebugMessageCallback(GLDEBUGPROC callback, const void* userParam) {
        glad_glDebugMessageCallback(callback, userParam);
    }
    #undef glGetDebugMessageLog
    GLuint LWCPPGL_CALL glGetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog) {
        return glad_glGetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog);
    }
    #undef glPushDebugGroup
    void LWCPPGL_CALL glPushDebugGroup(GLenum source, GLuint id, GLsizei length, const GLchar * message) {
        glad_glPushDebugGroup(source, id, length, message);
    }
    #undef glPopDebugGroup
    void LWCPPGL_CALL glPopDebugGroup(void) {
        glad_glPopDebugGroup();
    }
    #undef glObjectLabel
    void LWCPPGL_CALL glObjectLabel(GLenum identifier, GLuint name, GLsizei length, const GLchar * label) {
        glad_glObjectLabel(identifier, name, length, label);
    }
    #undef glGetObjectLabel
    void LWCPPGL_CALL glGetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label) {
        glad_glGetObjectLabel(identifier, name, bufSize, length, label);
    }
    #undef glObjectPtrLabel
    void LWCPPGL_CALL glObjectPtrLabel(const void* ptr, GLsizei length, const GLchar * label) {
        glad_glObjectPtrLabel(ptr, length, label);
    }
    #undef glGetObjectPtrLabel
    void LWCPPGL_CALL glGetObjectPtrLabel(const void* ptr, GLsizei bufSize, GLsizei * length, GLchar * label) {
        glad_glGetObjectPtrLabel(ptr, bufSize, length, label);
    }
    #undef glBufferStorage
    void LWCPPGL_CALL glBufferStorage(GLenum target, GLsizeiptr size, const void* data, GLbitfield flags) {
        glad_glBufferStorage(target, size, data, flags);
    }
    #undef glClearTexImage
    void LWCPPGL_CALL glClearTexImage(GLuint texture, GLint level, GLenum format, GLenum type, const void* data) {
        glad_glClearTexImage(texture, level, format, type, data);
    }
    #undef glClearTexSubImage
    void LWCPPGL_CALL glClearTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void* data) {
        glad_glClearTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
    }
    #undef glBindBuffersBase
    void LWCPPGL_CALL glBindBuffersBase(GLenum target, GLuint first, GLsizei count, const GLuint * buffers) {
        glad_glBindBuffersBase(target, first, count, buffers);
    }
    #undef glBindBuffersRange
    void LWCPPGL_CALL glBindBuffersRange(GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes) {
        glad_glBindBuffersRange(target, first, count, buffers, offsets, sizes);
    }
    #undef glBindTextures
    void LWCPPGL_CALL glBindTextures(GLuint first, GLsizei count, const GLuint * textures) {
        glad_glBindTextures(first, count, textures);
    }
    #undef glBindSamplers
    void LWCPPGL_CALL glBindSamplers(GLuint first, GLsizei count, const GLuint * samplers) {
        glad_glBindSamplers(first, count, samplers);
    }
    #undef glBindImageTextures
    void LWCPPGL_CALL glBindImageTextures(GLuint first, GLsizei count, const GLuint * textures) {
        glad_glBindImageTextures(first, count, textures);
    }
    #undef glBindVertexBuffers
    void LWCPPGL_CALL glBindVertexBuffers(GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides) {
        glad_glBindVertexBuffers(first, count, buffers, offsets, strides);
    }
    #undef glClipControl
    void LWCPPGL_CALL glClipControl(GLenum origin, GLenum depth) {
        glad_glClipControl(origin, depth);
    }
    #undef glCreateTransformFeedbacks
    void LWCPPGL_CALL glCreateTransformFeedbacks(GLsizei n, GLuint * ids) {
        glad_glCreateTransformFeedbacks(n, ids);
    }
    #undef glTransformFeedbackBufferBase
    void LWCPPGL_CALL glTransformFeedbackBufferBase(GLuint xfb, GLuint index, GLuint buffer) {
        glad_glTransformFeedbackBufferBase(xfb, index, buffer);
    }
    #undef glTransformFeedbackBufferRange
    void LWCPPGL_CALL glTransformFeedbackBufferRange(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) {
        glad_glTransformFeedbackBufferRange(xfb, index, buffer, offset, size);
    }
    #undef glGetTransformFeedbackiv
    void LWCPPGL_CALL glGetTransformFeedbackiv(GLuint xfb, GLenum pname, GLint * param) {
        glad_glGetTransformFeedbackiv(xfb, pname, param);
    }
    #undef glGetTransformFeedbacki_v
    void LWCPPGL_CALL glGetTransformFeedbacki_v(GLuint xfb, GLenum pname, GLuint index, GLint * param) {
        glad_glGetTransformFeedbacki_v(xfb, pname, index, param);
    }
    #undef glGetTransformFeedbacki64_v
    void LWCPPGL_CALL glGetTransformFeedbacki64_v(GLuint xfb, GLenum pname, GLuint index, GLint64 * param) {
        glad_glGetTransformFeedbacki64_v(xfb, pname, index, param);
    }
    #undef glCreateBuffers
    void LWCPPGL_CALL glCreateBuffers(GLsizei n, GLuint * buffers) {
        glad_glCreateBuffers(n, buffers);
    }
    #undef glNamedBufferStorage
    void LWCPPGL_CALL glNamedBufferStorage(GLuint buffer, GLsizeiptr size, const void* data, GLbitfield flags) {
        glad_glNamedBufferStorage(buffer, size, data, flags);
    }
    #undef glNamedBufferData
    void LWCPPGL_CALL glNamedBufferData(GLuint buffer, GLsizeiptr size, const void* data, GLenum usage) {
        glad_glNamedBufferData(buffer, size, data, usage);
    }
    #undef glNamedBufferSubData
    void LWCPPGL_CALL glNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, const void* data) {
        glad_glNamedBufferSubData(buffer, offset, size, data);
    }
    #undef glCopyNamedBufferSubData
    void LWCPPGL_CALL glCopyNamedBufferSubData(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) {
        glad_glCopyNamedBufferSubData(readBuffer, writeBuffer, readOffset, writeOffset, size);
    }
    #undef glClearNamedBufferData
    void LWCPPGL_CALL glClearNamedBufferData(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void* data) {
        glad_glClearNamedBufferData(buffer, internalformat, format, type, data);
    }
    #undef glClearNamedBufferSubData
    void LWCPPGL_CALL glClearNamedBufferSubData(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void* data) {
        glad_glClearNamedBufferSubData(buffer, internalformat, offset, size, format, type, data);
    }
    #undef glMapNamedBuffer
    void * LWCPPGL_CALL glMapNamedBuffer(GLuint buffer, GLenum access) {
        return glad_glMapNamedBuffer(buffer, access);
    }
    #undef glMapNamedBufferRange
    void * LWCPPGL_CALL glMapNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access) {
        return glad_glMapNamedBufferRange(buffer, offset, length, access);
    }
    #undef glUnmapNamedBuffer
    GLboolean LWCPPGL_CALL glUnmapNamedBuffer(GLuint buffer) {
        return glad_glUnmapNamedBuffer(buffer);
    }
    #undef glFlushMappedNamedBufferRange
    void LWCPPGL_CALL glFlushMappedNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length) {
        glad_glFlushMappedNamedBufferRange(buffer, offset, length);
    }
    #undef glGetNamedBufferParameteriv
    void LWCPPGL_CALL glGetNamedBufferParameteriv(GLuint buffer, GLenum pname, GLint * params) {
        glad_glGetNamedBufferParameteriv(buffer, pname, params);
    }
    #undef glGetNamedBufferParameteri64v
    void LWCPPGL_CALL glGetNamedBufferParameteri64v(GLuint buffer, GLenum pname, GLint64 * params) {
        glad_glGetNamedBufferParameteri64v(buffer, pname, params);
    }
    #undef glGetNamedBufferPointerv
    void LWCPPGL_CALL glGetNamedBufferPointerv(GLuint buffer, GLenum pname, void* * params) {
        glad_glGetNamedBufferPointerv(buffer, pname, params);
    }
    #undef glGetNamedBufferSubData
    void LWCPPGL_CALL glGetNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, void* data) {
        glad_glGetNamedBufferSubData(buffer, offset, size, data);
    }
    #undef glCreateFramebuffers
    void LWCPPGL_CALL glCreateFramebuffers(GLsizei n, GLuint * framebuffers) {
        glad_glCreateFramebuffers(n, framebuffers);
    }
    #undef glNamedFramebufferRenderbuffer
    void LWCPPGL_CALL glNamedFramebufferRenderbuffer(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) {
        glad_glNamedFramebufferRenderbuffer(framebuffer, attachment, renderbuffertarget, renderbuffer);
    }
    #undef glNamedFramebufferParameteri
    void LWCPPGL_CALL glNamedFramebufferParameteri(GLuint framebuffer, GLenum pname, GLint param) {
        glad_glNamedFramebufferParameteri(framebuffer, pname, param);
    }
    #undef glNamedFramebufferTexture
    void LWCPPGL_CALL glNamedFramebufferTexture(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level) {
        glad_glNamedFramebufferTexture(framebuffer, attachment, texture, level);
    }
    #undef glNamedFramebufferTextureLayer
    void LWCPPGL_CALL glNamedFramebufferTextureLayer(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer) {
        glad_glNamedFramebufferTextureLayer(framebuffer, attachment, texture, level, layer);
    }
    #undef glNamedFramebufferDrawBuffer
    void LWCPPGL_CALL glNamedFramebufferDrawBuffer(GLuint framebuffer, GLenum buf) {
        glad_glNamedFramebufferDrawBuffer(framebuffer, buf);
    }
    #undef glNamedFramebufferDrawBuffers
    void LWCPPGL_CALL glNamedFramebufferDrawBuffers(GLuint framebuffer, GLsizei n, const GLenum * bufs) {
        glad_glNamedFramebufferDrawBuffers(framebuffer, n, bufs);
    }
    #undef glNamedFramebufferReadBuffer
    void LWCPPGL_CALL glNamedFramebufferReadBuffer(GLuint framebuffer, GLenum src) {
        glad_glNamedFramebufferReadBuffer(framebuffer, src);
    }
    #undef glInvalidateNamedFramebufferData
    void LWCPPGL_CALL glInvalidateNamedFramebufferData(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments) {
        glad_glInvalidateNamedFramebufferData(framebuffer, numAttachments, attachments);
    }
    #undef glInvalidateNamedFramebufferSubData
    void LWCPPGL_CALL glInvalidateNamedFramebufferSubData(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height) {
        glad_glInvalidateNamedFramebufferSubData(framebuffer, numAttachments, attachments, x, y, width, height);
    }
    #undef glClearNamedFramebufferiv
    void LWCPPGL_CALL glClearNamedFramebufferiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint * value) {
        glad_glClearNamedFramebufferiv(framebuffer, buffer, drawbuffer, value);
    }
    #undef glClearNamedFramebufferuiv
    void LWCPPGL_CALL glClearNamedFramebufferuiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint * value) {
        glad_glClearNamedFramebufferuiv(framebuffer, buffer, drawbuffer, value);
    }
    #undef glClearNamedFramebufferfv
    void LWCPPGL_CALL glClearNamedFramebufferfv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat * value) {
        glad_glClearNamedFramebufferfv(framebuffer, buffer, drawbuffer, value);
    }
    #undef glClearNamedFramebufferfi
    void LWCPPGL_CALL glClearNamedFramebufferfi(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil) {
        glad_glClearNamedFramebufferfi(framebuffer, buffer, drawbuffer, depth, stencil);
    }
    #undef glBlitNamedFramebuffer
    void LWCPPGL_CALL glBlitNamedFramebuffer(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) {
        glad_glBlitNamedFramebuffer(readFramebuffer, drawFramebuffer, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
    }
    #undef glCheckNamedFramebufferStatus
    GLenum LWCPPGL_CALL glCheckNamedFramebufferStatus(GLuint framebuffer, GLenum target) {
        return glad_glCheckNamedFramebufferStatus(framebuffer, target);
    }
    #undef glGetNamedFramebufferParameteriv
    void LWCPPGL_CALL glGetNamedFramebufferParameteriv(GLuint framebuffer, GLenum pname, GLint * param) {
        glad_glGetNamedFramebufferParameteriv(framebuffer, pname, param);
    }
    #undef glGetNamedFramebufferAttachmentParameteriv
    void LWCPPGL_CALL glGetNamedFramebufferAttachmentParameteriv(GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params) {
        glad_glGetNamedFramebufferAttachmentParameteriv(framebuffer, attachment, pname, params);
    }
    #undef glCreateRenderbuffers
    void LWCPPGL_CALL glCreateRenderbuffers(GLsizei n, GLuint * renderbuffers) {
        glad_glCreateRenderbuffers(n, renderbuffers);
    }
    #undef glNamedRenderbufferStorage
    void LWCPPGL_CALL glNamedRenderbufferStorage(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height) {
        glad_glNamedRenderbufferStorage(renderbuffer, internalformat, width, height);
    }
    #undef glNamedRenderbufferStorageMultisample
    void LWCPPGL_CALL glNamedRenderbufferStorageMultisample(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) {
        glad_glNamedRenderbufferStorageMultisample(renderbuffer, samples, internalformat, width, height);
    }
    #undef glGetNamedRenderbufferParameteriv
    void LWCPPGL_CALL glGetNamedRenderbufferParameteriv(GLuint renderbuffer, GLenum pname, GLint * params) {
        glad_glGetNamedRenderbufferParameteriv(renderbuffer, pname, params);
    }
    #undef glCreateTextures
    void LWCPPGL_CALL glCreateTextures(GLenum target, GLsizei n, GLuint * textures) {
        glad_glCreateTextures(target, n, textures);
    }
    #undef glTextureBuffer
    void LWCPPGL_CALL glTextureBuffer(GLuint texture, GLenum internalformat, GLuint buffer) {
        glad_glTextureBuffer(texture, internalformat, buffer);
    }
    #undef glTextureBufferRange
    void LWCPPGL_CALL glTextureBufferRange(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) {
        glad_glTextureBufferRange(texture, internalformat, buffer, offset, size);
    }
    #undef glTextureStorage1D
    void LWCPPGL_CALL glTextureStorage1D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width) {
        glad_glTextureStorage1D(texture, levels, internalformat, width);
    }
    #undef glTextureStorage2D
    void LWCPPGL_CALL glTextureStorage2D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) {
        glad_glTextureStorage2D(texture, levels, internalformat, width, height);
    }
    #undef glTextureStorage3D
    void LWCPPGL_CALL glTextureStorage3D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) {
        glad_glTextureStorage3D(texture, levels, internalformat, width, height, depth);
    }
    #undef glTextureStorage2DMultisample
    void LWCPPGL_CALL glTextureStorage2DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) {
        glad_glTextureStorage2DMultisample(texture, samples, internalformat, width, height, fixedsamplelocations);
    }
    #undef glTextureStorage3DMultisample
    void LWCPPGL_CALL glTextureStorage3DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) {
        glad_glTextureStorage3DMultisample(texture, samples, internalformat, width, height, depth, fixedsamplelocations);
    }
    #undef glTextureSubImage1D
    void LWCPPGL_CALL glTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void* pixels) {
        glad_glTextureSubImage1D(texture, level, xoffset, width, format, type, pixels);
    }
    #undef glTextureSubImage2D
    void LWCPPGL_CALL glTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* pixels) {
        glad_glTextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, type, pixels);
    }
    #undef glTextureSubImage3D
    void LWCPPGL_CALL glTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void* pixels) {
        glad_glTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
    }
    #undef glCompressedTextureSubImage1D
    void LWCPPGL_CALL glCompressedTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void* data) {
        glad_glCompressedTextureSubImage1D(texture, level, xoffset, width, format, imageSize, data);
    }
    #undef glCompressedTextureSubImage2D
    void LWCPPGL_CALL glCompressedTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void* data) {
        glad_glCompressedTextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, imageSize, data);
    }
    #undef glCompressedTextureSubImage3D
    void LWCPPGL_CALL glCompressedTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void* data) {
        glad_glCompressedTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
    }
    #undef glCopyTextureSubImage1D
    void LWCPPGL_CALL glCopyTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) {
        glad_glCopyTextureSubImage1D(texture, level, xoffset, x, y, width);
    }
    #undef glCopyTextureSubImage2D
    void LWCPPGL_CALL glCopyTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
        glad_glCopyTextureSubImage2D(texture, level, xoffset, yoffset, x, y, width, height);
    }
    #undef glCopyTextureSubImage3D
    void LWCPPGL_CALL glCopyTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
        glad_glCopyTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, x, y, width, height);
    }
    #undef glTextureParameterf
    void LWCPPGL_CALL glTextureParameterf(GLuint texture, GLenum pname, GLfloat param) {
        glad_glTextureParameterf(texture, pname, param);
    }
    #undef glTextureParameterfv
    void LWCPPGL_CALL glTextureParameterfv(GLuint texture, GLenum pname, const GLfloat * param) {
        glad_glTextureParameterfv(texture, pname, param);
    }
    #undef glTextureParameteri
    void LWCPPGL_CALL glTextureParameteri(GLuint texture, GLenum pname, GLint param) {
        glad_glTextureParameteri(texture, pname, param);
    }
    #undef glTextureParameterIiv
    void LWCPPGL_CALL glTextureParameterIiv(GLuint texture, GLenum pname, const GLint * params) {
        glad_glTextureParameterIiv(texture, pname, params);
    }
    #undef glTextureParameterIuiv
    void LWCPPGL_CALL glTextureParameterIuiv(GLuint texture, GLenum pname, const GLuint * params) {
        glad_glTextureParameterIuiv(texture, pname, params);
    }
    #undef glTextureParameteriv
    void LWCPPGL_CALL glTextureParameteriv(GLuint texture, GLenum pname, const GLint * param) {
        glad_glTextureParameteriv(texture, pname, param);
    }
    #undef glGenerateTextureMipmap
    void LWCPPGL_CALL glGenerateTextureMipmap(GLuint texture) {
        glad_glGenerateTextureMipmap(texture);
    }
    #undef glBindTextureUnit
    void LWCPPGL_CALL glBindTextureUnit(GLuint unit, GLuint texture) {
        glad_glBindTextureUnit(unit, texture);
    }
    #undef glGetTextureImage
    void LWCPPGL_CALL glGetTextureImage(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void* pixels) {
        glad_glGetTextureImage(texture, level, format, type, bufSize, pixels);
    }
    #undef glGetCompressedTextureImage
    void LWCPPGL_CALL glGetCompressedTextureImage(GLuint texture, GLint level, GLsizei bufSize, void* pixels) {
        glad_glGetCompressedTextureImage(texture, level, bufSize, pixels);
    }
    #undef glGetTextureLevelParameterfv
    void LWCPPGL_CALL glGetTextureLevelParameterfv(GLuint texture, GLint level, GLenum pname, GLfloat * params) {
        glad_glGetTextureLevelParameterfv(texture, level, pname, params);
    }
    #undef glGetTextureLevelParameteriv
    void LWCPPGL_CALL glGetTextureLevelParameteriv(GLuint texture, GLint level, GLenum pname, GLint * params) {
        glad_glGetTextureLevelParameteriv(texture, level, pname, params);
    }
    #undef glGetTextureParameterfv
    void LWCPPGL_CALL glGetTextureParameterfv(GLuint texture, GLenum pname, GLfloat * params) {
        glad_glGetTextureParameterfv(texture, pname, params);
    }
    #undef glGetTextureParameterIiv
    void LWCPPGL_CALL glGetTextureParameterIiv(GLuint texture, GLenum pname, GLint * params) {
        glad_glGetTextureParameterIiv(texture, pname, params);
    }
    #undef glGetTextureParameterIuiv
    void LWCPPGL_CALL glGetTextureParameterIuiv(GLuint texture, GLenum pname, GLuint * params) {
        glad_glGetTextureParameterIuiv(texture, pname, params);
    }
    #undef glGetTextureParameteriv
    void LWCPPGL_CALL glGetTextureParameteriv(GLuint texture, GLenum pname, GLint * params) {
        glad_glGetTextureParameteriv(texture, pname, params);
    }
    #undef glCreateVertexArrays
    void LWCPPGL_CALL glCreateVertexArrays(GLsizei n, GLuint * arrays) {
        glad_glCreateVertexArrays(n, arrays);
    }
    #undef glDisableVertexArrayAttrib
    void LWCPPGL_CALL glDisableVertexArrayAttrib(GLuint vaobj, GLuint index) {
        glad_glDisableVertexArrayAttrib(vaobj, index);
    }
    #undef glEnableVertexArrayAttrib
    void LWCPPGL_CALL glEnableVertexArrayAttrib(GLuint vaobj, GLuint index) {
        glad_glEnableVertexArrayAttrib(vaobj, index);
    }
    #undef glVertexArrayElementBuffer
    void LWCPPGL_CALL glVertexArrayElementBuffer(GLuint vaobj, GLuint buffer) {
        glad_glVertexArrayElementBuffer(vaobj, buffer);
    }
    #undef glVertexArrayVertexBuffer
    void LWCPPGL_CALL glVertexArrayVertexBuffer(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) {
        glad_glVertexArrayVertexBuffer(vaobj, bindingindex, buffer, offset, stride);
    }
    #undef glVertexArrayVertexBuffers
    void LWCPPGL_CALL glVertexArrayVertexBuffers(GLuint vaobj, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides) {
        glad_glVertexArrayVertexBuffers(vaobj, first, count, buffers, offsets, strides);
    }
    #undef glVertexArrayAttribBinding
    void LWCPPGL_CALL glVertexArrayAttribBinding(GLuint vaobj, GLuint attribindex, GLuint bindingindex) {
        glad_glVertexArrayAttribBinding(vaobj, attribindex, bindingindex);
    }
    #undef glVertexArrayAttribFormat
    void LWCPPGL_CALL glVertexArrayAttribFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) {
        glad_glVertexArrayAttribFormat(vaobj, attribindex, size, type, normalized, relativeoffset);
    }
    #undef glVertexArrayAttribIFormat
    void LWCPPGL_CALL glVertexArrayAttribIFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) {
        glad_glVertexArrayAttribIFormat(vaobj, attribindex, size, type, relativeoffset);
    }
    #undef glVertexArrayAttribLFormat
    void LWCPPGL_CALL glVertexArrayAttribLFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) {
        glad_glVertexArrayAttribLFormat(vaobj, attribindex, size, type, relativeoffset);
    }
    #undef glVertexArrayBindingDivisor
    void LWCPPGL_CALL glVertexArrayBindingDivisor(GLuint vaobj, GLuint bindingindex, GLuint divisor) {
        glad_glVertexArrayBindingDivisor(vaobj, bindingindex, divisor);
    }
    #undef glGetVertexArrayiv
    void LWCPPGL_CALL glGetVertexArrayiv(GLuint vaobj, GLenum pname, GLint * param) {
        glad_glGetVertexArrayiv(vaobj, pname, param);
    }
    #undef glGetVertexArrayIndexediv
    void LWCPPGL_CALL glGetVertexArrayIndexediv(GLuint vaobj, GLuint index, GLenum pname, GLint * param) {
        glad_glGetVertexArrayIndexediv(vaobj, index, pname, param);
    }
    #undef glGetVertexArrayIndexed64iv
    void LWCPPGL_CALL glGetVertexArrayIndexed64iv(GLuint vaobj, GLuint index, GLenum pname, GLint64 * param) {
        glad_glGetVertexArrayIndexed64iv(vaobj, index, pname, param);
    }
    #undef glCreateSamplers
    void LWCPPGL_CALL glCreateSamplers(GLsizei n, GLuint * samplers) {
        glad_glCreateSamplers(n, samplers);
    }
    #undef glCreateProgramPipelines
    void LWCPPGL_CALL glCreateProgramPipelines(GLsizei n, GLuint * pipelines) {
        glad_glCreateProgramPipelines(n, pipelines);
    }
    #undef glCreateQueries
    void LWCPPGL_CALL glCreateQueries(GLenum target, GLsizei n, GLuint * ids) {
        glad_glCreateQueries(target, n, ids);
    }
    #undef glGetQueryBufferObjecti64v
    void LWCPPGL_CALL glGetQueryBufferObjecti64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset) {
        glad_glGetQueryBufferObjecti64v(id, buffer, pname, offset);
    }
    #undef glGetQueryBufferObjectiv
    void LWCPPGL_CALL glGetQueryBufferObjectiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset) {
        glad_glGetQueryBufferObjectiv(id, buffer, pname, offset);
    }
    #undef glGetQueryBufferObjectui64v
    void LWCPPGL_CALL glGetQueryBufferObjectui64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset) {
        glad_glGetQueryBufferObjectui64v(id, buffer, pname, offset);
    }
    #undef glGetQueryBufferObjectuiv
    void LWCPPGL_CALL glGetQueryBufferObjectuiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset) {
        glad_glGetQueryBufferObjectuiv(id, buffer, pname, offset);
    }
    #undef glMemoryBarrierByRegion
    void LWCPPGL_CALL glMemoryBarrierByRegion(GLbitfield barriers) {
        glad_glMemoryBarrierByRegion(barriers);
    }
    #undef glGetTextureSubImage
    void LWCPPGL_CALL glGetTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void* pixels) {
        glad_glGetTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, bufSize, pixels);
    }
    #undef glGetCompressedTextureSubImage
    void LWCPPGL_CALL glGetCompressedTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void* pixels) {
        glad_glGetCompressedTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, bufSize, pixels);
    }
    #undef glGetGraphicsResetStatus
    GLenum LWCPPGL_CALL glGetGraphicsResetStatus(void) {
        return glad_glGetGraphicsResetStatus();
    }
    #undef glGetnCompressedTexImage
    void LWCPPGL_CALL glGetnCompressedTexImage(GLenum target, GLint lod, GLsizei bufSize, void* pixels) {
        glad_glGetnCompressedTexImage(target, lod, bufSize, pixels);
    }
    #undef glGetnTexImage
    void LWCPPGL_CALL glGetnTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void* pixels) {
        glad_glGetnTexImage(target, level, format, type, bufSize, pixels);
    }
    #undef glGetnUniformdv
    void LWCPPGL_CALL glGetnUniformdv(GLuint program, GLint location, GLsizei bufSize, GLdouble * params) {
        glad_glGetnUniformdv(program, location, bufSize, params);
    }
    #undef glGetnUniformfv
    void LWCPPGL_CALL glGetnUniformfv(GLuint program, GLint location, GLsizei bufSize, GLfloat * params) {
        glad_glGetnUniformfv(program, location, bufSize, params);
    }
    #undef glGetnUniformiv
    void LWCPPGL_CALL glGetnUniformiv(GLuint program, GLint location, GLsizei bufSize, GLint * params) {
        glad_glGetnUniformiv(program, location, bufSize, params);
    }
    #undef glGetnUniformuiv
    void LWCPPGL_CALL glGetnUniformuiv(GLuint program, GLint location, GLsizei bufSize, GLuint * params) {
        glad_glGetnUniformuiv(program, location, bufSize, params);
    }
    #undef glReadnPixels
    void LWCPPGL_CALL glReadnPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void* data) {
        glad_glReadnPixels(x, y, width, height, format, type, bufSize, data);
    }
    #undef glGetnMapdv
    void LWCPPGL_CALL glGetnMapdv(GLenum target, GLenum query, GLsizei bufSize, GLdouble * v) {
        glad_glGetnMapdv(target, query, bufSize, v);
    }
    #undef glGetnMapfv
    void LWCPPGL_CALL glGetnMapfv(GLenum target, GLenum query, GLsizei bufSize, GLfloat * v) {
        glad_glGetnMapfv(target, query, bufSize, v);
    }
    #undef glGetnMapiv
    void LWCPPGL_CALL glGetnMapiv(GLenum target, GLenum query, GLsizei bufSize, GLint * v) {
        glad_glGetnMapiv(target, query, bufSize, v);
    }
    #undef glGetnPixelMapfv
    void LWCPPGL_CALL glGetnPixelMapfv(GLenum map, GLsizei bufSize, GLfloat * values) {
        glad_glGetnPixelMapfv(map, bufSize, values);
    }
    #undef glGetnPixelMapuiv
    void LWCPPGL_CALL glGetnPixelMapuiv(GLenum map, GLsizei bufSize, GLuint * values) {
        glad_glGetnPixelMapuiv(map, bufSize, values);
    }
    #undef glGetnPixelMapusv
    void LWCPPGL_CALL glGetnPixelMapusv(GLenum map, GLsizei bufSize, GLushort * values) {
        glad_glGetnPixelMapusv(map, bufSize, values);
    }
    #undef glGetnPolygonStipple
    void LWCPPGL_CALL glGetnPolygonStipple(GLsizei bufSize, GLubyte * pattern) {
        glad_glGetnPolygonStipple(bufSize, pattern);
    }
    #undef glGetnColorTable
    void LWCPPGL_CALL glGetnColorTable(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void* table) {
        glad_glGetnColorTable(target, format, type, bufSize, table);
    }
    #undef glGetnConvolutionFilter
    void LWCPPGL_CALL glGetnConvolutionFilter(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void* image) {
        glad_glGetnConvolutionFilter(target, format, type, bufSize, image);
    }
    #undef glGetnSeparableFilter
    void LWCPPGL_CALL glGetnSeparableFilter(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void* row, GLsizei columnBufSize, void* column, void* span) {
        glad_glGetnSeparableFilter(target, format, type, rowBufSize, row, columnBufSize, column, span);
    }
    #undef glGetnHistogram
    void LWCPPGL_CALL glGetnHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void* values) {
        glad_glGetnHistogram(target, reset, format, type, bufSize, values);
    }
    #undef glGetnMinmax
    void LWCPPGL_CALL glGetnMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void* values) {
        glad_glGetnMinmax(target, reset, format, type, bufSize, values);
    }
    #undef glTextureBarrier
    void LWCPPGL_CALL glTextureBarrier(void) {
        glad_glTextureBarrier();
    }
    #undef glSpecializeShader
    void LWCPPGL_CALL glSpecializeShader(GLuint shader, const GLchar * pEntryPoint, GLuint numSpecializationConstants, const GLuint * pConstantIndex, const GLuint * pConstantValue) {
        glad_glSpecializeShader(shader, pEntryPoint, numSpecializationConstants, pConstantIndex, pConstantValue);
    }
    #undef glMultiDrawArraysIndirectCount
    void LWCPPGL_CALL glMultiDrawArraysIndirectCount(GLenum mode, const void* indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride) {
        glad_glMultiDrawArraysIndirectCount(mode, indirect, drawcount, maxdrawcount, stride);
    }
    #undef glMultiDrawElementsIndirectCount
    void LWCPPGL_CALL glMultiDrawElementsIndirectCount(GLenum mode, GLenum type, const void* indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride) {
        glad_glMultiDrawElementsIndirectCount(mode, type, indirect, drawcount, maxdrawcount, stride);
    }
    #undef glPolygonOffsetClamp
    void LWCPPGL_CALL glPolygonOffsetClamp(GLfloat factor, GLfloat units, GLfloat clamp) {
        glad_glPolygonOffsetClamp(factor, units, clamp);
    }
}//namespace gl