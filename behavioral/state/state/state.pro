TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        audioplayer.cpp \
        lockedstate.cpp \
        main.cpp \
        pausestate.cpp \
        playingstate.cpp \
        state.cpp

HEADERS += \
    audioplayer.h \
    lockedstate.h \
    pausestate.h \
    playingstate.h \
    state.h
