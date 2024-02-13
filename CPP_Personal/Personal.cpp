#include "Personal.h"
#include "ui_Personal.h"

Personal::Personal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Personal)
{
    ui->setupUi(this);
}

Personal::~Personal()
{
    delete ui;
}

