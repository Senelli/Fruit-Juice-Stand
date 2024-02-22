/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_watermelon;
    QLabel *label_watermelon;
    QLabel *label_3;
    QGroupBox *groupBox_peach;
    QLabel *label_peach;
    QLabel *label_9;
    QGroupBox *groupBox_orange;
    QLabel *label_orange;
    QLabel *label_2;
    QGroupBox *groupBox_cantaloupe;
    QLabel *label_cantaloupe;
    QLabel *label_6;
    QGroupBox *groupBox_apple;
    QLabel *label_apple;
    QLabel *label;
    QGroupBox *groupBox_mango;
    QLabel *label_mango;
    QLabel *label_4;
    QGroupBox *groupBox_papaya;
    QLabel *label_papaya;
    QLabel *label_5;
    QGroupBox *groupBox_avocado;
    QLabel *label_avocado;
    QLabel *label_7;
    QGroupBox *groupBox_pineapple;
    QLabel *label_pineapple;
    QLabel *label_8;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableView;
    QGridLayout *gridLayout_6;
    QLabel *label_TOTAL;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout;
    QLabel *label_datetxt;
    QLabel *label_Date;
    QLabel *label_transactiontxt;
    QLineEdit *lineEdit_OperatorID;
    QLabel *label_OperatorID;
    QLabel *label_customdesc;
    QLabel *label_TransactionID;
    QLabel *label_CustomerID;
    QPushButton *pushButton_Enter;
    QPushButton *pushButton_StartOrder;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_CustomerReceipt;
    QPushButton *pushButton_SalesRecord;
    QPushButton *pushButton_Pay;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1105, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(520, 9, 421, 391));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox_watermelon = new QGroupBox(gridLayoutWidget);
        groupBox_watermelon->setObjectName(QString::fromUtf8("groupBox_watermelon"));
        label_watermelon = new QLabel(groupBox_watermelon);
        label_watermelon->setObjectName(QString::fromUtf8("label_watermelon"));
        label_watermelon->setGeometry(QRect(30, 20, 81, 81));
        label_watermelon->setPixmap(QPixmap(QString::fromUtf8("watermelon.png")));
        label_watermelon->setScaledContents(true);
        label_3 = new QLabel(groupBox_watermelon);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 100, 131, 20));

        gridLayout_2->addWidget(groupBox_watermelon, 0, 2, 1, 1);

        groupBox_peach = new QGroupBox(gridLayoutWidget);
        groupBox_peach->setObjectName(QString::fromUtf8("groupBox_peach"));
        label_peach = new QLabel(groupBox_peach);
        label_peach->setObjectName(QString::fromUtf8("label_peach"));
        label_peach->setGeometry(QRect(30, 20, 81, 81));
        label_peach->setPixmap(QPixmap(QString::fromUtf8("peach.png")));
        label_peach->setScaledContents(true);
        label_9 = new QLabel(groupBox_peach);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 100, 131, 20));

        gridLayout_2->addWidget(groupBox_peach, 2, 2, 1, 1);

        groupBox_orange = new QGroupBox(gridLayoutWidget);
        groupBox_orange->setObjectName(QString::fromUtf8("groupBox_orange"));
        label_orange = new QLabel(groupBox_orange);
        label_orange->setObjectName(QString::fromUtf8("label_orange"));
        label_orange->setGeometry(QRect(30, 20, 81, 81));
        label_orange->setPixmap(QPixmap(QString::fromUtf8("orange.png")));
        label_orange->setScaledContents(true);
        label_2 = new QLabel(groupBox_orange);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 100, 131, 20));

        gridLayout_2->addWidget(groupBox_orange, 0, 1, 1, 1);

        groupBox_cantaloupe = new QGroupBox(gridLayoutWidget);
        groupBox_cantaloupe->setObjectName(QString::fromUtf8("groupBox_cantaloupe"));
        label_cantaloupe = new QLabel(groupBox_cantaloupe);
        label_cantaloupe->setObjectName(QString::fromUtf8("label_cantaloupe"));
        label_cantaloupe->setGeometry(QRect(30, 20, 81, 81));
        label_cantaloupe->setPixmap(QPixmap(QString::fromUtf8("cantaloupe3.png")));
        label_cantaloupe->setScaledContents(true);
        label_6 = new QLabel(groupBox_cantaloupe);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 100, 131, 20));

        gridLayout_2->addWidget(groupBox_cantaloupe, 1, 2, 1, 1);

        groupBox_apple = new QGroupBox(gridLayoutWidget);
        groupBox_apple->setObjectName(QString::fromUtf8("groupBox_apple"));
        label_apple = new QLabel(groupBox_apple);
        label_apple->setObjectName(QString::fromUtf8("label_apple"));
        label_apple->setGeometry(QRect(26, 20, 81, 81));
        label_apple->setPixmap(QPixmap(QString::fromUtf8("apple.png")));
        label_apple->setScaledContents(true);
        label = new QLabel(groupBox_apple);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 100, 131, 20));

        gridLayout_2->addWidget(groupBox_apple, 0, 0, 1, 1);

        groupBox_mango = new QGroupBox(gridLayoutWidget);
        groupBox_mango->setObjectName(QString::fromUtf8("groupBox_mango"));
        label_mango = new QLabel(groupBox_mango);
        label_mango->setObjectName(QString::fromUtf8("label_mango"));
        label_mango->setGeometry(QRect(30, 20, 81, 81));
        label_mango->setPixmap(QPixmap(QString::fromUtf8("mango8.png")));
        label_mango->setScaledContents(true);
        label_4 = new QLabel(groupBox_mango);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 100, 131, 20));

        gridLayout_2->addWidget(groupBox_mango, 1, 0, 1, 1);

        groupBox_papaya = new QGroupBox(gridLayoutWidget);
        groupBox_papaya->setObjectName(QString::fromUtf8("groupBox_papaya"));
        label_papaya = new QLabel(groupBox_papaya);
        label_papaya->setObjectName(QString::fromUtf8("label_papaya"));
        label_papaya->setGeometry(QRect(30, 20, 81, 81));
        label_papaya->setPixmap(QPixmap(QString::fromUtf8("papaya1.png")));
        label_papaya->setScaledContents(true);
        label_5 = new QLabel(groupBox_papaya);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 100, 131, 20));

        gridLayout_2->addWidget(groupBox_papaya, 1, 1, 1, 1);

        groupBox_avocado = new QGroupBox(gridLayoutWidget);
        groupBox_avocado->setObjectName(QString::fromUtf8("groupBox_avocado"));
        label_avocado = new QLabel(groupBox_avocado);
        label_avocado->setObjectName(QString::fromUtf8("label_avocado"));
        label_avocado->setGeometry(QRect(30, 20, 81, 81));
        label_avocado->setPixmap(QPixmap(QString::fromUtf8("avocado1.png")));
        label_avocado->setScaledContents(true);
        label_7 = new QLabel(groupBox_avocado);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 100, 131, 20));

        gridLayout_2->addWidget(groupBox_avocado, 2, 0, 1, 1);

        groupBox_pineapple = new QGroupBox(gridLayoutWidget);
        groupBox_pineapple->setObjectName(QString::fromUtf8("groupBox_pineapple"));
        label_pineapple = new QLabel(groupBox_pineapple);
        label_pineapple->setObjectName(QString::fromUtf8("label_pineapple"));
        label_pineapple->setGeometry(QRect(30, 10, 81, 101));
        label_pineapple->setPixmap(QPixmap(QString::fromUtf8("pineapple2.png")));
        label_pineapple->setScaledContents(true);
        label_8 = new QLabel(groupBox_pineapple);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 100, 131, 20));

        gridLayout_2->addWidget(groupBox_pineapple, 2, 1, 1, 1);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 110, 481, 291));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(verticalLayoutWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout_2->addWidget(tableView);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));

        verticalLayout_2->addLayout(gridLayout_6);

        label_TOTAL = new QLabel(verticalLayoutWidget);
        label_TOTAL->setObjectName(QString::fromUtf8("label_TOTAL"));
        QFont font;
        font.setPointSize(14);
        label_TOTAL->setFont(font);

        verticalLayout_2->addWidget(label_TOTAL);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_4->addWidget(pushButton_3);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_4->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_4);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 0, 481, 101));
        gridLayout = new QGridLayout(gridLayoutWidget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_datetxt = new QLabel(gridLayoutWidget_2);
        label_datetxt->setObjectName(QString::fromUtf8("label_datetxt"));

        gridLayout->addWidget(label_datetxt, 0, 0, 1, 1);

        label_Date = new QLabel(gridLayoutWidget_2);
        label_Date->setObjectName(QString::fromUtf8("label_Date"));

        gridLayout->addWidget(label_Date, 0, 1, 1, 1);

        label_transactiontxt = new QLabel(gridLayoutWidget_2);
        label_transactiontxt->setObjectName(QString::fromUtf8("label_transactiontxt"));

        gridLayout->addWidget(label_transactiontxt, 2, 0, 1, 1);

        lineEdit_OperatorID = new QLineEdit(gridLayoutWidget_2);
        lineEdit_OperatorID->setObjectName(QString::fromUtf8("lineEdit_OperatorID"));

        gridLayout->addWidget(lineEdit_OperatorID, 1, 1, 1, 1);

        label_OperatorID = new QLabel(gridLayoutWidget_2);
        label_OperatorID->setObjectName(QString::fromUtf8("label_OperatorID"));

        gridLayout->addWidget(label_OperatorID, 1, 0, 1, 1);

        label_customdesc = new QLabel(gridLayoutWidget_2);
        label_customdesc->setObjectName(QString::fromUtf8("label_customdesc"));

        gridLayout->addWidget(label_customdesc, 3, 0, 1, 1);

        label_TransactionID = new QLabel(gridLayoutWidget_2);
        label_TransactionID->setObjectName(QString::fromUtf8("label_TransactionID"));

        gridLayout->addWidget(label_TransactionID, 2, 1, 1, 1);

        label_CustomerID = new QLabel(gridLayoutWidget_2);
        label_CustomerID->setObjectName(QString::fromUtf8("label_CustomerID"));

        gridLayout->addWidget(label_CustomerID, 3, 1, 1, 1);

        pushButton_Enter = new QPushButton(gridLayoutWidget_2);
        pushButton_Enter->setObjectName(QString::fromUtf8("pushButton_Enter"));

        gridLayout->addWidget(pushButton_Enter, 1, 2, 1, 1);

        pushButton_StartOrder = new QPushButton(gridLayoutWidget_2);
        pushButton_StartOrder->setObjectName(QString::fromUtf8("pushButton_StartOrder"));

        gridLayout->addWidget(pushButton_StartOrder, 1, 3, 1, 1);

        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(520, 411, 421, 61));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_CustomerReceipt = new QPushButton(gridLayoutWidget_3);
        pushButton_CustomerReceipt->setObjectName(QString::fromUtf8("pushButton_CustomerReceipt"));

        gridLayout_3->addWidget(pushButton_CustomerReceipt, 1, 1, 1, 1);

        pushButton_SalesRecord = new QPushButton(gridLayoutWidget_3);
        pushButton_SalesRecord->setObjectName(QString::fromUtf8("pushButton_SalesRecord"));

        gridLayout_3->addWidget(pushButton_SalesRecord, 2, 1, 1, 1);

        pushButton_Pay = new QPushButton(centralwidget);
        pushButton_Pay->setObjectName(QString::fromUtf8("pushButton_Pay"));
        pushButton_Pay->setGeometry(QRect(15, 430, 471, 22));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1105, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_watermelon->setTitle(QApplication::translate("MainWindow", "Watermelon", nullptr));
        label_watermelon->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Small: $3.00            Large: $4.50", nullptr));
        groupBox_peach->setTitle(QApplication::translate("MainWindow", "Peach", nullptr));
        label_peach->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "Small: $3.50            Large: $5.00", nullptr));
        groupBox_orange->setTitle(QApplication::translate("MainWindow", "Orange", nullptr));
        label_orange->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Small: $3.50            Large: $5.00", nullptr));
        groupBox_cantaloupe->setTitle(QApplication::translate("MainWindow", "Cantaloupe", nullptr));
        label_cantaloupe->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "Small: $3.50            Large: $5.00", nullptr));
        groupBox_apple->setTitle(QApplication::translate("MainWindow", "Apple", nullptr));
        label_apple->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Small: $3.50            Large: $5.00", nullptr));
        groupBox_mango->setTitle(QApplication::translate("MainWindow", "Mango", nullptr));
        label_mango->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Small: $4.50            Large: $5.00", nullptr));
        groupBox_papaya->setTitle(QApplication::translate("MainWindow", "Papaya", nullptr));
        label_papaya->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "Small: $4.00            Large: $5.50", nullptr));
        groupBox_avocado->setTitle(QApplication::translate("MainWindow", "Avocado", nullptr));
        label_avocado->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "Small: $5.00            Large: $6.50", nullptr));
        groupBox_pineapple->setTitle(QApplication::translate("MainWindow", "Pineapple", nullptr));
        label_pineapple->setText(QString());
        label_8->setText(QApplication::translate("MainWindow", "Small: $4.00            Large: $5.50", nullptr));
        label_TOTAL->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Add", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Remove", nullptr));
        label_datetxt->setText(QApplication::translate("MainWindow", "Date:", nullptr));
        label_Date->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_transactiontxt->setText(QApplication::translate("MainWindow", "Transaction ID:", nullptr));
        label_OperatorID->setText(QApplication::translate("MainWindow", "Operator ID:", nullptr));
        label_customdesc->setText(QApplication::translate("MainWindow", "Customer ID:", nullptr));
        label_TransactionID->setText(QString());
        label_CustomerID->setText(QString());
        pushButton_Enter->setText(QApplication::translate("MainWindow", "Enter Operator ID", nullptr));
        pushButton_StartOrder->setText(QApplication::translate("MainWindow", "Start Order", nullptr));
        pushButton_CustomerReceipt->setText(QApplication::translate("MainWindow", "Print Customer Receipt", nullptr));
        pushButton_SalesRecord->setText(QApplication::translate("MainWindow", "Print Sales Record", nullptr));
        pushButton_Pay->setText(QApplication::translate("MainWindow", "Pay", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
