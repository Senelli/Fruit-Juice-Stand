/********************************************************************************
** Form generated from reading UI file 'dialogcustom.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCUSTOM_H
#define UI_DIALOGCUSTOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogCustom
{
public:
    QPushButton *pushButton_Cancel;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_ItemID;
    QLabel *label_juice;
    QLabel *label_PickSize;
    QLabel *label_size;
    QGroupBox *groupBox_Ice;
    QRadioButton *radioButtonIce_No;
    QRadioButton *radioButtonIce_Half;
    QRadioButton *radioButtonIce_Regular;
    QLabel *label_Total;
    QLabel *label_sugar;
    QLabel *label_ice;
    QSpinBox *spinBox_Quantity;
    QGroupBox *groupBox_Sugar;
    QRadioButton *radioButtonSugar_No;
    QRadioButton *radioButtonSugar_Half;
    QRadioButton *radioButtonSugar_Regular;
    QLabel *label_textTotal;
    QComboBox *comboBox_Juice;
    QGroupBox *groupBox_Size;
    QRadioButton *radioButtonSize_Small;
    QRadioButton *radioButtonSize_Large;
    QLabel *label_quantity;
    QLabel *label_PickJuice;
    QPushButton *pushButton_Add;

    void setupUi(QDialog *DialogCustom)
    {
        if (DialogCustom->objectName().isEmpty())
            DialogCustom->setObjectName(QString::fromUtf8("DialogCustom"));
        DialogCustom->resize(432, 364);
        pushButton_Cancel = new QPushButton(DialogCustom);
        pushButton_Cancel->setObjectName(QString::fromUtf8("pushButton_Cancel"));
        pushButton_Cancel->setGeometry(QRect(340, 330, 80, 22));
        gridLayoutWidget = new QWidget(DialogCustom);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 413, 311));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_ItemID = new QLabel(gridLayoutWidget);
        label_ItemID->setObjectName(QString::fromUtf8("label_ItemID"));

        gridLayout->addWidget(label_ItemID, 0, 2, 1, 1);

        label_juice = new QLabel(gridLayoutWidget);
        label_juice->setObjectName(QString::fromUtf8("label_juice"));

        gridLayout->addWidget(label_juice, 0, 0, 1, 1);

        label_PickSize = new QLabel(gridLayoutWidget);
        label_PickSize->setObjectName(QString::fromUtf8("label_PickSize"));

        gridLayout->addWidget(label_PickSize, 1, 3, 1, 1);

        label_size = new QLabel(gridLayoutWidget);
        label_size->setObjectName(QString::fromUtf8("label_size"));

        gridLayout->addWidget(label_size, 1, 0, 1, 1);

        groupBox_Ice = new QGroupBox(gridLayoutWidget);
        groupBox_Ice->setObjectName(QString::fromUtf8("groupBox_Ice"));
        radioButtonIce_No = new QRadioButton(groupBox_Ice);
        radioButtonIce_No->setObjectName(QString::fromUtf8("radioButtonIce_No"));
        radioButtonIce_No->setGeometry(QRect(0, 20, 72, 20));
        radioButtonIce_Half = new QRadioButton(groupBox_Ice);
        radioButtonIce_Half->setObjectName(QString::fromUtf8("radioButtonIce_Half"));
        radioButtonIce_Half->setGeometry(QRect(80, 20, 76, 20));
        radioButtonIce_Regular = new QRadioButton(groupBox_Ice);
        radioButtonIce_Regular->setObjectName(QString::fromUtf8("radioButtonIce_Regular"));
        radioButtonIce_Regular->setGeometry(QRect(170, 20, 91, 20));

        gridLayout->addWidget(groupBox_Ice, 2, 1, 1, 3);

        label_Total = new QLabel(gridLayoutWidget);
        label_Total->setObjectName(QString::fromUtf8("label_Total"));

        gridLayout->addWidget(label_Total, 5, 1, 1, 1);

        label_sugar = new QLabel(gridLayoutWidget);
        label_sugar->setObjectName(QString::fromUtf8("label_sugar"));

        gridLayout->addWidget(label_sugar, 3, 0, 1, 1);

        label_ice = new QLabel(gridLayoutWidget);
        label_ice->setObjectName(QString::fromUtf8("label_ice"));

        gridLayout->addWidget(label_ice, 2, 0, 1, 1);

        spinBox_Quantity = new QSpinBox(gridLayoutWidget);
        spinBox_Quantity->setObjectName(QString::fromUtf8("spinBox_Quantity"));
        spinBox_Quantity->setMinimum(1);

        gridLayout->addWidget(spinBox_Quantity, 4, 1, 1, 1);

        groupBox_Sugar = new QGroupBox(gridLayoutWidget);
        groupBox_Sugar->setObjectName(QString::fromUtf8("groupBox_Sugar"));
        radioButtonSugar_No = new QRadioButton(groupBox_Sugar);
        radioButtonSugar_No->setObjectName(QString::fromUtf8("radioButtonSugar_No"));
        radioButtonSugar_No->setGeometry(QRect(0, 20, 72, 20));
        radioButtonSugar_Half = new QRadioButton(groupBox_Sugar);
        radioButtonSugar_Half->setObjectName(QString::fromUtf8("radioButtonSugar_Half"));
        radioButtonSugar_Half->setGeometry(QRect(80, 20, 76, 20));
        radioButtonSugar_Regular = new QRadioButton(groupBox_Sugar);
        radioButtonSugar_Regular->setObjectName(QString::fromUtf8("radioButtonSugar_Regular"));
        radioButtonSugar_Regular->setGeometry(QRect(170, 20, 91, 20));

        gridLayout->addWidget(groupBox_Sugar, 3, 1, 1, 3);

        label_textTotal = new QLabel(gridLayoutWidget);
        label_textTotal->setObjectName(QString::fromUtf8("label_textTotal"));

        gridLayout->addWidget(label_textTotal, 5, 0, 1, 1);

        comboBox_Juice = new QComboBox(gridLayoutWidget);
        comboBox_Juice->setObjectName(QString::fromUtf8("comboBox_Juice"));

        gridLayout->addWidget(comboBox_Juice, 0, 1, 1, 1);

        groupBox_Size = new QGroupBox(gridLayoutWidget);
        groupBox_Size->setObjectName(QString::fromUtf8("groupBox_Size"));
        radioButtonSize_Small = new QRadioButton(groupBox_Size);
        radioButtonSize_Small->setObjectName(QString::fromUtf8("radioButtonSize_Small"));
        radioButtonSize_Small->setGeometry(QRect(0, 20, 76, 20));
        radioButtonSize_Large = new QRadioButton(groupBox_Size);
        radioButtonSize_Large->setObjectName(QString::fromUtf8("radioButtonSize_Large"));
        radioButtonSize_Large->setGeometry(QRect(80, 20, 72, 20));

        gridLayout->addWidget(groupBox_Size, 1, 1, 1, 2);

        label_quantity = new QLabel(gridLayoutWidget);
        label_quantity->setObjectName(QString::fromUtf8("label_quantity"));

        gridLayout->addWidget(label_quantity, 4, 0, 1, 1);

        label_PickJuice = new QLabel(gridLayoutWidget);
        label_PickJuice->setObjectName(QString::fromUtf8("label_PickJuice"));

        gridLayout->addWidget(label_PickJuice, 0, 3, 1, 1);

        pushButton_Add = new QPushButton(DialogCustom);
        pushButton_Add->setObjectName(QString::fromUtf8("pushButton_Add"));
        pushButton_Add->setGeometry(QRect(240, 330, 80, 22));

        retranslateUi(DialogCustom);

        QMetaObject::connectSlotsByName(DialogCustom);
    } // setupUi

    void retranslateUi(QDialog *DialogCustom)
    {
        DialogCustom->setWindowTitle(QApplication::translate("DialogCustom", "Dialog", nullptr));
        pushButton_Cancel->setText(QApplication::translate("DialogCustom", "Cancel", nullptr));
        label_ItemID->setText(QString());
        label_juice->setText(QApplication::translate("DialogCustom", "Juice:*", nullptr));
        label_PickSize->setText(QString());
        label_size->setText(QApplication::translate("DialogCustom", "Size:*", nullptr));
        groupBox_Ice->setTitle(QString());
        radioButtonIce_No->setText(QApplication::translate("DialogCustom", "No Ice", nullptr));
        radioButtonIce_Half->setText(QApplication::translate("DialogCustom", "Half Ice", nullptr));
        radioButtonIce_Regular->setText(QApplication::translate("DialogCustom", "Regular", nullptr));
        label_Total->setText(QString());
        label_sugar->setText(QApplication::translate("DialogCustom", "Sugar Level:", nullptr));
        label_ice->setText(QApplication::translate("DialogCustom", "Ice Level:", nullptr));
        groupBox_Sugar->setTitle(QString());
        radioButtonSugar_No->setText(QApplication::translate("DialogCustom", "No Sugar", nullptr));
        radioButtonSugar_Half->setText(QApplication::translate("DialogCustom", "Half Sugar", nullptr));
        radioButtonSugar_Regular->setText(QApplication::translate("DialogCustom", "Regular", nullptr));
        label_textTotal->setText(QApplication::translate("DialogCustom", "Total:", nullptr));
        groupBox_Size->setTitle(QString());
        radioButtonSize_Small->setText(QApplication::translate("DialogCustom", "Small", nullptr));
        radioButtonSize_Large->setText(QApplication::translate("DialogCustom", "Large", nullptr));
        label_quantity->setText(QApplication::translate("DialogCustom", "Quantity:", nullptr));
        label_PickJuice->setText(QString());
        pushButton_Add->setText(QApplication::translate("DialogCustom", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogCustom: public Ui_DialogCustom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCUSTOM_H
