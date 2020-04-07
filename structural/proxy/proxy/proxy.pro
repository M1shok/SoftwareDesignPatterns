TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        databaseworker.cpp \
        main.cpp \
        mysqldatabaseworker.cpp \
        proxydatabaseworker.cpp

HEADERS += \
    databaseworker.h \
    mysqldatabaseworker.h \
    proxydatabaseworker.h
