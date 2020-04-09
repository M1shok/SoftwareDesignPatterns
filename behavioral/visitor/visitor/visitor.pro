TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        clientrequesthandler.cpp \
        main.cpp \
        request.cpp \
        requesthandler.cpp \
        testrequest.cpp

HEADERS += \
    clientrequesthandler.h \
    request.h \
    requesthandler.h \
    testrequest.h
