// Copyright (C) 2026 Qt Group.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

#include "receiver.h"

Receiver::Receiver(QObject *parent)
    : QObject{parent}
{

}

void Receiver::onEvent(QString message)
{
    qInfo() << "Executing slot inside" << this;
    qInfo() << "Message received: " << message;
}
