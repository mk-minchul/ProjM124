#############################################################################
# Makefile for building: libQtTest.so
# Generated by qmake (2.01a) (Qt 4.8.6) on: Fri Sep 9 22:19:39 2016
# Project:  QtTest.pro
# Template: lib
# Command: /usr/lib/arm-linux-gnueabihf/qt4/bin/qmake -o Makefile QtTest.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_WEBKIT -DSIP_PROTECTED_IS_PUBLIC -Dprotected=public -DQT_NO_DEBUG -DQT_PLUGIN -DQT_TESTLIB_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT -fPIC $(DEFINES)
CXXFLAGS      = -pipe -fno-exceptions -O2 -Wall -W -D_REENTRANT -fPIC $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtTest -I/usr/include/qt4 -I. -I/usr/include/python2.7 -I.
LINK          = g++
LFLAGS        = -Wl,--version-script=QtTest.exp -Wl,-O1 -shared
LIBS          = $(SUBLIBS)  -L/usr/lib/arm-linux-gnueabihf -lQtTest -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/lib/arm-linux-gnueabihf/qt4/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = sipQtTestcmodule.cpp \
		sipQtTestQTest.cpp 
OBJECTS       = sipQtTestcmodule.o \
		sipQtTestQTest.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_phonon.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/dll.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		QtTest.pro
QMAKE_TARGET  = QtTest
DESTDIR       = 
TARGET        = libQtTest.so
TARGETD       = libQtTest.so

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile  $(TARGET)

$(TARGET):  $(OBJECTS) $(SUBLIBS) $(OBJCOMP)  
	-$(DEL_FILE) $(TARGET)
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(LIBS) $(OBJCOMP)
	$(COPY_FILE) $(TARGET) QtTest.so



Makefile: QtTest.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_phonon.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/dll.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/arm-linux-gnueabihf/libQtTest.prl \
		/usr/lib/arm-linux-gnueabihf/libQtGui.prl \
		/usr/lib/arm-linux-gnueabihf/libQtCore.prl
	$(QMAKE) -o Makefile QtTest.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_phonon.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/shared.prf:
/usr/share/qt4/mkspecs/features/dll.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/arm-linux-gnueabihf/libQtTest.prl:
/usr/lib/arm-linux-gnueabihf/libQtGui.prl:
/usr/lib/arm-linux-gnueabihf/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile QtTest.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/QtTest1.0.0 || $(MKDIR) .tmp/QtTest1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/QtTest1.0.0/ && $(COPY_FILE) --parents sipAPIQtTest.h .tmp/QtTest1.0.0/ && $(COPY_FILE) --parents sipQtTestcmodule.cpp sipQtTestQTest.cpp .tmp/QtTest1.0.0/ && (cd `dirname .tmp/QtTest1.0.0` && $(TAR) QtTest1.0.0.tar QtTest1.0.0 && $(COMPRESS) QtTest1.0.0.tar) && $(MOVE) `dirname .tmp/QtTest1.0.0`/QtTest1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/QtTest1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all:
compiler_moc_header_clean:
compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: 

####### Compile

sipQtTestcmodule.o: sipQtTestcmodule.cpp sipAPIQtTest.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o sipQtTestcmodule.o sipQtTestcmodule.cpp

sipQtTestQTest.o: sipQtTestQTest.cpp sipAPIQtTest.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o sipQtTestQTest.o sipQtTestQTest.cpp

####### Install

install_target: first FORCE
	@$(CHK_DIR_EXISTS) $(INSTALL_ROOT)/usr/lib/python2.7/dist-packages/PyQt4/ || $(MKDIR) $(INSTALL_ROOT)/usr/lib/python2.7/dist-packages/PyQt4/ 
	-$(INSTALL_FILE) /home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtTest/QtTest.so $(INSTALL_ROOT)/usr/lib/python2.7/dist-packages/PyQt4/


uninstall_target:  FORCE
	-$(DEL_FILE) -r $(INSTALL_ROOT)/usr/lib/python2.7/dist-packages/PyQt4/QtTest.so
	-$(DEL_DIR) $(INSTALL_ROOT)/usr/lib/python2.7/dist-packages/PyQt4/ 


install_sip: first FORCE
	@$(CHK_DIR_EXISTS) $(INSTALL_ROOT)/usr/share/sip/PyQt4/QtTest/ || $(MKDIR) $(INSTALL_ROOT)/usr/share/sip/PyQt4/QtTest/ 
	-$(INSTALL_FILE) /home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtTest/QtTestmod.sip $(INSTALL_ROOT)/usr/share/sip/PyQt4/QtTest/
	-$(INSTALL_FILE) /home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtTest/qtestkeyboard.sip $(INSTALL_ROOT)/usr/share/sip/PyQt4/QtTest/
	-$(INSTALL_FILE) /home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtTest/qtestsystem.sip $(INSTALL_ROOT)/usr/share/sip/PyQt4/QtTest/
	-$(INSTALL_FILE) /home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtTest/qtestmouse.sip $(INSTALL_ROOT)/usr/share/sip/PyQt4/QtTest/
	-$(INSTALL_FILE) /home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtTest/qtestcase.sip $(INSTALL_ROOT)/usr/share/sip/PyQt4/QtTest/


uninstall_sip:  FORCE
	-$(DEL_FILE) -r $(INSTALL_ROOT)/usr/share/sip/PyQt4/QtTest/QtTestmod.sip 
	 -$(DEL_FILE) -r $(INSTALL_ROOT)/usr/share/sip/PyQt4/QtTest/qtestkeyboard.sip 
	 -$(DEL_FILE) -r $(INSTALL_ROOT)/usr/share/sip/PyQt4/QtTest/qtestsystem.sip 
	 -$(DEL_FILE) -r $(INSTALL_ROOT)/usr/share/sip/PyQt4/QtTest/qtestmouse.sip 
	 -$(DEL_FILE) -r $(INSTALL_ROOT)/usr/share/sip/PyQt4/QtTest/qtestcase.sip
	-$(DEL_DIR) $(INSTALL_ROOT)/usr/share/sip/PyQt4/QtTest/ 


install:  install_target install_sip  FORCE

uninstall: uninstall_target uninstall_sip   FORCE

FORCE:

