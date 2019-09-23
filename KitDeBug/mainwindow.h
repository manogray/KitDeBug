#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <iostream>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QSerialPort* multimetro;
    QSerialPort* geradorSinal;
    QSerialPort* ociloscopio;
    QSerialPort* fonte;


public slots:
    void lerDoSerial(QString modulo);
    void circuitoResistencia();
    void circuitoCorrente();
    void circuitoTensao();

private slots:
    void on_actionPorta_Serial_triggered();

    void on_actionSair_triggered();


signals:
    void lerDoSerial(bool ok);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
