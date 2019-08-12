#ifndef PORTASERIAL_H
#define PORTASERIAL_H

#include <QDialog>
#include <QSerialPortInfo>

namespace Ui {
class portaSerial;
}

class portaSerial : public QDialog
{
    Q_OBJECT

public:
    explicit portaSerial(QWidget *parent = nullptr);
    QList<QString> getNomePorta();
    QList<int> getValorBanda();
    ~portaSerial();

public slots:
    void conectar();

private:
    Ui::portaSerial *ui;
};

#endif // PORTASERIAL_H
