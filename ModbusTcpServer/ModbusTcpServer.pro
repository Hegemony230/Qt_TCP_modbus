#-------------------------------------------------
#
# Project created by QtCreator 2016-08-05T11:15:00
#
#-------------------------------------------------

QT       += core gui serialbus serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ModbusTcpServer
TEMPLATE = app


SOURCES += main.cpp \
    ModbusTcpServer.cpp

HEADERS  += \
    ModbusTcpServer.h

FORMS    += \
    ModbusTcpServer.ui
