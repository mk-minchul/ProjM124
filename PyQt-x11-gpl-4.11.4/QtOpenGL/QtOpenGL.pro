TEMPLATE = lib
CONFIG += warn_on plugin
QT += opengl
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtOpenGL.pyd
    target.files = QtOpenGL.pyd
    LIBS += -L/usr/lib -lpython27
} else {
    PY_MODULE = QtOpenGL.so
    target.files = QtOpenGL.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python2.7/dist-packages/PyQt4
INSTALLS += target
sip.path = /usr/share/sip/PyQt4/QtOpenGL
sip.files = ../sip/QtOpenGL/qglbuffer.sip ../sip/QtOpenGL/qglframebufferobject.sip ../sip/QtOpenGL/qglpixelbuffer.sip ../sip/QtOpenGL/qgl.sip ../sip/QtOpenGL/qglshaderprogram.sip ../sip/QtOpenGL/qglcolormap.sip ../sip/QtOpenGL/QtOpenGLmod.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtOpenGL.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python2.7
INCLUDEPATH += ../qpy/QtOpenGL

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = QtOpenGL
HEADERS = sipAPIQtOpenGL.h ../qpy/QtOpenGL/qpyopengl_api.h
SOURCES = sipQtOpenGLcmodule.cpp sipQtOpenGLQGLFramebufferObjectFormat.cpp sipQtOpenGLQGLFormat.cpp sipQtOpenGLQGLWidget.cpp sipQtOpenGLQGLBuffer.cpp sipQtOpenGLQGLFramebufferObject.cpp sipQtOpenGLQGLContextBindOptions.cpp sipQtOpenGLQGLShaderShaderType.cpp sipQtOpenGLQGLShader.cpp sipQtOpenGLQGLContext.cpp sipQtOpenGLQGL.cpp sipQtOpenGLQGLFormatOpenGLVersionFlags.cpp sipQtOpenGLQGLPixelBuffer.cpp sipQtOpenGLQGLFormatOptions.cpp sipQtOpenGLQGLShaderProgram.cpp sipQtOpenGLQList0101QGLShader.cpp sipQtOpenGLQGLColormap.cpp ../qpy/QtOpenGL/qpyopengl_attribute_array.cpp ../qpy/QtOpenGL/qpyopengl_uniform_value_array.cpp
