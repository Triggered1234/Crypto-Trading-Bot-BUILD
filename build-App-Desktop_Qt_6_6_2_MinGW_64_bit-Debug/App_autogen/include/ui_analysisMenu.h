/********************************************************************************
** Form generated from reading UI file 'analysisMenu.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALYSISMENU_H
#define UI_ANALYSISMENU_H

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
    QPushButton *ViewTransactionHistory;
    QPushButton *GenerateReport;
    QPushButton *Back;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(1366, 768);
        Form->setAutoFillBackground(false);
        Form->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        gridLayoutWidget = new QWidget(Form);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(-10, 10, 1371, 81));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        ViewTransactionHistory = new QPushButton(gridLayoutWidget);
        ViewTransactionHistory->setObjectName("ViewTransactionHistory");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ViewTransactionHistory->sizePolicy().hasHeightForWidth());
        ViewTransactionHistory->setSizePolicy(sizePolicy);
        ViewTransactionHistory->setMaximumSize(QSize(130, 45));
        ViewTransactionHistory->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));

        gridLayout->addWidget(ViewTransactionHistory, 2, 1, 1, 1);

        GenerateReport = new QPushButton(gridLayoutWidget);
        GenerateReport->setObjectName("GenerateReport");
        sizePolicy.setHeightForWidth(GenerateReport->sizePolicy().hasHeightForWidth());
        GenerateReport->setSizePolicy(sizePolicy);
        GenerateReport->setMaximumSize(QSize(130, 45));
        GenerateReport->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));

        gridLayout->addWidget(GenerateReport, 2, 0, 1, 1);

        Back = new QPushButton(Form);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(1100, 630, 130, 45));
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
        ViewTransactionHistory->setText(QCoreApplication::translate("Form", "View transaction history", nullptr));
        GenerateReport->setText(QCoreApplication::translate("Form", "Generate report ", nullptr));
        Back->setText(QCoreApplication::translate("Form", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALYSISMENU_H
