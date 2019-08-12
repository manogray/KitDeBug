#include "portaserial.h"
#include "ui_portaserial.h"

portaSerial::portaSerial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::portaSerial)
{
    ui->setupUi(this);

    QStringList ports;
    const auto serialPortInfos = QSerialPortInfo::availablePorts();
    int indice = 0;
    ports.insert(indice,"Selecione");
    indice++;
    for(const QSerialPortInfo &serialPortInfo : serialPortInfos){
        ports.insert(indice,serialPortInfo.portName());
        indice++;
    }

    if(ports.length() == 0){
        QStringList vazio;
        vazio << "Nenhuma porta serial disponível";
        ui->comboBox_porta_1->insertItems(0,vazio);
        ui->comboBox_porta_2->insertItems(0,vazio);
        ui->comboBox_porta_3->insertItems(0,vazio);
        ui->comboBox_porta_4->insertItems(0,vazio);
    }else {
        ui->comboBox_porta_1->insertItems(0,ports);
        ui->comboBox_porta_2->insertItems(0,ports);
        ui->comboBox_porta_3->insertItems(0,ports);
        ui->comboBox_porta_4->insertItems(0,ports);
    }

    QStringList bauds;
    bauds << "Selecione" << "9600" << "19200" << "38400" << "57600" << "115200";
    ui->comboBox_banda_1->insertItems(0,bauds);
    ui->comboBox_banda_2->insertItems(0,bauds);
    ui->comboBox_banda_3->insertItems(0,bauds);
    ui->comboBox_banda_4->insertItems(0,bauds);

    connect(ui->pushButton_conecta,SIGNAL(clicked(bool)),this,SLOT(conectar()));

}

void portaSerial::conectar(){
    this->close();
}

QList<QString> portaSerial::getNomePorta(){

    QList<QString> listaPorta;

    QList<QString> listaCombo = {
        ui->comboBox_porta_1->currentText(),
        ui->comboBox_porta_2->currentText(),
        ui->comboBox_porta_3->currentText(),
        ui->comboBox_porta_4->currentText()
    };

    for (int i =0; i < listaCombo.size(); i++) {
        if(listaCombo[i] != "Selecione"){
            listaPorta.append(listaCombo[i]);
        }
    }

    return listaPorta;
}

QList<int> portaSerial::getValorBanda(){
    QList<int> listaBanda;

    QList<QString> listaCombo = {
        ui->comboBox_banda_1->currentText(),
        ui->comboBox_banda_2->currentText(),
        ui->comboBox_banda_3->currentText(),
        ui->comboBox_banda_4->currentText()
    };

    for (int i =0; i < listaCombo.size(); i++) {
        if(listaCombo[i] != "Selecione"){
            listaBanda.append(listaCombo[i].toUInt());
        }
    }

    return listaBanda;
}

portaSerial::~portaSerial()
{
    delete ui;
}
