/********************************************************************************
** Form generated from reading UI file 'portfolioMenu.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTFOLIOMENU_H
#define UI_PORTFOLIOMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *SellOrder;
    QPushButton *AddTransactionOrder;
    QPushButton *BuyOrder;
    QPushButton *Balance;
    QPushButton *CancelTransactionOrder;
    QPushButton *Back;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(1366, 768);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        Form->setPalette(palette);
        Form->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        gridLayoutWidget = new QWidget(Form);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 1371, 81));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        SellOrder = new QPushButton(gridLayoutWidget);
        SellOrder->setObjectName("SellOrder");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SellOrder->sizePolicy().hasHeightForWidth());
        SellOrder->setSizePolicy(sizePolicy);
        SellOrder->setMaximumSize(QSize(130, 45));
        SellOrder->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));

        gridLayout->addWidget(SellOrder, 2, 1, 1, 1);

        AddTransactionOrder = new QPushButton(gridLayoutWidget);
        AddTransactionOrder->setObjectName("AddTransactionOrder");
        sizePolicy.setHeightForWidth(AddTransactionOrder->sizePolicy().hasHeightForWidth());
        AddTransactionOrder->setSizePolicy(sizePolicy);
        AddTransactionOrder->setMaximumSize(QSize(130, 45));
        AddTransactionOrder->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));

        gridLayout->addWidget(AddTransactionOrder, 2, 3, 1, 1);

        BuyOrder = new QPushButton(gridLayoutWidget);
        BuyOrder->setObjectName("BuyOrder");
        sizePolicy.setHeightForWidth(BuyOrder->sizePolicy().hasHeightForWidth());
        BuyOrder->setSizePolicy(sizePolicy);
        BuyOrder->setMaximumSize(QSize(130, 45));
        BuyOrder->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));

        gridLayout->addWidget(BuyOrder, 2, 0, 1, 1);

        Balance = new QPushButton(gridLayoutWidget);
        Balance->setObjectName("Balance");
        sizePolicy.setHeightForWidth(Balance->sizePolicy().hasHeightForWidth());
        Balance->setSizePolicy(sizePolicy);
        Balance->setMaximumSize(QSize(130, 45));
        Balance->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));

        gridLayout->addWidget(Balance, 2, 2, 1, 1);

        CancelTransactionOrder = new QPushButton(gridLayoutWidget);
        CancelTransactionOrder->setObjectName("CancelTransactionOrder");
        sizePolicy.setHeightForWidth(CancelTransactionOrder->sizePolicy().hasHeightForWidth());
        CancelTransactionOrder->setSizePolicy(sizePolicy);
        CancelTransactionOrder->setMaximumSize(QSize(130, 45));
        CancelTransactionOrder->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));

        gridLayout->addWidget(CancelTransactionOrder, 2, 4, 1, 1);

        Back = new QPushButton(Form);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(1110, 620, 130, 45));
        sizePolicy.setHeightForWidth(Back->sizePolicy().hasHeightForWidth());
        Back->setSizePolicy(sizePolicy);
        Back->setMaximumSize(QSize(130, 45));
        Back->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        SellOrder->setText(QCoreApplication::translate("Form", "Sell order", nullptr));
        AddTransactionOrder->setText(QCoreApplication::translate("Form", "Add transaction order", nullptr));
        BuyOrder->setText(QCoreApplication::translate("Form", "Buy order", nullptr));
        Balance->setText(QCoreApplication::translate("Form", "Balance ", nullptr));
        CancelTransactionOrder->setText(QCoreApplication::translate("Form", "Cancel transaction order", nullptr));
        Back->setText(QCoreApplication::translate("Form", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTFOLIOMENU_H
