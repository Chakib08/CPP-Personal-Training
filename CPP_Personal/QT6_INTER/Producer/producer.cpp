#include "producer.h"

Producer::Producer(QObject *parent)
    : QObject{parent}
{

}

void Producer::sendData(int data)
{
    Q_EMIT dataAvailable(data);
}
