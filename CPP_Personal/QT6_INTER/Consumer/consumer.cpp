#include "consumer.h"

Consumer::Consumer(QObject *parent)
    : QObject{parent}
{

}

void Consumer::onReceivedData(int data)
{
    qInfo() << "Received data is : " << data;
}
