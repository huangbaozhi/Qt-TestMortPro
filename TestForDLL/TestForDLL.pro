QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


macx: LIBS += -L$$PWD/../../build-TestMorePro-Desktop_Qt_5_12_12_clang_64bit-Debug/DLL/ -lDLL.1.0.0

INCLUDEPATH += $$PWD/../DLL
DEPENDPATH += $$PWD/../DLL



macx: LIBS += -L$$PWD/../../build-TestMorePro-Desktop_Qt_5_12_12_clang_64bit-Debug/CuteLogger/ -lCuteLogger.1.0.0

INCLUDEPATH += $$PWD/../CuteLogger/include
DEPENDPATH += $$PWD/../CuteLogger/include
