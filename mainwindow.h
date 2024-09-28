#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include "ethernet.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_sendTcpButton_clicked();
    void on_sendUdpButton_clicked();
    void on_startTCPListenerButton_clicked();
    void on_startUDPListenerButton_clicked();
    void displayReceivedMessagetcp(const std::string& message);
    void displayReceivedMessageudp(const std::string& message);
    void on_StopListeningTCP_clicked();
    void on_StopListeningUDP_clicked();


private:
    Ui::MainWindow *ui;
    QString sendDestinationip="169.254.145.68";
    QString defaultPort="5000";
    QString defaultListeningIp="169.254.145.68";
    QString defaultSendIP="5000";

};

#endif // MAINWINDOW_H

