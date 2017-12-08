TEMPLATE = app
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CXXFLAGS += -std=c++11

INCLUDEPATH += /usr/include/irrlicht
LIBS += -lIrrlicht

SOURCES += src/main.cpp \
         src/events.cpp \
    src/enemy.cpp \
    src/character.cpp \
    src/particle.cpp


HEADERS += src/events.hpp \
           src/gui_ids.h \
    src/enemy.h \
    src/character.h \
    src/particle.h



