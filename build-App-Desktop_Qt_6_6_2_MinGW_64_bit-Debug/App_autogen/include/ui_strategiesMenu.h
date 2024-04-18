/********************************************************************************
** Form generated from reading UI file 'strategiesMenu.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRATEGIESMENU_H
#define UI_STRATEGIESMENU_H

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
    QPushButton *strategiesBackButton_2;
    QPushButton *predefinedStrategiesButton;
    QPushButton *userStrategiesButton;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(1366, 768);
        Form->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        gridLayoutWidget = new QWidget(Form);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 1371, 791));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        strategiesBackButton_2 = new QPushButton(gridLayoutWidget);
        strategiesBackButton_2->setObjectName("strategiesBackButton_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(strategiesBackButton_2->sizePolicy().hasHeightForWidth());
        strategiesBackButton_2->setSizePolicy(sizePolicy);
        strategiesBackButton_2->setMinimumSize(QSize(150, 50));
        strategiesBackButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 43, 43);"));

        gridLayout->addWidget(strategiesBackButton_2, 2, 0, 1, 1);

        predefinedStrategiesButton = new QPushButton(gridLayoutWidget);
        predefinedStrategiesButton->setObjectName("predefinedStrategiesButton");
        sizePolicy.setHeightForWidth(predefinedStrategiesButton->sizePolicy().hasHeightForWidth());
        predefinedStrategiesButton->setSizePolicy(sizePolicy);
        predefinedStrategiesButton->setMinimumSize(QSize(150, 50));
        predefinedStrategiesButton->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 43, 43);"));

        gridLayout->addWidget(predefinedStrategiesButton, 0, 0, 1, 1);

        userStrategiesButton = new QPushButton(gridLayoutWidget);
        userStrategiesButton->setObjectName("userStrategiesButton");
        sizePolicy.setHeightForWidth(userStrategiesButton->sizePolicy().hasHeightForWidth());
        userStrategiesButton->setSizePolicy(sizePolicy);
        userStrategiesButton->setMinimumSize(QSize(150, 50));
        userStrategiesButton->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 43, 43);"));

        gridLayout->addWidget(userStrategiesButton, 1, 0, 1, 1);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        strategiesBackButton_2->setText(QCoreApplication::translate("Form", "Go back", nullptr));
        predefinedStrategiesButton->setText(QCoreApplication::translate("Form", "Predefined Strategies ", nullptr));
        userStrategiesButton->setText(QCoreApplication::translate("Form", "Your strategies", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRATEGIESMENU_H
