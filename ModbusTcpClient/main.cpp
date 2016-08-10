#include "ModbusTcpClient.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ModbusTcpClient w;
    w.show();

    return a.exec();
}
