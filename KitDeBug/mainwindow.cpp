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

    this->multimetro = new QSerialPort;
    this->ociloscopio = new QSerialPort;
    this->geradorSinal = new QSerialPort;
    this->fonte = new QSerialPort;

    connect(ui->pushButton_resistencia,SIGNAL(clicked(bool)),this,SLOT(circuitoResistencia()));

    connect(ui->pushButton_corrente,SIGNAL(clicked(bool)),this,SLOT(circuitoCorrente()));

    connect(ui->pushButton_tensao,SIGNAL(clicked(bool)),this,SLOT(circuitoTensao()));

    ui->pushButton_resistencia->hide();
    ui->pushButton_corrente->hide();
    ui->pushButton_tensao->hide();
    ui->visor->hide();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::lerDoSerial(QString modulo){
    qDebug() << "Entrei aqui";
    ui->visor->clear();
    if(modulo == "multimetro"){
        QByteArray dadosSerial = this->multimetro->readAll();
        qDebug() << dadosSerial;
        ui->visor->setText(dadosSerial);
    }else if(modulo == "ociloscopio"){

    }else if(modulo == "gerador de sinal"){

    }else if(modulo == "fonte"){

    }
}

void MainWindow::circuitoResistencia(){

    qDebug() << "lendo resistencia";
    this->multimetro->write("o");
    qDebug() << "escrevi no Serial resistencia";

    this->lerDoSerial("multimetro");
}

void MainWindow::circuitoCorrente(){

    this->multimetro->write("a");

    this->lerDoSerial("multimetro");
}

void MainWindow::circuitoTensao(){

    this->multimetro->write("v");

    this->lerDoSerial("multimetro");
}

void MainWindow::on_actionPorta_Serial_triggered()
{
    portaSerial *config = new portaSerial();
    config->show();
    config->exec();

    QList<QString> listaPorta = config->getNomePorta();
    QList<int> listaBanda = config->getValorBanda();

    if(config->equipamentos.size() != 0){
        qDebug() << "por enquanto ta tudo tranquilo";

        ui->visor->show();
        for(int i = 0; i < listaPorta.size(); i++){

            if(config->equipamentos[i] == "Multímetro"){
                qDebug() << "Multimetro conectado na porta " << listaPorta[i] << " na banda " << listaBanda[i];
                this->multimetro->setPortName(listaPorta[i]);
                this->multimetro->setBaudRate(listaBanda[i]);
                if(!this->multimetro->open(QIODevice::ReadWrite)){
                    qDebug() << "Não foi possível conectar com a Serial";
                }
                ui->pushButton_resistencia->show();
                ui->pushButton_corrente->show();
                ui->pushButton_tensao->show();
            }else if(config->equipamentos[i] == "Ociloscópio"){
                qDebug() << "Ociloscopio conectado na porta " << listaPorta[i] << " na banda " << listaBanda[i];
                this->ociloscopio->setPortName(listaPorta[i]);
                this->ociloscopio->setBaudRate(listaBanda[i]);
                if(!this->ociloscopio->open(QIODevice::ReadWrite)){
                    qDebug() << "Não foi possível conectar com a Serial";
                }
            }else if(config->equipamentos[i] == "Gerador de Sinal"){
                qDebug() << "Gerador de Sinal conectado na porta " << listaPorta[i] << " na banda " << listaBanda[i];
                this->geradorSinal->setPortName(listaPorta[i]);
                this->geradorSinal->setBaudRate(listaBanda[i]);
                if(!this->geradorSinal->open(QIODevice::ReadWrite)){
                    qDebug() << "Não foi possível conectar com a Serial";
                }
            }else if (config->equipamentos[i] == "Fonte"){
                qDebug() << "Fonte conectado na porta " << listaPorta[i] << " na banda " << listaBanda[i];
                this->fonte->setPortName(listaPorta[i]);
                this->fonte->setBaudRate(listaBanda[i]);
                if(!this->fonte->open(QIODevice::ReadWrite)){
                    qDebug() << "Não foi possível conectar com a Serial";
                }
            }
        }

    }

}

void MainWindow::on_actionSair_triggered()
{
    this->close();
}
