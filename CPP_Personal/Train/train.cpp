#include "train.h"

Train::Train(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "is constructed";
}

Train::~Train()
{
    qInfo() << this << "is destructed";
}

void Train::testing()
{
    emit alarm("WAKE UP", 10);
}

void Train::wake(QString noise, int number)
{
    qInfo()<< "From" << sender() << noise << number;
}
