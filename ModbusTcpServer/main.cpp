#include "ModbusTcpServer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ModbusTcpServer w;
    w.show();

    return a.exec();
}
