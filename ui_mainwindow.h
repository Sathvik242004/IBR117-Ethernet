/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *ipLineEdit;
    QLabel *label_2;
    QLineEdit *portLineEdit;
    QLabel *label_3;
    QLineEdit *messageLineEdit;
    QPushButton *sendTcpButton;
    QPushButton *sendUdpButton;
    QLabel *label_5;
    QTextEdit *outputTextEdit;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QLineEdit *ListeningIp;
    QLabel *label_4;
    QLineEdit *TCPPortInput;
    QLabel *UDPPort;
    QLineEdit *UDPPortInput;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_2;
    QPushButton *startUDPListenerButton;
    QPushButton *startTCPListenerButton;
    QTextEdit *TCPTextEdit;
    QTextEdit *UDPTextEdit;
    QPushButton *StopListeningTCP;
    QPushButton *StopListeningUDP;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1024, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 210, 341, 151));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        ipLineEdit = new QLineEdit(layoutWidget);
        ipLineEdit->setObjectName(QStringLiteral("ipLineEdit"));

        gridLayout->addWidget(ipLineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        portLineEdit = new QLineEdit(layoutWidget);
        portLineEdit->setObjectName(QStringLiteral("portLineEdit"));

        gridLayout->addWidget(portLineEdit, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        messageLineEdit = new QLineEdit(layoutWidget);
        messageLineEdit->setObjectName(QStringLiteral("messageLineEdit"));

        gridLayout->addWidget(messageLineEdit, 2, 1, 1, 1);

        sendTcpButton = new QPushButton(layoutWidget);
        sendTcpButton->setObjectName(QStringLiteral("sendTcpButton"));

        gridLayout->addWidget(sendTcpButton, 3, 1, 1, 1);

        sendUdpButton = new QPushButton(layoutWidget);
        sendUdpButton->setObjectName(QStringLiteral("sendUdpButton"));

        gridLayout->addWidget(sendUdpButton, 4, 1, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(410, 50, 261, 61));
        label_5->setStyleSheet(QStringLiteral("font: 38pt \"Ubuntu\";"));
        outputTextEdit = new QTextEdit(centralwidget);
        outputTextEdit->setObjectName(QStringLiteral("outputTextEdit"));
        outputTextEdit->setGeometry(QRect(40, 450, 951, 101));
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(520, 150, 438, 58));
        gridLayout_3 = new QGridLayout(layoutWidget1);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 0, 1, 1, 1);

        ListeningIp = new QLineEdit(layoutWidget1);
        ListeningIp->setObjectName(QStringLiteral("ListeningIp"));

        gridLayout_3->addWidget(ListeningIp, 0, 2, 1, 2);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 1, 0, 1, 1);

        TCPPortInput = new QLineEdit(layoutWidget1);
        TCPPortInput->setObjectName(QStringLiteral("TCPPortInput"));

        gridLayout_3->addWidget(TCPPortInput, 1, 1, 1, 1);

        UDPPort = new QLabel(layoutWidget1);
        UDPPort->setObjectName(QStringLiteral("UDPPort"));

        gridLayout_3->addWidget(UDPPort, 1, 2, 1, 1);

        UDPPortInput = new QLineEdit(layoutWidget1);
        UDPPortInput->setObjectName(QStringLiteral("UDPPortInput"));

        gridLayout_3->addWidget(UDPPortInput, 1, 3, 1, 1);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(500, 210, 481, 151));
        gridLayout_2 = new QGridLayout(layoutWidget2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        startUDPListenerButton = new QPushButton(layoutWidget2);
        startUDPListenerButton->setObjectName(QStringLiteral("startUDPListenerButton"));

        gridLayout_2->addWidget(startUDPListenerButton, 1, 1, 1, 1);

        startTCPListenerButton = new QPushButton(layoutWidget2);
        startTCPListenerButton->setObjectName(QStringLiteral("startTCPListenerButton"));

        gridLayout_2->addWidget(startTCPListenerButton, 1, 0, 1, 1);

        TCPTextEdit = new QTextEdit(layoutWidget2);
        TCPTextEdit->setObjectName(QStringLiteral("TCPTextEdit"));

        gridLayout_2->addWidget(TCPTextEdit, 0, 0, 1, 1);

        UDPTextEdit = new QTextEdit(layoutWidget2);
        UDPTextEdit->setObjectName(QStringLiteral("UDPTextEdit"));

        gridLayout_2->addWidget(UDPTextEdit, 0, 1, 1, 1);

        StopListeningTCP = new QPushButton(layoutWidget2);
        StopListeningTCP->setObjectName(QStringLiteral("StopListeningTCP"));

        gridLayout_2->addWidget(StopListeningTCP, 2, 0, 1, 1);

        StopListeningUDP = new QPushButton(layoutWidget2);
        StopListeningUDP->setObjectName(QStringLiteral("StopListeningUDP"));

        gridLayout_2->addWidget(StopListeningUDP, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "Destination IP", 0));
        label_2->setText(QApplication::translate("MainWindow", "port", 0));
        label_3->setText(QApplication::translate("MainWindow", "Message", 0));
        sendTcpButton->setText(QApplication::translate("MainWindow", "tcpsend", 0));
        sendUdpButton->setText(QApplication::translate("MainWindow", "udp send", 0));
        label_5->setText(QApplication::translate("MainWindow", "TCP/UDP", 0));
        label_6->setText(QApplication::translate("MainWindow", "Listen on IP", 0));
        label_4->setText(QApplication::translate("MainWindow", "TCP Port", 0));
        UDPPort->setText(QApplication::translate("MainWindow", "UDP Port", 0));
        startUDPListenerButton->setText(QApplication::translate("MainWindow", "startUDPListen", 0));
        startTCPListenerButton->setText(QApplication::translate("MainWindow", "startTCPListen", 0));
        StopListeningTCP->setText(QApplication::translate("MainWindow", "StopListening", 0));
        StopListeningUDP->setText(QApplication::translate("MainWindow", "StopListening", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
