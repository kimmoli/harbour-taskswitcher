#ifndef TASKSWITCHER_H
#define TASKSWITCHER_H

#include <QObject>

#include <QDBusConnection>
#include <QDBusInterface>

class Taskswitcher : public QObject
{
    Q_OBJECT
public:
    explicit Taskswitcher(QObject *parent = 0);

public slots:
    void launchApplication(const QString &app);

//private slots:

//signals:

private:
    QDBusInterface *iface;
};

#endif // SCREENSHOT_H
