#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "item.h"
#include "dialogcustom.h"

#include <QDialog>
#include <QTableView>
#include <QItemDelegate>
#include <QStandardItemModel>
#include <QAbstractItemView>
#include <QModelIndex>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_3_clicked();
    void add();
    void insert();
    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QStandardItemModel *model;
    Item *item;
    DialogCustom dialog;
    DialogCustom *dial;
    //DialogCustom dial(QWidget*, int, QString, QString, QString, QString, QString, double,int, double);

    QString itemID;
    QString itemName;
    QString itemSize;
    QString itemIce;
    QString itemSugar;
    QString itemPrice;
    double item_price;
    QString itemQuantity;
    int item_quantity;
    QString itemTotalPrice;
    double item_totalprice;

signals:
    /*void pressEditButton(QString item_id, QString item_name,
                         QString item_size, QString item_ice,
                         QString item_sugar, double item_price,
                         int item_quantity, double item_totalPrice);*/
};
#endif // MAINWINDOW_H
