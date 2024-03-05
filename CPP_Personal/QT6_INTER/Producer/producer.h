#ifndef PRODUCER_H
#define PRODUCER_H

#include <QObject>

class Producer : public QObject
{
    Q_OBJECT
public:
    explicit Producer(QObject *parent = nullptr);
    void sendData(int data);

signals:
    void dataAvailable(int data);
};

#endif // PRODUCER_H
