TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        context.cpp \
        main.cpp \
        stringduplicator.cpp \
        stringmodifier.cpp \
        stringreverser.cpp

HEADERS += \
    context.h \
    stringduplicator.h \
    stringmodifier.h \
    stringreverser.h
