#include <QCoreApplication>
#include "myclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QThread::currentThread()->setObjectName("Main Thread");

    MyClass *source = new MyClass(nullptr, "source");
    MyClass *destination = new MyClass(nullptr, "destination");

    QThread thread;
    QObject::connect(&thread, &QThread::finished, destination, &QObject::deleteLater);
    QObject::connect(&thread, &QThread::finished, source, &QObject::deleteLater);
    thread.start();
    thread.setObjectName("Separate Thread");
    destination->moveToThread(&thread);

    QObject::connect(source, &MyClass::event, destination, &MyClass::onEvent, Qt::QueuedConnection);

    qInfo() << "\nEmitting signal event() from" << QThread::currentThread();
    emit source->event();
    thread.wait(3000);
    thread.quit();

    return a.exec();
}
