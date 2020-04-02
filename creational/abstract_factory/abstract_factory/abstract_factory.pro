TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        abstractbutton.cpp \
        abstractlabel.cpp \
        guifactory.cpp \
        linuxbutton.cpp \
        linuxguifactory.cpp \
        linuxlabel.cpp \
        main.cpp \
        windowsbutton.cpp \
        windowsguifactory.cpp \
        windowslabel.cpp

HEADERS += \
    abstractbutton.h \
    abstractlabel.h \
    guifactory.h \
    linuxbutton.h \
    linuxguifactory.h \
    linuxlabel.h \
    windowsbutton.h \
    windowsguifactory.h \
    windowslabel.h
