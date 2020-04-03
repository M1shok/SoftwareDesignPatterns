TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        adaptee.cpp \
        adaptor.cpp \
        main.cpp \
        target.cpp \
        wstringprocessor.cpp

HEADERS += \
    adaptee.h \
    adaptor.h \
    target.h \
    wstringprocessor.h
