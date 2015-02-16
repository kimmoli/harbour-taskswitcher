#ifndef VIEWHELPER_H
#define VIEWHELPER_H

#include <QObject>
#include <QQuickView>

class ViewHelper : public QObject
{
    Q_OBJECT
public:
    explicit ViewHelper(QQuickView *parent = 0);

public slots:
    void detachWindow();

private:
    QQuickView *view;

};

#endif // VIEWHELPER_H
