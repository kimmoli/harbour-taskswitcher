#include "viewhelper.h"

#include <QGuiApplication>
#include <qpa/qplatformnativeinterface.h>
#include <QDebug>

ViewHelper::ViewHelper(QQuickView *parent) :
    QObject(parent),
    view(parent)
{
}

void ViewHelper::detachWindow()
{
    view->close();
    view->create();

    QPlatformNativeInterface *native = QGuiApplication::platformNativeInterface();
    native->setWindowProperty(view->handle(), QLatin1String("CATEGORY"), "notification");

    view->showFullScreen();
}
