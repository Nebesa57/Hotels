QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

LIBS += -L../objects/debug -lobjects

SOURCES += \
    first_hotel_page.cpp \
    main.cpp \
    mainwindow.cpp \
    second_hotel_page.cpp \
    third_hotel_page.cpp

HEADERS += \
    first_hotel_page.h \
    mainwindow.h \
    second_hotel_page.h \
    third_hotel_page.h

FORMS += \
    first_hotel_page.ui \
    mainwindow.ui \
    second_hotel_page.ui \
    third_hotel_page.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
