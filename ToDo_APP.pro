QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addtask.cpp \
    deletetask.cpp \
    edittask.cpp \
    informationretrieve.cpp \
    main.cpp \
    loginwindow.cpp \
    mainpage.cpp \
    marktaskascomplete.cpp \
    registrationpage.cpp \
    viewtasks.cpp

HEADERS += \
    addtask.h \
    deletetask.h \
    edittask.h \
    informationretrieve.h \
    loginwindow.h \
    mainpage.h \
    marktaskascomplete.h \
    registrationpage.h \
    viewtasks.h

FORMS += \
    addtask.ui \
    deletetask.ui \
    edittask.ui \
    informationretrieve.ui \
    loginwindow.ui \
    mainpage.ui \
    marktaskascomplete.ui \
    registrationpage.ui \
    viewtasks.ui

TRANSLATIONS += \
    ToDo_APP_en_IN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
