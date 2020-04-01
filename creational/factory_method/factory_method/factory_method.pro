TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        car.cpp \
        logistics.cpp \
        main.cpp \
        plane.cpp \
        roadlogistics.cpp \
        sealogistics.cpp \
        transport.cpp

HEADERS += \
    car.h \
    logistics.h \
    plane.h \
    roadlogistics.h \
    sealogistics.h \
    transport.h
