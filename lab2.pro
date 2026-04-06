QT = core

CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        main.cpp \
        problem_1.cpp \
        problem_10.cpp \
        problem_12.cpp \
        problem_14.cpp \
        problem_16.cpp \
        problem_17.cpp \
        problem_18.cpp \
        problem_2.cpp \
        problem_4.cpp \
        problem_6.cpp \
        problem_8.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    problems.h
