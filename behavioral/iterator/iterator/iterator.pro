TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        iterablecollection.cpp \
        iterator.cpp \
        main.cpp \
        vector.cpp \
        vectoriterator.cpp

HEADERS += \
    iterablecollection.h \
    iterator.h \
    vector.h \
    vectoriterator.h
