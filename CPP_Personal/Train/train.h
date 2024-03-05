#ifndef TRAIN_H
#define TRAIN_H

#include <QObject>
#include <QDebug>

class Train : public QObject
{
    Q_OBJECT

public:
    explicit Train(QObject *parent = nullptr);
    ~Train();
    void testing();

signals:
    void alarm(QString noise, int n);

public slots:
    void wake(QString noise, int n);
};

#endif // TRAIN_H
