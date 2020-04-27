TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        addexpression.cpp \
        context.cpp \
        main.cpp \
        numberexpression.cpp \
        subtractexpression.cpp

HEADERS += \
    addexpression.h \
    context.h \
    expression.h \
    numberexpression.h \
    subtractexpression.h
