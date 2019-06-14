#include <QApplication>
#include "client.h"
//#include "server.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QApplication::setApplicationDisplayName(Client::tr("Message Sender"));

    Client client;
    client.show();

    return app.exec();
}
