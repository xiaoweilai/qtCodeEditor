#include "codeeditor.h"
#include "codeeditorplugin.h"

#include <QtCore/QtPlugin>

codeEditorPlugin::codeEditorPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void codeEditorPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool codeEditorPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *codeEditorPlugin::createWidget(QWidget *parent)
{
    return new codeEditor(parent);
}

QString codeEditorPlugin::name() const
{
    return QLatin1String("codeEditor");
}

QString codeEditorPlugin::group() const
{
    return QLatin1String("");
}

QIcon codeEditorPlugin::icon() const
{
    return QIcon();
}

QString codeEditorPlugin::toolTip() const
{
    return QLatin1String("");
}

QString codeEditorPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool codeEditorPlugin::isContainer() const
{
    return false;
}

QString codeEditorPlugin::domXml() const
{
    return QLatin1String("<widget class=\"codeEditor\" name=\"codeEditor\">\n</widget>\n");
}

QString codeEditorPlugin::includeFile() const
{
    return QLatin1String("codeeditor.h");
}

Q_EXPORT_PLUGIN2(codeeditorplugin, codeEditorPlugin)
