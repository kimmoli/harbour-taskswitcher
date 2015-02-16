TARGET = harbour-taskswitcher

QT += gui-private dbus
CONFIG += sailfishapp link_pkgconfig
PKGCONFIG += sailfishapp mlite5

SOURCES += \
    src/viewhelper.cpp \
    src/main.cpp \
    src/taskswitcher.cpp

HEADERS += \
    src/viewhelper.h \
    src/taskswitcher.h

OTHER_FILES += \
    rpm/harbour-taskswitcher.spec \
    harbour-taskswitcher.desktop \
    qml/main.qml
