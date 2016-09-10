TEMPLATE = subdirs
CONFIG += ordered nostrip
SUBDIRS = QtCore QtGui QtHelp QtNetwork QtDeclarative QtScript QtScriptTools QtXml QtOpenGL QtSql QtSvg QtTest QtWebKit QtXmlPatterns phonon QtDesigner QtDBus Qt pylupdate pyrcc designer

init_py.files = /home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/__init__.py
init_py.path = /usr/lib/python2.7/dist-packages/PyQt4
INSTALLS += init_py

uic_package.files = /home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/pyuic/uic
uic_package.path = /usr/lib/python2.7/dist-packages/PyQt4
INSTALLS += uic_package

pyuic4.files = pyuic4
pyuic4.path = /usr/bin
INSTALLS += pyuic4
