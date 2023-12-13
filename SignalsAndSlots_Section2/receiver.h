#ifndef RECEIVER_H
#define RECEIVER_H

#include <QObject>
#include <QDebug>

class Receiver : public QObject
{
    Q_OBJECT

public:
    explicit Receiver(QObject *parent = nullptr);

public slots:
    void onEvent(QString message);
};

#endif // RECEIVER_H
