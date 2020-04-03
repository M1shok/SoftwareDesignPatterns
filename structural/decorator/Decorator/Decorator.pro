TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        compressiondecorator.cpp \
        datastream.cpp \
        datastreamdecorator.cpp \
        encryptiondecorator.cpp \
        filedatastream.cpp \
        main.cpp

HEADERS += \
    compressiondecorator.h \
    datastream.h \
    datastreamdecorator.h \
    encryptiondecorator.h \
    filedatastream.h
