#ifndef ModbusTcpClient_H
#define ModbusTcpClient_H

#include <QMainWindow>
#include <QModbusDataUnit>
#include <QModbusClient>

namespace Ui {
class ModbusTcpClient;
}

class ModbusTcpClient : public QMainWindow
{
    Q_OBJECT

public:
    explicit ModbusTcpClient(QWidget *parent = 0);
//    QStringList list;
    ~ModbusTcpClient();

private slots:
    void on_sendButton_clicked();

    void on_connectButton_clicked();
    void onStateChanged(int state);

    void on_readButton_clicked();
    void readReady();
private:
    Ui::ModbusTcpClient *ui;
    QModbusClient *modbusDevice;//QModbusClient被QModbusRtuSerialMaster和QModbusTcpClient继成
    QVector<quint16> m_holdingRegisters;

};

#endif // ModbusTcpClient_H
