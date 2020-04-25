QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Jesli chcesz skompilowac to przy uzyciu qmaka to zmien '/' na '\'
# w .pro i plikach naglowkowych.

SOURCES += \
    sources/typingwindow.cpp \
    sources/selecttextwindow.cpp \
    sources/addfilewindow.cpp \
    sources/fileinfo.cpp \
    sources/localisation.cpp \
    sources/main.cpp \
    sources/mainwindow.cpp \
    sources/newfile.cpp

HEADERS += \
    headers/addfilewindow.h \
    headers/fileinfo.h \
    headers/localisation.h \
    headers/mainwindow.h \
    headers/newfile.h \
    headers/selecttextwindow.h \
    headers/typingwindow.h

FORMS += \
    forms/addfilewindow.ui \
    forms/mainwindow.ui \
    forms/selecttextwindow.ui \
    forms/typingwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
