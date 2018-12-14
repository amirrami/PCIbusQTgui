#ifndef PCI_H
#define PCI_H
#include <QString>
#include <QChar>

class PCI
{
public:
    PCI();
    void SetReset(QString bit);
    void SetFrame(QString bit);
    void SetAD(QString bit);
    void Setdata(QString bit);
    void SetCBE(QString bit);
    void SetControl_Byte(QString bit);
    void SetIRDY(QString bit);
    void SetTRDY(QString bit);
    QChar GetFrame();
    QChar GetAD();
    QString GetData();
    QChar GetCBE();
    QString GetControl_Byte();
    QChar GetIRDY();
    QChar GetTRDY();
    QChar GetClk(int ClockEdge);
    QChar GetReset();

private:
   QString Frame;
   QString AD;
   QString Data;
   QString CBE;
   QString Control_Byte;
   QString IRDY;
   QString TRDY;
   QString DEVSEL;
   QString Clk;
   QString Reset;

};

#endif // PCI_H
