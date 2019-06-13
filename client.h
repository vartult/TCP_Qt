#ifndef CLIENT_H
#define CLIENT_H
#define SERVER_H

#include <QDataStream>
#include <QDialog>
#include <QTcpSocket>
#include <QString>
#include <QVector>

class QTcpServer;
class QComboBox;
class QLabel;
class QLineEdit;
class QPushButton;
class QTcpSocket;
class QNetworkSession;

class Client : public QDialog
{
    Q_OBJECT

public:
    explicit Client(QWidget *parent = nullptr);

private slots:
    void requestNewFortune();
    void readFortune();
    void displayError(QAbstractSocket::SocketError socketError);
    void enableGetFortuneButton();
    void sessionOpened();
    void sessionOpened_server();
    void sendFortune();

private:
    QComboBox *hostCombo = nullptr;
    QLineEdit *portLineEdit = nullptr;
    QLabel *statusLabel = nullptr;
    QPushButton *getFortuneButton = nullptr;

    QTcpServer *tcpServer = nullptr;
    QTcpSocket *tcpSocket = nullptr;
    QDataStream in;
    QString currentFortune;


    QVector<QString> fortunes;
    QNetworkSession *networkSession = nullptr;

};

#endif
