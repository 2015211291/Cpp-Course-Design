#-------------------------------------------------
#
# Project created by QtCreator 2017-12-07T19:54:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = eBussiness
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
        platformdialog.cpp \
    book.cpp \
    clothing.cpp \
    eBussiness.cpp \
    food.cpp \
    product.cpp \
    ebdialog.cpp \
    log_in_dialog.cpp \
    userdialog.cpp \
    foodshowdialog.cpp \
    bookshowdialog.cpp \
    clothingshowdialog.cpp \
    shoppingcartdialog.cpp \
    admidialog.cpp \
    admishowdialog.cpp \
    addfooddialog.cpp \
    addbookdialog.cpp \
    addclothingdialog.cpp \
    fulloffdialog.cpp \
    adminlogdialog.cpp \
    adverdialog.cpp

HEADERS  += platformdialog.h \
    book.h \
    clothing.h \
    common.h \
    eBussiness.h \
    food.h \
    product.h \
    header2.h \
    ebdialog.h \
    log_in_dialog.h \
    userdialog.h \
    foodshowdialog.h \
    bookshowdialog.h \
    clothingshowdialog.h \
    shoppingcartdialog.h \
    admidialog.h \
    admishowdialog.h \
    addfooddialog.h \
    addbookdialog.h \
    addclothingdialog.h \
    fulloffdialog.h \
    adminlogdialog.h \
    adverdialog.h

FORMS    += platformdialog.ui \
    ebdialog.ui \
    log_in_dialog.ui \
    userdialog.ui \
    foodshowdialog.ui \
    bookshowdialog.ui \
    clothingshowdialog.ui \
    shoppingcartdialog.ui \
    admidialog.ui \
    admishowdialog.ui \
    addfooddialog.ui \
    addbookdialog.ui \
    addclothingdialog.ui \
    fulloffdialog.ui \
    adminlogdialog.ui \
    adverdialog.ui
