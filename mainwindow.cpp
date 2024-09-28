#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ethernet.h"

bool Ethernet::stopListeningTCP = false;
bool Ethernet::stopListeningUDP = false;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->TCPPortInput->setText(defaultPort);
    ui->UDPPortInput->setText(defaultPort);
    ui->ListeningIp->setText(defaultListeningIp);
    ui->ipLineEdit->setText(sendDestinationip);
    ui->portLineEdit->setText(defaultSendIP);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_sendTcpButton_clicked() {
    QString ip = ui->ipLineEdit->text();
    int port = ui->portLineEdit->text().toInt();
    QString message = ui->messageLineEdit->text();

    int result = Ethernet::sendMessageTCP(ip.toStdString(), port, message.toStdString());
    if (result == 0) {
        ui->outputTextEdit->append("TCP Message sent: " + message);
    } else {
        ui->outputTextEdit->append("Failed to send TCP message.");
    }
}

void MainWindow::on_sendUdpButton_clicked() {
    QString ip = ui->ipLineEdit->text();
    int port = ui->portLineEdit->text().toInt();
    QString message = ui->messageLineEdit->text();

    int result = Ethernet::sendMessageUDP(ip.toStdString(), port, message.toStdString());
    if (result == 0) {
        ui->outputTextEdit->append("UDP Message sent: " + message);
    } else {
        ui->outputTextEdit->append("Failed to send UDP message.");
    }
}

void MainWindow::on_startTCPListenerButton_clicked() {
    QString ip = ui->ListeningIp->text();
    int port = ui->TCPPortInput->text().toInt();

    Ethernet::listenForMessagesTCP(port, [this](const std::string& message) {
        displayReceivedMessagetcp(message);
    });
    ui->outputTextEdit->append("TCP listener started.");
}

void MainWindow::on_startUDPListenerButton_clicked() {
    int port = ui->UDPPortInput->text().toInt();

    Ethernet::listenForMessagesUDP(port, [this](const std::string& message) {
        displayReceivedMessageudp(message);
    });
    ui->outputTextEdit->append("UDP listener started.");
}

void MainWindow::displayReceivedMessagetcp(const std::string& message) {
    ui->TCPTextEdit->append("Received: " + QString::fromStdString(message));
}
void MainWindow::displayReceivedMessageudp(const std::string& message) {
    ui->UDPTextEdit->append("Received: " + QString::fromStdString(message));
}

void MainWindow::on_StopListeningTCP_clicked(){
    Ethernet::stopListeningForTCP();
    ui->outputTextEdit->append("TCP Listening Stopped....");
}

void MainWindow::on_StopListeningUDP_clicked(){
    Ethernet::stopListeningForUDP();
    ui->outputTextEdit->append("UDP Listening Stopped....");
}
