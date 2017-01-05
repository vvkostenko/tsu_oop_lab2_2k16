QT += core
QT -= gui

CONFIG += c++11

TARGET = tsu_oop_lab2_2k16
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    src/diap.cpp \
    src/freq.cpp \
    src/supplyBase.cpp \
    src/supplyFile.cpp \
    src/supplyKbrd.cpp \
    src/supplyQueue.cpp

HEADERS += \
    src/diap.h \
    src/freq.h \
    src/supply.h
