/********************************************************************************
** Form generated from reading UI file 'Personal.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONAL_H
#define UI_PERSONAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Personal
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Personal)
    {
        if (Personal->objectName().isEmpty())
            Personal->setObjectName("Personal");
        Personal->resize(800, 600);
        centralwidget = new QWidget(Personal);
        centralwidget->setObjectName("centralwidget");
        Personal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Personal);
        menubar->setObjectName("menubar");
        Personal->setMenuBar(menubar);
        statusbar = new QStatusBar(Personal);
        statusbar->setObjectName("statusbar");
        Personal->setStatusBar(statusbar);

        retranslateUi(Personal);

        QMetaObject::connectSlotsByName(Personal);
    } // setupUi

    void retranslateUi(QMainWindow *Personal)
    {
        Personal->setWindowTitle(QCoreApplication::translate("Personal", "Personal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Personal: public Ui_Personal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONAL_H
