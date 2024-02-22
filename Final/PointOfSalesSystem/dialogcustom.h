#ifndef DIALOGCUSTOM_H
#define DIALOGCUSTOM_H

#include <QDialog>
#include "item.h"

namespace Ui {
class DialogCustom;
}

class DialogCustom : public QDialog
{
    Q_OBJECT

public:
    explicit DialogCustom(QWidget *parent = nullptr);
    explicit DialogCustom(QWidget *parent, int r, QString &item_id, QString &item_name,
                               QString &item_size, QString &item_ice,
                               QString &item_sugar, double &item_price,
                               int &item_quantity, double &item_totalPrice);
    ~DialogCustom();
    QString getDrinkID();
    QString getDrinkName();
    QString getDrinkSize();
    QString getIceLevel();
    QString getSugarLevel();
    double getdrinkPrice();
    int getQuantity();
    double getDrinkTotal();

private slots:
    void on_radioButtonSize_Small_clicked();

    void on_radioButtonSize_Large_clicked();

    //void on_comboBox_Juice_currentIndexChanged(const QString &arg1);

    void on_radioButtonIce_No_clicked();

    void on_radioButtonIce_Half_clicked();

    void on_radioButtonIce_Regular_clicked();

    void on_radioButtonSugar_No_clicked();

    void on_radioButtonSuhgar_Half_clicked();

    void on_radioButtonSugar_Regular_clicked();

    void on_radioButtonSize_Small_clicked(bool checked);

    void on_label_ItemID_objectNameChanged(const QString &objectName);

    void on_label_ItemID_windowIconTextChanged(const QString &iconText);

    void on_spinBox_Quantity_textChanged(const QString &arg1);

    void on_spinBox_Quantity_valueChanged(int arg1);

    void on_pushButton_Add_clicked();

    void on_pushButton_Cancel_clicked();

    void on_buttonBox_accepted();

    /*void insert(QString item_id, QString item_name,
                QString item_size, QString item_ice,
                QString item_sugar, double item_price,
                int item_quantity, double item_totalPrice);*/

private:
    Ui::DialogCustom *ui;
    Item *item;
    QList<Item> item_list;
    QString drink;
    QString drinkSize;
    QString iceAmount;
    QString sugarAmount;
    int drinkQuantity;
    double totalDrinkAmount;
    int row;
    bool small;
    bool large;
    bool no_ice;
    bool half_ice;
    bool regular_ice;
    bool no_sugar;
    bool half_sugar;
    bool regular_sugar;

signals:
    void enterButtonPressed();
    void enterEditButtonPressed();
};

#endif // DIALOGCUSTOM_H
