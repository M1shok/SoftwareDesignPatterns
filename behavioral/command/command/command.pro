TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        application.cpp \
        command.cpp \
        copycommand.cpp \
        cutcommand.cpp \
        editor.cpp \
        main.cpp \
        pastecommand.cpp

HEADERS += \
    application.h \
    command.h \
    copycommand.h \
    cutcommand.h \
    editor.h \
    pastecommand.h
