#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->serialPort = new QSerialPort;

    QStringList ports;
    const auto serialPortInfos = QSerialPortInfo::availablePorts();
    int indice = 0;
    for(const QSerialPortInfo &serialPortInfo : serialPortInfos){
        ports.insert(indice,serialPortInfo.portName());
        indice++;
    }
    ui->comboBox_port->insertItems(0,ports);

    QStringList bauds;
    bauds << "9600" << "19200" << "38400" << "57600" << "115200";
    ui->comboBox_baud->insertItems(0,bauds);

}

MainWindow::~MainWindow()
{
    delete ui;
}
