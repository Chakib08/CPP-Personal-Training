#ifndef PERSONAL_H
#define PERSONAL_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Personal; }
QT_END_NAMESPACE

class Personal : public QMainWindow
{
    Q_OBJECT

public:
    Personal(QWidget *parent = nullptr);
    ~Personal();

private:
    Ui::Personal *ui;
};
#endif // PERSONAL_H
