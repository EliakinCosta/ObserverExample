QT += core
QT -= gui

TARGET = ObserverExample
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    subject.cpp \
    eleicaosubject.cpp \
    displayobserver.cpp

HEADERS += \
    subject.h \
    iobserver.h \
    eleicaosubject.h \
    displayobserver.h

