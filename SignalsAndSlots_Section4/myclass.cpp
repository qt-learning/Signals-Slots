// Copyright (C) 2026 Qt Group.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

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
