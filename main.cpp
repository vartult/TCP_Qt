#include <QApplication>
#include "client.h"
#include "server.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QApplication::setApplicationDisplayName(Client::tr("Client"));
    Client client;
    client.show();
    return app.exec();
}
