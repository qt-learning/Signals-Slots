#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <QDebug>
#include <QThread>

class MyClass : public QObject
{
    Q_OBJECT
public:
    explicit MyClass(QObject *parent = nullptr, const QString &name = QString());

signals:
    void event();

public slots:
    void onEvent();
};

#endif // MYCLASS_H
