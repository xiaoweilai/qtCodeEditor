CONFIG      += designer plugin debug_and_release
TARGET      = $$qtLibraryTarget(codeeditorplugin)
TEMPLATE    = lib

HEADERS     = codeeditorplugin.h \
    linenumberarea.h
SOURCES     = codeeditorplugin.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(codeeditor.pri)
