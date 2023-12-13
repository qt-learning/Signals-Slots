#include <QCoreApplication>
#include "sender.h"
#include "receiver.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Sender *sender = new Sender();
    Receiver *receiver = new Receiver();

    QObject::connect(sender, &Sender::event, receiver, &Receiver::onEvent);

    emit sender->event("Hello World!");

    return a.exec();
}
