QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AddNewSection.cpp \
    ChangeData.cpp \
    ChooseFile.cpp \
    DeleteData.cpp \
    PathNewFile.cpp \
    ShowOneSection.cpp \
    ShowRangeSections.cpp \
    StorageContentIni.cpp \
    main.cpp \
    ini.cpp

HEADERS += \
    AddNewSection.h \
    ChangeData.h \
    ChooseFile.h \
    DeleteData.h \
    PathNewFile.h \
    ShowOneSection.h \
    ShowRangeSections.h \
    StorageContentIni.h \
    ini.h

FORMS += \
    AddNewSection.ui \
    ChangeData.ui \
    ChooseFile.ui \
    DeleteData.ui \
    PathNewFile.ui \
    ShowOneSection.ui \
    ShowRangeSections.ui \
    ini.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
