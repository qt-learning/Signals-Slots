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
