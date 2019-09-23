/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPorta_Serial;
    QAction *actionSair;
    QWidget *centralWidget;
    QLabel *label_title;
    QGraphicsView *contentMenu;
    QLabel *logo;
    QLabel *label_status;
    QPushButton *pushButton_resistencia;
    QPushButton *pushButton_tensao;
    QPushButton *pushButton_corrente;
    QLabel *visor;
    QMenuBar *menuBar;
    QMenu *menuConfigura_es;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(971, 498);
        MainWindow->setMinimumSize(QSize(200, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../Imagens/bug.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionPorta_Serial = new QAction(MainWindow);
        actionPorta_Serial->setObjectName(QString::fromUtf8("actionPorta_Serial"));
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_title = new QLabel(centralWidget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(70, 20, 311, 51));
        label_title->setStyleSheet(QString::fromUtf8("font-size: 10pt;\n"
"font-weight: bold;\n"
"color: #f5f5f5;"));
        contentMenu = new QGraphicsView(centralWidget);
        contentMenu->setObjectName(QString::fromUtf8("contentMenu"));
        contentMenu->setGeometry(QRect(0, 0, 231, 768));
        contentMenu->setMinimumSize(QSize(0, 0));
        contentMenu->setStyleSheet(QString::fromUtf8("position: relative;\n"
"float: left;\n"
"width: 100%;\n"
"background: #00969b;"));
        logo = new QLabel(centralWidget);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(10, 13, 61, 61));
        logo->setPixmap(QPixmap(QString::fromUtf8("../../../Imagens/bug.png")));
        logo->setScaledContents(true);
        label_status = new QLabel(centralWidget);
        label_status->setObjectName(QString::fromUtf8("label_status"));
        label_status->setGeometry(QRect(10, 430, 261, 41));
        label_status->setStyleSheet(QString::fromUtf8("font-size: 13pt;"));
        pushButton_resistencia = new QPushButton(centralWidget);
        pushButton_resistencia->setObjectName(QString::fromUtf8("pushButton_resistencia"));
        pushButton_resistencia->setGeometry(QRect(20, 110, 191, 25));
        pushButton_resistencia->setAutoFillBackground(false);
        pushButton_tensao = new QPushButton(centralWidget);
        pushButton_tensao->setObjectName(QString::fromUtf8("pushButton_tensao"));
        pushButton_tensao->setGeometry(QRect(20, 160, 191, 25));
        pushButton_tensao->setAutoFillBackground(false);
        pushButton_corrente = new QPushButton(centralWidget);
        pushButton_corrente->setObjectName(QString::fromUtf8("pushButton_corrente"));
        pushButton_corrente->setGeometry(QRect(20, 210, 191, 25));
        pushButton_corrente->setAutoFillBackground(false);
        visor = new QLabel(centralWidget);
        visor->setObjectName(QString::fromUtf8("visor"));
        visor->setGeometry(QRect(410, 80, 221, 181));
        visor->setStyleSheet(QString::fromUtf8("font-size:45pt;\n"
"background: #f5f5f5"));
        MainWindow->setCentralWidget(centralWidget);
        contentMenu->raise();
        label_title->raise();
        logo->raise();
        label_status->raise();
        pushButton_resistencia->raise();
        pushButton_tensao->raise();
        pushButton_corrente->raise();
        visor->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 971, 22));
        menuConfigura_es = new QMenu(menuBar);
        menuConfigura_es->setObjectName(QString::fromUtf8("menuConfigura_es"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuConfigura_es->menuAction());
        menuConfigura_es->addAction(actionPorta_Serial);
        menuConfigura_es->addAction(actionSair);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "KitDeBug", nullptr));
        actionPorta_Serial->setText(QCoreApplication::translate("MainWindow", "Porta Serial", nullptr));
        actionSair->setText(QCoreApplication::translate("MainWindow", "Sair", nullptr));
        label_title->setText(QCoreApplication::translate("MainWindow", "Kit de Instrumenta\303\247\303\243o", nullptr));
        logo->setText(QString());
        label_status->setText(QCoreApplication::translate("MainWindow", "N\303\243o Conectado", nullptr));
        pushButton_resistencia->setText(QCoreApplication::translate("MainWindow", "Resist\303\252ncia", nullptr));
        pushButton_tensao->setText(QCoreApplication::translate("MainWindow", "Tens\303\243o", nullptr));
        pushButton_corrente->setText(QCoreApplication::translate("MainWindow", "Corrente", nullptr));
        visor->setText(QString());
        menuConfigura_es->setTitle(QCoreApplication::translate("MainWindow", "In\303\255cio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
