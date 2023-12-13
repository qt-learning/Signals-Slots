#include "myclass.h"

MyClass::MyClass(QObject *parent, const QString &name)
    : QObject{parent}
{
    setObjectName(name);
    qInfo() << this << "created on" << QThread::currentThread();
}

void MyClass::onEvent()
{
    qInfo() << "Executing slot onEvent() on" << QThread::currentThread();
}
