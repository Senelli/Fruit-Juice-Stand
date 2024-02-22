#ifndef ORDER_H
#define ORDER_H

#include <QObject>
#include <QString>
#include <QDateTime>

class Order
{
public:
    Order(QObject *parent);
    void setItemID(QString drink, int drinkSize);
    QString getItemID();
private:
    QString juice;
    QString size;
    QString ItemID;
    int quantity;
    double ItemPriceAmount;
    QString TransactionId;
    QDate date;
    QDate time;
    QString OperatorID;
    QString CustomerID;
};

#endif // ORDER_H
