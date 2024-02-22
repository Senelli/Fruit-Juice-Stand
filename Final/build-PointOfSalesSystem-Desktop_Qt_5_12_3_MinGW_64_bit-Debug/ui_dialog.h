/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_ice;
    QRadioButton *radioButtonIce_Half;
    QRadioButton *radioButtonSugar_No;
    QLabel *label_size;
    QRadioButton *radioButtonSize_Small;
    QSpinBox *spinBox_Quantity;
    QRadioButton *radioButtonSize_Large;
    QLabel *label_juice;
    QRadioButton *radioButtonIce_Regular;
    QLabel *label_quantity;
    QRadioButton *radioButtonSugar_Regular;
    QLabel *label_sugar;
    QRadioButton *radioButtonIce_No;
    QRadioButton *radioButtonSuhgar_Half;
    QLabel *label_textTotal;
    QLabel *label_Total;
    QLabel *label_9;
    QComboBox *comboBox_Juice;
    QLabel *label_ItemID;
    QLabel *label_10;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(451, 276);
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(90, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        gridLayoutWidget = new QWidget(Dialog);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 20, 413, 201));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_ice = new QLabel(gridLayoutWidget);
        label_ice->setObjectName(QString::fromUtf8("label_ice"));

        gridLayout->addWidget(label_ice, 2, 0, 1, 1);

        radioButtonIce_Half = new QRadioButton(gridLayoutWidget);
        radioButtonIce_Half->setObjectName(QString::fromUtf8("radioButtonIce_Half"));

        gridLayout->addWidget(radioButtonIce_Half, 2, 2, 1, 1);

        radioButtonSugar_No = new QRadioButton(gridLayoutWidget);
        radioButtonSugar_No->setObjectName(QString::fromUtf8("radioButtonSugar_No"));

        gridLayout->addWidget(radioButtonSugar_No, 3, 1, 1, 1);

        label_size = new QLabel(gridLayoutWidget);
        label_size->setObjectName(QString::fromUtf8("label_size"));

        gridLayout->addWidget(label_size, 1, 0, 1, 1);

        radioButtonSize_Small = new QRadioButton(gridLayoutWidget);
        radioButtonSize_Small->setObjectName(QString::fromUtf8("radioButtonSize_Small"));

        gridLayout->addWidget(radioButtonSize_Small, 1, 1, 1, 1);

        spinBox_Quantity = new QSpinBox(gridLayoutWidget);
        spinBox_Quantity->setObjectName(QString::fromUtf8("spinBox_Quantity"));
        spinBox_Quantity->setMinimum(1);

        gridLayout->addWidget(spinBox_Quantity, 4, 1, 1, 1);

        radioButtonSize_Large = new QRadioButton(gridLayoutWidget);
        radioButtonSize_Large->setObjectName(QString::fromUtf8("radioButtonSize_Large"));

        gridLayout->addWidget(radioButtonSize_Large, 1, 2, 1, 1);

        label_juice = new QLabel(gridLayoutWidget);
        label_juice->setObjectName(QString::fromUtf8("label_juice"));

        gridLayout->addWidget(label_juice, 0, 0, 1, 1);

        radioButtonIce_Regular = new QRadioButton(gridLayoutWidget);
        radioButtonIce_Regular->setObjectName(QString::fromUtf8("radioButtonIce_Regular"));

        gridLayout->addWidget(radioButtonIce_Regular, 2, 3, 1, 1);

        label_quantity = new QLabel(gridLayoutWidget);
        label_quantity->setObjectName(QString::fromUtf8("label_quantity"));

        gridLayout->addWidget(label_quantity, 4, 0, 1, 1);

        radioButtonSugar_Regular = new QRadioButton(gridLayoutWidget);
        radioButtonSugar_Regular->setObjectName(QString::fromUtf8("radioButtonSugar_Regular"));

        gridLayout->addWidget(radioButtonSugar_Regular, 3, 3, 1, 1);

        label_sugar = new QLabel(gridLayoutWidget);
        label_sugar->setObjectName(QString::fromUtf8("label_sugar"));

        gridLayout->addWidget(label_sugar, 3, 0, 1, 1);

        radioButtonIce_No = new QRadioButton(gridLayoutWidget);
        radioButtonIce_No->setObjectName(QString::fromUtf8("radioButtonIce_No"));

        gridLayout->addWidget(radioButtonIce_No, 2, 1, 1, 1);

        radioButtonSuhgar_Half = new QRadioButton(gridLayoutWidget);
        radioButtonSuhgar_Half->setObjectName(QString::fromUtf8("radioButtonSuhgar_Half"));

        gridLayout->addWidget(radioButtonSuhgar_Half, 3, 2, 1, 1);

        label_textTotal = new QLabel(gridLayoutWidget);
        label_textTotal->setObjectName(QString::fromUtf8("label_textTotal"));

        gridLayout->addWidget(label_textTotal, 5, 0, 1, 1);

        label_Total = new QLabel(gridLayoutWidget);
        label_Total->setObjectName(QString::fromUtf8("label_Total"));

        gridLayout->addWidget(label_Total, 5, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 1, 3, 1, 1);

        comboBox_Juice = new QComboBox(gridLayoutWidget);
        comboBox_Juice->setObjectName(QString::fromUtf8("comboBox_Juice"));

        gridLayout->addWidget(comboBox_Juice, 0, 1, 1, 1);

        label_ItemID = new QLabel(gridLayoutWidget);
        label_ItemID->setObjectName(QString::fromUtf8("label_ItemID"));

        gridLayout->addWidget(label_ItemID, 0, 2, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 0, 3, 1, 1);

        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 240, 80, 22));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 240, 80, 22));

        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        label_ice->setText(QApplication::translate("Dialog", "Ice Level:", nullptr));
        radioButtonIce_Half->setText(QApplication::translate("Dialog", "Half Ice", nullptr));
        radioButtonSugar_No->setText(QApplication::translate("Dialog", "No Sugar", nullptr));
        label_size->setText(QApplication::translate("Dialog", "Size:*", nullptr));
        radioButtonSize_Small->setText(QApplication::translate("Dialog", "Small", nullptr));
        radioButtonSize_Large->setText(QApplication::translate("Dialog", "Large", nullptr));
        label_juice->setText(QApplication::translate("Dialog", "Juice:", nullptr));
        radioButtonIce_Regular->setText(QApplication::translate("Dialog", "Regular", nullptr));
        label_quantity->setText(QApplication::translate("Dialog", "Quantity:", nullptr));
        radioButtonSugar_Regular->setText(QApplication::translate("Dialog", "Regular", nullptr));
        label_sugar->setText(QApplication::translate("Dialog", "Sugar Level:", nullptr));
        radioButtonIce_No->setText(QApplication::translate("Dialog", "No Ice", nullptr));
        radioButtonSuhgar_Half->setText(QApplication::translate("Dialog", "Half Sugar", nullptr));
        label_textTotal->setText(QApplication::translate("Dialog", "Total:", nullptr));
        label_Total->setText(QApplication::translate("Dialog", "TextLabel", nullptr));
        label_9->setText(QApplication::translate("Dialog", "Please Pick a Size", nullptr));
        label_ItemID->setText(QApplication::translate("Dialog", "TextLabel", nullptr));
        label_10->setText(QApplication::translate("Dialog", "Please Pick a Juice", nullptr));
        pushButton->setText(QApplication::translate("Dialog", "Add", nullptr));
        pushButton_2->setText(QApplication::translate("Dialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
