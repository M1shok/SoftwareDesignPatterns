TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        jsonarray.cpp \
        jsonentity.cpp \
        jsonobject.cpp \
        jsonvalue.cpp \
        main.cpp

HEADERS += \
    jsonarray.h \
    jsonentity.h \
    jsonobject.h \
    jsonvalue.h
