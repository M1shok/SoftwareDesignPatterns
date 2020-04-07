TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        loggersubscriber.cpp \
        main.cpp \
        publisher.cpp \
        subscriber.cpp

HEADERS += \
    loggersubscriber.h \
    publisher.h \
    subscriber.h
