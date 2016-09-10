TEMPLATE = lib
CONFIG += warn_on plugin
QT += phonon
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = phonon.pyd
    target.files = phonon.pyd
    LIBS += -L/usr/lib -lpython27
} else {
    PY_MODULE = phonon.so
    target.files = phonon.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python2.7/dist-packages/PyQt4
INSTALLS += target
sip.path = /usr/share/sip/PyQt4/phonon
sip.files = ../sip/phonon/phononmod.sip ../sip/phonon/effectwidget.sip ../sip/phonon/abstractvideooutput.sip ../sip/phonon/phononnamespace.sip ../sip/phonon/audiooutput.sip ../sip/phonon/medianode.sip ../sip/phonon/abstractaudiooutput.sip ../sip/phonon/videowidget.sip ../sip/phonon/mediasource.sip ../sip/phonon/volumeslider.sip ../sip/phonon/seekslider.sip ../sip/phonon/path.sip ../sip/phonon/effect.sip ../sip/phonon/videoplayer.sip ../sip/phonon/effectparameter.sip ../sip/phonon/mediacontroller.sip ../sip/phonon/objectdescription.sip ../sip/phonon/mediaobject.sip ../sip/phonon/backendcapabilities.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=phonon.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python2.7

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = phonon
HEADERS = sipAPIphonon.h
SOURCES = sipphononPhononSubtitleDescription.cpp sipphononQList0100PhononAudioCaptureDevice.cpp sipphononQMultiMap0100QString0100QString.cpp sipphononcmodule.cpp sipphononPhononVolumeSlider.cpp sipphononQList0100PhononAudioChannelDescription.cpp sipphononPhononMediaSource.cpp sipphononPhononEffectDescriptionModel.cpp sipphononPhononAudioOutput.cpp sipphononPhonon.cpp sipphononPhononMediaControllerFeatures.cpp sipphononQList0100PhononPath.cpp sipphononPhononVideoPlayer.cpp sipphononPhononEffectParameterHints.cpp sipphononPhononMediaObject.cpp sipphononPhononSeekSlider.cpp sipphononQList0100PhononAudioOutputDevice.cpp sipphononPhononAudioOutputDeviceModel.cpp sipphononQHash0100QByteArray0100QVariant.cpp sipphononQList0100PhononEffectDescription.cpp sipphononPhononBackendCapabilitiesNotifier.cpp sipphononPhononAbstractVideoOutput.cpp sipphononPhononAudioOutputDevice.cpp sipphononPhononAudioChannelDescription.cpp sipphononPhononMediaController.cpp sipphononQList0101PhononEffect.cpp sipphononPhononEffectWidget.cpp sipphononPhononEffectParameter.cpp sipphononQList0100PhononEffectParameter.cpp sipphononPhononMediaNode.cpp sipphononPhononEffect.cpp sipphononPhononBackendCapabilities.cpp sipphononQList0100PhononSubtitleDescription.cpp sipphononPhononEffectDescription.cpp sipphononPhononAbstractAudioOutput.cpp sipphononPhononPath.cpp sipphononPhononAudioCaptureDevice.cpp sipphononPhononVideoWidget.cpp sipphononQList0100PhononMediaSource.cpp
