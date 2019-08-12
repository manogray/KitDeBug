#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "portaserial.h"
#include <QDebug>
#include <unistd.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for(int i = 0; i < 4; i++){
        QSerialPort* port = new QSerialPort;
        this->listaSerialPort.append(port);
    }

    this->ohmimetro = -1;
    this->amperimetro = -1;
    this->voltimetro = -1;
    this->capacimetro = -1;


    connect(ui->pushButton_resistencia,SIGNAL(clicked(bool)),this,SLOT(circuitoResistencia()));

    connect(ui->pushButton_corrente,SIGNAL(clicked(bool)),this,SLOT(circuitoCorrente()));

    ui->pushButton_resistencia->hide();
    ui->pushButton_corrente->hide();
    ui->pushButton_tensao->hide();
    ui->visor->hide();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::lerDoSerial(int valor){
    ui->visor->clear();
    QByteArray dadosSerial = this->listaSerialPort[valor]->readAll();
    qDebug() << dadosSerial;
    ui->visor->setText(dadosSerial);
}

void MainWindow::circuitoResistencia(){

    if(this->voltimetro != -1){
        this->listaSerialPort[this->voltimetro]->write("c");
        qDebug() << "Desliguei voltimetro";
    }
    qDebug() << this->ohmimetro;
    this->listaSerialPort[this->ohmimetro]->write("r");

    this->lerDoSerial(this->ohmimetro);
}

void MainWindow::circuitoCorrente(){

    if(this->ohmimetro != -1){
        this->listaSerialPort[this->ohmimetro]->write("c");
        qDebug() << "Desliguei ohmimetro";
    }

    qDebug() << this->voltimetro;
    this->listaSerialPort[this->voltimetro]->write("r");

    this->lerDoSerial(this->voltimetro);
}

void MainWindow::on_actionPorta_Serial_triggered()
{
    portaSerial *config = new portaSerial();
    config->show();
    config->exec();

    QList<QString> listaPorta = config->getNomePorta();
    QList<int> listaBanda = config->getValorBanda();

    ui->visor->show();

    for(int i = 0; i < listaPorta.size(); i++){

        qDebug() << listaPorta[i];
        qDebug() << listaBanda[i];

        this->listaSerialPort[i]->setPortName(listaPorta[i]);
        this->listaSerialPort[i]->setBaudRate(listaBanda[i]);

        if(!this->listaSerialPort[i]->open(QIODevice::ReadWrite)){
            qDebug() << "nao rolou";
        }else {
            qDebug() << "ggwp";
        }

        this->listaSerialPort[i]->waitForReadyRead(2000);
        QByteArray flag = this->listaSerialPort[i]->readAll();

        qDebug() << flag;

        if(flag == "o"){
            ui->pushButton_resistencia->show();
            qDebug() << "Ohmimetro conectado na porta " << i;
            this->ohmimetro = i;
            connect(this->listaSerialPort[this->ohmimetro],SIGNAL(readyRead()),this,SLOT(lerDoSerial()));
        }else if(flag == "v"){
            ui->pushButton_corrente->show();
            qDebug() << "Voltimetro conectado na porta " << i;
            this->voltimetro = i;
            connect(this->listaSerialPort[this->voltimetro],SIGNAL(readyRead()),this,SLOT(lerDoSerial()));
        }else if(flag == "a"){
            this->amperimetro = i;
        }else if(flag == "c"){
            this->capacimetro = i;
        }
    }

}

void MainWindow::on_actionSair_triggered()
{
    this->close();
}
