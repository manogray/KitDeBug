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

    QList<QSerialPort*> listaSerialPort;
    int ohmimetro;
    int amperimetro;
    int voltimetro;
    int capacimetro;


public slots:
    void lerDoSerial(int valor = 0);
    void circuitoResistencia();
    void circuitoCorrente();

private slots:
    void on_actionPorta_Serial_triggered();

    void on_actionSair_triggered();


signals:
    void lerDoSerial(bool ok);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
