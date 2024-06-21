#-------------------------------------------------
#
# Project created by QtCreator 2020-12-23T11:16:11
#
#-------------------------------------------------

QT       += core gui
QT       += charts
QT       += network
QT       += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport
static{
    QTPLUGIN+=qtvirtualkeyboardplugin
    QT+=svg
}
#INCLUDEPATH += .//SP++3.0//include

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
    widget_set.cpp \
    mywidget.cpp \
    thread_tcp.cpp \
    widget_report.cpp \
    widget_back.cpp \
    qcustomplot.cpp \
    qwaiting.cpp

HEADERS += \
        mywidget.h \
    widget_set.h \
    thread_tcp.h \
    widget_report.h \
    widget_back.h \
    qcustomplot.h \
    pythreadstatelock.h \
    qwaiting.h

FORMS += \
        mywidget.ui \
    widget_set.ui \
    widget_report.ui \
    widget_back.ui \
    qwaiting.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../build-test2-Desktop_Qt_5_9_0_MinGW_32bit-Debug/debug/hello.py


DISTFILES += \
    hello.py


win32: LIBS += -L$$PWD/'../../../SYS ruanjian/python38/libs/' -lpython38

INCLUDEPATH += $$PWD/'../../../SYS ruanjian/python38/include'
DEPENDPATH += $$PWD/'../../../SYS ruanjian/python38/include'

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/'../../../SYS ruanjian/python38/libs/python38.lib'
#else:win32-g++: PRE_TARGETDEPS += $$PWD/'../../../SYS ruanjian/python38/libs/libpython38.a'



win32: LIBS += -L$$PWD/'../../../SYS ruanjian/python38/Lib/site-packages/numpy/core/lib/' -lnpymath

INCLUDEPATH += $$PWD/'../../../SYS ruanjian/python38/Lib/site-packages/numpy/core/include'
DEPENDPATH += $$PWD/'../../../SYS ruanjian/python38/Lib/site-packages/numpy/core/include'

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/'../../../SYS ruanjian/python38/Lib/site-packages/numpy/core/lib/npymath.lib'
#else:win32-g++: PRE_TARGETDEPS += $$PWD/'../../../SYS ruanjian/python38/Lib/site-packages/numpy/core/lib/libnpymath.a'
