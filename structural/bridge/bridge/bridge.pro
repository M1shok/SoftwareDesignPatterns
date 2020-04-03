TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        device.cpp \
        main.cpp \
        radio.cpp \
        remote.cpp \
        remotecontroller.cpp

HEADERS += \
    device.h \
    radio.h \
    remote.h \
    remotecontroller.h
