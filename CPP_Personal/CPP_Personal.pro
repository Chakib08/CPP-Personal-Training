QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Map/map.cpp \
    Pointers/pointer.cpp \
    Tuple/tuple.cpp \
    main.cpp \
    Personal.cpp \
    Test/Test.cpp

HEADERS += \
    Map/map.h \
    Personal.h \
    Pointers/pointer.h \
    Test/Test.h \
    Tuple/tuple.h


FORMS += \
    Personal.ui

TRANSLATIONS += \
    CPP_Personal_en_150.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
