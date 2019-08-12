/********************************************************************************
** Form generated from reading UI file 'portaserial.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTASERIAL_H
#define UI_PORTASERIAL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_portaSerial
{
public:
    QWidget *layoutWidget;
    QFormLayout *contentPrincipal_2;
    QHBoxLayout *contentOpcoes_2;
    QGridLayout *contentPorta_2;
    QComboBox *comboBox_porta_2;
    QLabel *label_porta_2;
    QGridLayout *contentBanda_2;
    QLabel *label_banda_2;
    QComboBox *comboBox_banda_2;
    QWidget *layoutWidget_2;
    QFormLayout *contentPrincipal_3;
    QHBoxLayout *contentOpcoes_3;
    QGridLayout *contentPorta_3;
    QComboBox *comboBox_porta_3;
    QLabel *label_porta_3;
    QGridLayout *contentBanda_3;
    QLabel *label_banda_3;
    QComboBox *comboBox_banda_3;
    QWidget *layoutWidget_3;
    QFormLayout *contentPrincipal_4;
    QHBoxLayout *contentOpcoes_4;
    QGridLayout *contentPorta_4;
    QComboBox *comboBox_porta_4;
    QLabel *label_porta_4;
    QGridLayout *contentBanda_4;
    QLabel *label_banda_4;
    QComboBox *comboBox_banda_4;
    QLabel *label;
    QWidget *layoutWidget1;
    QFormLayout *contentPrincipal_1;
    QHBoxLayout *contentOpcoes;
    QGridLayout *contentPorta;
    QComboBox *comboBox_porta_1;
    QLabel *label_porta;
    QGridLayout *contentBanda;
    QLabel *label_banda;
    QComboBox *comboBox_banda_1;
    QPushButton *pushButton_conecta;

    void setupUi(QDialog *portaSerial)
    {
        if (portaSerial->objectName().isEmpty())
            portaSerial->setObjectName(QString::fromUtf8("portaSerial"));
        portaSerial->resize(703, 399);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../Imagens/bug.png"), QSize(), QIcon::Normal, QIcon::Off);
        portaSerial->setWindowIcon(icon);
        layoutWidget = new QWidget(portaSerial);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 170, 291, 71));
        contentPrincipal_2 = new QFormLayout(layoutWidget);
        contentPrincipal_2->setObjectName(QString::fromUtf8("contentPrincipal_2"));
        contentPrincipal_2->setContentsMargins(0, 0, 0, 0);
        contentOpcoes_2 = new QHBoxLayout();
        contentOpcoes_2->setObjectName(QString::fromUtf8("contentOpcoes_2"));
        contentPorta_2 = new QGridLayout();
        contentPorta_2->setObjectName(QString::fromUtf8("contentPorta_2"));
        comboBox_porta_2 = new QComboBox(layoutWidget);
        comboBox_porta_2->setObjectName(QString::fromUtf8("comboBox_porta_2"));

        contentPorta_2->addWidget(comboBox_porta_2, 1, 0, 1, 1);

        label_porta_2 = new QLabel(layoutWidget);
        label_porta_2->setObjectName(QString::fromUtf8("label_porta_2"));
        label_porta_2->setStyleSheet(QString::fromUtf8("font-size: 12pt;"));

        contentPorta_2->addWidget(label_porta_2, 0, 0, 1, 1);


        contentOpcoes_2->addLayout(contentPorta_2);

        contentBanda_2 = new QGridLayout();
        contentBanda_2->setObjectName(QString::fromUtf8("contentBanda_2"));
        label_banda_2 = new QLabel(layoutWidget);
        label_banda_2->setObjectName(QString::fromUtf8("label_banda_2"));
        label_banda_2->setStyleSheet(QString::fromUtf8("font-size: 12pt;"));

        contentBanda_2->addWidget(label_banda_2, 0, 0, 1, 1);

        comboBox_banda_2 = new QComboBox(layoutWidget);
        comboBox_banda_2->setObjectName(QString::fromUtf8("comboBox_banda_2"));

        contentBanda_2->addWidget(comboBox_banda_2, 1, 0, 1, 1);


        contentOpcoes_2->addLayout(contentBanda_2);


        contentPrincipal_2->setLayout(0, QFormLayout::SpanningRole, contentOpcoes_2);

        layoutWidget_2 = new QWidget(portaSerial);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(370, 60, 271, 71));
        contentPrincipal_3 = new QFormLayout(layoutWidget_2);
        contentPrincipal_3->setObjectName(QString::fromUtf8("contentPrincipal_3"));
        contentPrincipal_3->setContentsMargins(0, 0, 0, 0);
        contentOpcoes_3 = new QHBoxLayout();
        contentOpcoes_3->setObjectName(QString::fromUtf8("contentOpcoes_3"));
        contentPorta_3 = new QGridLayout();
        contentPorta_3->setObjectName(QString::fromUtf8("contentPorta_3"));
        comboBox_porta_3 = new QComboBox(layoutWidget_2);
        comboBox_porta_3->setObjectName(QString::fromUtf8("comboBox_porta_3"));

        contentPorta_3->addWidget(comboBox_porta_3, 1, 0, 1, 1);

        label_porta_3 = new QLabel(layoutWidget_2);
        label_porta_3->setObjectName(QString::fromUtf8("label_porta_3"));
        label_porta_3->setStyleSheet(QString::fromUtf8("font-size: 12pt;"));

        contentPorta_3->addWidget(label_porta_3, 0, 0, 1, 1);


        contentOpcoes_3->addLayout(contentPorta_3);

        contentBanda_3 = new QGridLayout();
        contentBanda_3->setObjectName(QString::fromUtf8("contentBanda_3"));
        label_banda_3 = new QLabel(layoutWidget_2);
        label_banda_3->setObjectName(QString::fromUtf8("label_banda_3"));
        label_banda_3->setStyleSheet(QString::fromUtf8("font-size: 12pt;"));

        contentBanda_3->addWidget(label_banda_3, 0, 0, 1, 1);

        comboBox_banda_3 = new QComboBox(layoutWidget_2);
        comboBox_banda_3->setObjectName(QString::fromUtf8("comboBox_banda_3"));

        contentBanda_3->addWidget(comboBox_banda_3, 1, 0, 1, 1);


        contentOpcoes_3->addLayout(contentBanda_3);


        contentPrincipal_3->setLayout(0, QFormLayout::SpanningRole, contentOpcoes_3);

        layoutWidget_3 = new QWidget(portaSerial);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(370, 170, 271, 71));
        contentPrincipal_4 = new QFormLayout(layoutWidget_3);
        contentPrincipal_4->setObjectName(QString::fromUtf8("contentPrincipal_4"));
        contentPrincipal_4->setContentsMargins(0, 0, 0, 0);
        contentOpcoes_4 = new QHBoxLayout();
        contentOpcoes_4->setObjectName(QString::fromUtf8("contentOpcoes_4"));
        contentPorta_4 = new QGridLayout();
        contentPorta_4->setObjectName(QString::fromUtf8("contentPorta_4"));
        comboBox_porta_4 = new QComboBox(layoutWidget_3);
        comboBox_porta_4->setObjectName(QString::fromUtf8("comboBox_porta_4"));

        contentPorta_4->addWidget(comboBox_porta_4, 1, 0, 1, 1);

        label_porta_4 = new QLabel(layoutWidget_3);
        label_porta_4->setObjectName(QString::fromUtf8("label_porta_4"));
        label_porta_4->setStyleSheet(QString::fromUtf8("font-size: 12pt;"));

        contentPorta_4->addWidget(label_porta_4, 0, 0, 1, 1);


        contentOpcoes_4->addLayout(contentPorta_4);

        contentBanda_4 = new QGridLayout();
        contentBanda_4->setObjectName(QString::fromUtf8("contentBanda_4"));
        label_banda_4 = new QLabel(layoutWidget_3);
        label_banda_4->setObjectName(QString::fromUtf8("label_banda_4"));
        label_banda_4->setStyleSheet(QString::fromUtf8("font-size: 12pt;"));

        contentBanda_4->addWidget(label_banda_4, 0, 0, 1, 1);

        comboBox_banda_4 = new QComboBox(layoutWidget_3);
        comboBox_banda_4->setObjectName(QString::fromUtf8("comboBox_banda_4"));

        contentBanda_4->addWidget(comboBox_banda_4, 1, 0, 1, 1);


        contentOpcoes_4->addLayout(contentBanda_4);


        contentPrincipal_4->setLayout(0, QFormLayout::SpanningRole, contentOpcoes_4);

        label = new QLabel(portaSerial);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 20, 311, 17));
        layoutWidget1 = new QWidget(portaSerial);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 60, 291, 71));
        contentPrincipal_1 = new QFormLayout(layoutWidget1);
        contentPrincipal_1->setObjectName(QString::fromUtf8("contentPrincipal_1"));
        contentPrincipal_1->setContentsMargins(0, 0, 0, 0);
        contentOpcoes = new QHBoxLayout();
        contentOpcoes->setObjectName(QString::fromUtf8("contentOpcoes"));
        contentPorta = new QGridLayout();
        contentPorta->setObjectName(QString::fromUtf8("contentPorta"));
        comboBox_porta_1 = new QComboBox(layoutWidget1);
        comboBox_porta_1->setObjectName(QString::fromUtf8("comboBox_porta_1"));

        contentPorta->addWidget(comboBox_porta_1, 1, 0, 1, 1);

        label_porta = new QLabel(layoutWidget1);
        label_porta->setObjectName(QString::fromUtf8("label_porta"));
        label_porta->setStyleSheet(QString::fromUtf8("font-size: 12pt;"));

        contentPorta->addWidget(label_porta, 0, 0, 1, 1);


        contentOpcoes->addLayout(contentPorta);

        contentBanda = new QGridLayout();
        contentBanda->setObjectName(QString::fromUtf8("contentBanda"));
        label_banda = new QLabel(layoutWidget1);
        label_banda->setObjectName(QString::fromUtf8("label_banda"));
        label_banda->setStyleSheet(QString::fromUtf8("font-size: 12pt;"));

        contentBanda->addWidget(label_banda, 0, 0, 1, 1);

        comboBox_banda_1 = new QComboBox(layoutWidget1);
        comboBox_banda_1->setObjectName(QString::fromUtf8("comboBox_banda_1"));

        contentBanda->addWidget(comboBox_banda_1, 1, 0, 1, 1);


        contentOpcoes->addLayout(contentBanda);


        contentPrincipal_1->setLayout(0, QFormLayout::SpanningRole, contentOpcoes);

        pushButton_conecta = new QPushButton(portaSerial);
        pushButton_conecta->setObjectName(QString::fromUtf8("pushButton_conecta"));
        pushButton_conecta->setGeometry(QRect(210, 330, 269, 30));
        pushButton_conecta->setLayoutDirection(Qt::LeftToRight);
        pushButton_conecta->setStyleSheet(QString::fromUtf8("font-size: 12pt;\n"
"background: #00969b;\n"
"color: #f5f5f5;"));

        retranslateUi(portaSerial);

        QMetaObject::connectSlotsByName(portaSerial);
    } // setupUi

    void retranslateUi(QDialog *portaSerial)
    {
        portaSerial->setWindowTitle(QCoreApplication::translate("portaSerial", "Porta Serial", nullptr));
        label_porta_2->setText(QCoreApplication::translate("portaSerial", "Porta", nullptr));
        label_banda_2->setText(QCoreApplication::translate("portaSerial", "Baud Rate", nullptr));
        label_porta_3->setText(QCoreApplication::translate("portaSerial", "Porta", nullptr));
        label_banda_3->setText(QCoreApplication::translate("portaSerial", "Baud Rate", nullptr));
        label_porta_4->setText(QCoreApplication::translate("portaSerial", "Porta", nullptr));
        label_banda_4->setText(QCoreApplication::translate("portaSerial", "Baud Rate", nullptr));
        label->setText(QCoreApplication::translate("portaSerial", "Voc\303\252 pode conectar at\303\251 4 circuitos ao mesmo tempo!", nullptr));
        label_porta->setText(QCoreApplication::translate("portaSerial", "Porta", nullptr));
        label_banda->setText(QCoreApplication::translate("portaSerial", "Baud Rate", nullptr));
        pushButton_conecta->setText(QCoreApplication::translate("portaSerial", "Conectar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class portaSerial: public Ui_portaSerial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTASERIAL_H
