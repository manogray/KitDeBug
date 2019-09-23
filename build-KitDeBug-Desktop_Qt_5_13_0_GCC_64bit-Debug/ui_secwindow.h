/********************************************************************************
** Form generated from reading UI file 'secwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECWINDOW_H
#define UI_SECWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SecWindow)
    {
        if (SecWindow->objectName().isEmpty())
            SecWindow->setObjectName(QString::fromUtf8("SecWindow"));
        SecWindow->resize(800, 600);
        centralwidget = new QWidget(SecWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 100, 54, 17));
        SecWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SecWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        SecWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SecWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SecWindow->setStatusBar(statusbar);

        retranslateUi(SecWindow);

        QMetaObject::connectSlotsByName(SecWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SecWindow)
    {
        SecWindow->setWindowTitle(QCoreApplication::translate("SecWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("SecWindow", "Hello", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecWindow: public Ui_SecWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECWINDOW_H
