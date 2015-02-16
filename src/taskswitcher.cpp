#include "taskswitcher.h"


Taskswitcher::Taskswitcher(QObject *parent) :
    QObject(parent)
{
    iface = new QDBusInterface("com.kimmoli.tohkbd2user",
                               "/",
                               "com.kimmoli.tohkbd2user",
                               QDBusConnection::sessionBus(), this);
    iface->setTimeout(2000);
}

void Taskswitcher::launchApplication(const QString &app)
{
    QList<QVariant> args;
    args.append(app);
    iface->callWithArgumentList(QDBus::AutoDetect, "launchApplication", args);
}
