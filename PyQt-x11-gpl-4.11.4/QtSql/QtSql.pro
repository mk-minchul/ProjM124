TEMPLATE = lib
CONFIG += warn_on plugin
QT += sql
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtSql.pyd
    target.files = QtSql.pyd
    LIBS += -L/usr/lib -lpython27
} else {
    PY_MODULE = QtSql.so
    target.files = QtSql.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python2.7/dist-packages/PyQt4
INSTALLS += target
sip.path = /usr/share/sip/PyQt4/QtSql
sip.files = ../sip/QtSql/qsqlquery.sip ../sip/QtSql/QtSqlmod.sip ../sip/QtSql/qsqldatabase.sip ../sip/QtSql/qsqlindex.sip ../sip/QtSql/qsql.sip ../sip/QtSql/qsqltablemodel.sip ../sip/QtSql/qsqlrelationaldelegate.sip ../sip/QtSql/qsqlresult.sip ../sip/QtSql/qsqlquerymodel.sip ../sip/QtSql/qsqlrelationaltablemodel.sip ../sip/QtSql/qsqlfield.sip ../sip/QtSql/qsqlrecord.sip ../sip/QtSql/qsqldriver.sip ../sip/QtSql/qsqlerror.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtSql.exp
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

TARGET = QtSql
HEADERS = sipAPIQtSql.h
SOURCES = sipQtSqlQSqlRelation.cpp sipQtSqlQSqlError.cpp sipQtSqlcmodule.cpp sipQtSqlQSqlField.cpp sipQtSqlQSqlResult.cpp sipQtSqlQSqlQueryModel.cpp sipQtSqlQSqlRelationalTableModel.cpp sipQtSqlQSqlDriver.cpp sipQtSqlQSqlRecord.cpp sipQtSqlQSqlParamType.cpp sipQtSqlQSqlDatabase.cpp sipQtSqlQVector0100QVariant.cpp sipQtSqlQSqlTableModel.cpp sipQtSqlQSqlRelationalDelegate.cpp sipQtSqlQSqlDriverCreatorBase.cpp sipQtSqlQSql.cpp sipQtSqlQSqlQuery.cpp sipQtSqlQSqlIndex.cpp
