#ifndef ITEM_H
#define ITEM_H

#include <QObject>

class Item
{
public:
    Item(QObject *parent = nullptr);
    void setItemID(QString drink, int drinkSize);
    QString getItemIDtoString();
    QString getItemID();
    void setTotal(QString item, int number);
    double getTotal();
    QString getTotaltoString();
    void setIceLevel(int ice);
    void setSugarLevel(int sugar);
    QString getIceLevel();
    QString getSugarLevel();
    void setSize(int size);
    QString getSize();
    void setJuice(QString _juice);
    QString getJuice();
    void setQuantity(int num);
    int getQuantity();
    void setItemPrice(QString item);
    double getItemPrice();
private:
    QString juice;
    QString size;
    QString ItemID;
    int quantity;
    double price;
    double ItemPriceAmount;
    QString iceLevel;
    QString sugarLevel;
};

#endif // ITEM_H
