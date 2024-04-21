QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

include("DilemaGui/DilemaGui.pri")

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    DilemaFactory.cpp \
    Player.cpp \
    PlayerAltruist.cpp \
    PlayerAltruistNotRisky.cpp \
    PlayerGreed.cpp \
    PlayerRandom.cpp \
    PlayerRandomNotRisky.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    DilemaFactory.h \
    Player.h \
    PlayerAltruist.h \
    PlayerAltruistNotRisky.h \
    PlayerGreed.h \
    PlayerRandom.h \
    PlayerRandomNotRisky.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
