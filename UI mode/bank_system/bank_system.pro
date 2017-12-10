#-------------------------------------------------
#
# Project created by QtCreator 2017-12-06T19:38:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = bank_system
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        bankdialog.cpp \
    bank_system.cpp \
    enrolldialog.cpp \
    logindialog.cpp \
    show_card_dialog.cpp \
    logingdialog.cpp \
    recorddialog.cpp \
    showrecorddialog.cpp

HEADERS  += bankdialog.h \
    bank_system.h \
    enrolldialog.h \
    header.h \
    logindialog.h \
    show_card_dialog.h \
    logingdialog.h \
    recorddialog.h \
    showrecorddialog.h

FORMS    += bankdialog.ui \
    enrolldialog.ui \
    logindialog.ui \
    show_card_dialog.ui \
    logingdialog.ui \
    recorddialog.ui \
    showrecorddialog.ui

DISTFILES +=

RESOURCES += \
    images.qrc
