/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *mainMenu;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *riskManagementButton;
    QPushButton *analysisButton;
    QPushButton *strategiesButton;
    QPushButton *exitButton;
    QPushButton *portfolioButton;
    QWidget *apiMenu;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_4;
    QLineEdit *secretApiKeyInput;
    QLineEdit *apiKeyInput;
    QPushButton *apiLoginButton;
    QWidget *portfolioMenu;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *SellOrder;
    QPushButton *AddTransactionOrder;
    QPushButton *BuyOrder;
    QPushButton *Balance;
    QPushButton *CancelTransactionOrder;
    QPushButton *portfolioBackButton;
    QWidget *analysisMenu;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *ViewTransactionHistory;
    QPushButton *GenerateReport;
    QPushButton *analysisBackButton;
    QWidget *strategiesMenu;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_9;
    QPushButton *strategiesBackButton;
    QPushButton *predefinedStrategiesButton_6;
    QPushButton *userStrategiesButton_6;
    QWidget *riskManagementMenu;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_10;
    QToolButton *portfolioButton_10;
    QToolButton *portfolioButton_5;
    QToolButton *portfolioButton_7;
    QToolButton *portfolioButton_6;
    QToolButton *portfolioButton_9;
    QToolButton *portfolioButton_4;
    QToolButton *riskManagementBackButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1366, 768);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 1366, 718));
        mainMenu = new QWidget();
        mainMenu->setObjectName("mainMenu");
        gridLayoutWidget = new QWidget(mainMenu);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 1371, 711));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        riskManagementButton = new QPushButton(gridLayoutWidget);
        riskManagementButton->setObjectName("riskManagementButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(riskManagementButton->sizePolicy().hasHeightForWidth());
        riskManagementButton->setSizePolicy(sizePolicy);
        riskManagementButton->setMaximumSize(QSize(130, 45));
        riskManagementButton->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));

        gridLayout->addWidget(riskManagementButton, 3, 0, 1, 1);

        analysisButton = new QPushButton(gridLayoutWidget);
        analysisButton->setObjectName("analysisButton");
        sizePolicy.setHeightForWidth(analysisButton->sizePolicy().hasHeightForWidth());
        analysisButton->setSizePolicy(sizePolicy);
        analysisButton->setMaximumSize(QSize(130, 45));
        analysisButton->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));

        gridLayout->addWidget(analysisButton, 2, 0, 1, 1);

        strategiesButton = new QPushButton(gridLayoutWidget);
        strategiesButton->setObjectName("strategiesButton");
        sizePolicy.setHeightForWidth(strategiesButton->sizePolicy().hasHeightForWidth());
        strategiesButton->setSizePolicy(sizePolicy);
        strategiesButton->setMaximumSize(QSize(130, 45));
        strategiesButton->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));

        gridLayout->addWidget(strategiesButton, 1, 0, 1, 1);

        exitButton = new QPushButton(gridLayoutWidget);
        exitButton->setObjectName("exitButton");
        sizePolicy.setHeightForWidth(exitButton->sizePolicy().hasHeightForWidth());
        exitButton->setSizePolicy(sizePolicy);
        exitButton->setMaximumSize(QSize(130, 45));
        exitButton->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));

        gridLayout->addWidget(exitButton, 4, 0, 1, 1);

        portfolioButton = new QPushButton(gridLayoutWidget);
        portfolioButton->setObjectName("portfolioButton");
        sizePolicy.setHeightForWidth(portfolioButton->sizePolicy().hasHeightForWidth());
        portfolioButton->setSizePolicy(sizePolicy);
        portfolioButton->setMaximumSize(QSize(130, 45));
        portfolioButton->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));

        gridLayout->addWidget(portfolioButton, 0, 0, 1, 1);

        stackedWidget->addWidget(mainMenu);
        apiMenu = new QWidget();
        apiMenu->setObjectName("apiMenu");
        gridLayoutWidget_6 = new QWidget(apiMenu);
        gridLayoutWidget_6->setObjectName("gridLayoutWidget_6");
        gridLayoutWidget_6->setGeometry(QRect(0, 180, 1361, 321));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_4->setSpacing(1);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        secretApiKeyInput = new QLineEdit(gridLayoutWidget_6);
        secretApiKeyInput->setObjectName("secretApiKeyInput");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(secretApiKeyInput->sizePolicy().hasHeightForWidth());
        secretApiKeyInput->setSizePolicy(sizePolicy1);
        secretApiKeyInput->setMinimumSize(QSize(400, 50));
        secretApiKeyInput->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 255, 49);"));
        secretApiKeyInput->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(secretApiKeyInput, 3, 0, 1, 1);

        apiKeyInput = new QLineEdit(gridLayoutWidget_6);
        apiKeyInput->setObjectName("apiKeyInput");
        sizePolicy1.setHeightForWidth(apiKeyInput->sizePolicy().hasHeightForWidth());
        apiKeyInput->setSizePolicy(sizePolicy1);
        apiKeyInput->setMinimumSize(QSize(400, 50));
        apiKeyInput->setLayoutDirection(Qt::LeftToRight);
        apiKeyInput->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 255, 49);"));
        apiKeyInput->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(apiKeyInput, 2, 0, 1, 1);

        apiLoginButton = new QPushButton(gridLayoutWidget_6);
        apiLoginButton->setObjectName("apiLoginButton");
        apiLoginButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 64);"));

        gridLayout_4->addWidget(apiLoginButton, 4, 0, 1, 1);

        stackedWidget->addWidget(apiMenu);
        portfolioMenu = new QWidget();
        portfolioMenu->setObjectName("portfolioMenu");
        portfolioMenu->setMaximumSize(QSize(1366, 718));
        gridLayoutWidget_2 = new QWidget(portfolioMenu);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(0, 0, 1371, 81));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        SellOrder = new QPushButton(gridLayoutWidget_2);
        SellOrder->setObjectName("SellOrder");
        sizePolicy.setHeightForWidth(SellOrder->sizePolicy().hasHeightForWidth());
        SellOrder->setSizePolicy(sizePolicy);
        SellOrder->setMaximumSize(QSize(130, 45));
        SellOrder->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));

        gridLayout_2->addWidget(SellOrder, 2, 1, 1, 1);

        AddTransactionOrder = new QPushButton(gridLayoutWidget_2);
        AddTransactionOrder->setObjectName("AddTransactionOrder");
        sizePolicy.setHeightForWidth(AddTransactionOrder->sizePolicy().hasHeightForWidth());
        AddTransactionOrder->setSizePolicy(sizePolicy);
        AddTransactionOrder->setMaximumSize(QSize(130, 45));
        AddTransactionOrder->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));

        gridLayout_2->addWidget(AddTransactionOrder, 2, 3, 1, 1);

        BuyOrder = new QPushButton(gridLayoutWidget_2);
        BuyOrder->setObjectName("BuyOrder");
        sizePolicy.setHeightForWidth(BuyOrder->sizePolicy().hasHeightForWidth());
        BuyOrder->setSizePolicy(sizePolicy);
        BuyOrder->setMaximumSize(QSize(130, 45));
        BuyOrder->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));

        gridLayout_2->addWidget(BuyOrder, 2, 0, 1, 1);

        Balance = new QPushButton(gridLayoutWidget_2);
        Balance->setObjectName("Balance");
        sizePolicy.setHeightForWidth(Balance->sizePolicy().hasHeightForWidth());
        Balance->setSizePolicy(sizePolicy);
        Balance->setMaximumSize(QSize(130, 45));
        Balance->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));

        gridLayout_2->addWidget(Balance, 2, 2, 1, 1);

        CancelTransactionOrder = new QPushButton(gridLayoutWidget_2);
        CancelTransactionOrder->setObjectName("CancelTransactionOrder");
        sizePolicy.setHeightForWidth(CancelTransactionOrder->sizePolicy().hasHeightForWidth());
        CancelTransactionOrder->setSizePolicy(sizePolicy);
        CancelTransactionOrder->setMaximumSize(QSize(130, 45));
        CancelTransactionOrder->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));

        gridLayout_2->addWidget(CancelTransactionOrder, 2, 4, 1, 1);

        portfolioBackButton = new QPushButton(portfolioMenu);
        portfolioBackButton->setObjectName("portfolioBackButton");
        portfolioBackButton->setGeometry(QRect(1220, 660, 130, 45));
        sizePolicy.setHeightForWidth(portfolioBackButton->sizePolicy().hasHeightForWidth());
        portfolioBackButton->setSizePolicy(sizePolicy);
        portfolioBackButton->setMaximumSize(QSize(130, 45));
        portfolioBackButton->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));
        stackedWidget->addWidget(portfolioMenu);
        analysisMenu = new QWidget();
        analysisMenu->setObjectName("analysisMenu");
        gridLayoutWidget_3 = new QWidget(analysisMenu);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(0, 0, 1371, 81));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        ViewTransactionHistory = new QPushButton(gridLayoutWidget_3);
        ViewTransactionHistory->setObjectName("ViewTransactionHistory");
        sizePolicy.setHeightForWidth(ViewTransactionHistory->sizePolicy().hasHeightForWidth());
        ViewTransactionHistory->setSizePolicy(sizePolicy);
        ViewTransactionHistory->setMaximumSize(QSize(130, 45));
        ViewTransactionHistory->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));

        gridLayout_3->addWidget(ViewTransactionHistory, 2, 1, 1, 1);

        GenerateReport = new QPushButton(gridLayoutWidget_3);
        GenerateReport->setObjectName("GenerateReport");
        sizePolicy.setHeightForWidth(GenerateReport->sizePolicy().hasHeightForWidth());
        GenerateReport->setSizePolicy(sizePolicy);
        GenerateReport->setMaximumSize(QSize(130, 45));
        GenerateReport->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));

        gridLayout_3->addWidget(GenerateReport, 2, 0, 1, 1);

        analysisBackButton = new QPushButton(analysisMenu);
        analysisBackButton->setObjectName("analysisBackButton");
        analysisBackButton->setGeometry(QRect(1110, 620, 130, 45));
        sizePolicy.setHeightForWidth(analysisBackButton->sizePolicy().hasHeightForWidth());
        analysisBackButton->setSizePolicy(sizePolicy);
        analysisBackButton->setMaximumSize(QSize(130, 45));
        analysisBackButton->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));
        stackedWidget->addWidget(analysisMenu);
        strategiesMenu = new QWidget();
        strategiesMenu->setObjectName("strategiesMenu");
        gridLayoutWidget_4 = new QWidget(strategiesMenu);
        gridLayoutWidget_4->setObjectName("gridLayoutWidget_4");
        gridLayoutWidget_4->setGeometry(QRect(0, 0, 1371, 791));
        gridLayout_9 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_9->setObjectName("gridLayout_9");
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        strategiesBackButton = new QPushButton(gridLayoutWidget_4);
        strategiesBackButton->setObjectName("strategiesBackButton");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(strategiesBackButton->sizePolicy().hasHeightForWidth());
        strategiesBackButton->setSizePolicy(sizePolicy2);
        strategiesBackButton->setMinimumSize(QSize(150, 50));
        strategiesBackButton->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 43, 43);"));

        gridLayout_9->addWidget(strategiesBackButton, 2, 0, 1, 1);

        predefinedStrategiesButton_6 = new QPushButton(gridLayoutWidget_4);
        predefinedStrategiesButton_6->setObjectName("predefinedStrategiesButton_6");
        sizePolicy2.setHeightForWidth(predefinedStrategiesButton_6->sizePolicy().hasHeightForWidth());
        predefinedStrategiesButton_6->setSizePolicy(sizePolicy2);
        predefinedStrategiesButton_6->setMinimumSize(QSize(150, 50));
        predefinedStrategiesButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 43, 43);"));

        gridLayout_9->addWidget(predefinedStrategiesButton_6, 0, 0, 1, 1);

        userStrategiesButton_6 = new QPushButton(gridLayoutWidget_4);
        userStrategiesButton_6->setObjectName("userStrategiesButton_6");
        sizePolicy2.setHeightForWidth(userStrategiesButton_6->sizePolicy().hasHeightForWidth());
        userStrategiesButton_6->setSizePolicy(sizePolicy2);
        userStrategiesButton_6->setMinimumSize(QSize(150, 50));
        userStrategiesButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 43, 43);"));

        gridLayout_9->addWidget(userStrategiesButton_6, 1, 0, 1, 1);

        stackedWidget->addWidget(strategiesMenu);
        riskManagementMenu = new QWidget();
        riskManagementMenu->setObjectName("riskManagementMenu");
        gridLayoutWidget_5 = new QWidget(riskManagementMenu);
        gridLayoutWidget_5->setObjectName("gridLayoutWidget_5");
        gridLayoutWidget_5->setGeometry(QRect(0, 0, 1361, 771));
        gridLayout_10 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_10->setObjectName("gridLayout_10");
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        portfolioButton_10 = new QToolButton(gridLayoutWidget_5);
        portfolioButton_10->setObjectName("portfolioButton_10");
        sizePolicy.setHeightForWidth(portfolioButton_10->sizePolicy().hasHeightForWidth());
        portfolioButton_10->setSizePolicy(sizePolicy);
        portfolioButton_10->setMaximumSize(QSize(130, 45));
        portfolioButton_10->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));

        gridLayout_10->addWidget(portfolioButton_10, 0, 5, 1, 1);

        portfolioButton_5 = new QToolButton(gridLayoutWidget_5);
        portfolioButton_5->setObjectName("portfolioButton_5");
        sizePolicy.setHeightForWidth(portfolioButton_5->sizePolicy().hasHeightForWidth());
        portfolioButton_5->setSizePolicy(sizePolicy);
        portfolioButton_5->setMaximumSize(QSize(130, 45));
        portfolioButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));

        gridLayout_10->addWidget(portfolioButton_5, 0, 3, 1, 1);

        portfolioButton_7 = new QToolButton(gridLayoutWidget_5);
        portfolioButton_7->setObjectName("portfolioButton_7");
        sizePolicy.setHeightForWidth(portfolioButton_7->sizePolicy().hasHeightForWidth());
        portfolioButton_7->setSizePolicy(sizePolicy);
        portfolioButton_7->setMaximumSize(QSize(130, 45));
        portfolioButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));

        gridLayout_10->addWidget(portfolioButton_7, 0, 2, 1, 1);

        portfolioButton_6 = new QToolButton(gridLayoutWidget_5);
        portfolioButton_6->setObjectName("portfolioButton_6");
        sizePolicy.setHeightForWidth(portfolioButton_6->sizePolicy().hasHeightForWidth());
        portfolioButton_6->setSizePolicy(sizePolicy);
        portfolioButton_6->setMaximumSize(QSize(130, 45));
        portfolioButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));

        gridLayout_10->addWidget(portfolioButton_6, 0, 4, 1, 1);

        portfolioButton_9 = new QToolButton(gridLayoutWidget_5);
        portfolioButton_9->setObjectName("portfolioButton_9");
        sizePolicy.setHeightForWidth(portfolioButton_9->sizePolicy().hasHeightForWidth());
        portfolioButton_9->setSizePolicy(sizePolicy);
        portfolioButton_9->setMaximumSize(QSize(130, 45));
        portfolioButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));

        gridLayout_10->addWidget(portfolioButton_9, 0, 1, 1, 1);

        portfolioButton_4 = new QToolButton(gridLayoutWidget_5);
        portfolioButton_4->setObjectName("portfolioButton_4");
        sizePolicy.setHeightForWidth(portfolioButton_4->sizePolicy().hasHeightForWidth());
        portfolioButton_4->setSizePolicy(sizePolicy);
        portfolioButton_4->setMaximumSize(QSize(130, 45));
        portfolioButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));

        gridLayout_10->addWidget(portfolioButton_4, 0, 0, 1, 1);

        riskManagementBackButton = new QToolButton(gridLayoutWidget_5);
        riskManagementBackButton->setObjectName("riskManagementBackButton");
        sizePolicy.setHeightForWidth(riskManagementBackButton->sizePolicy().hasHeightForWidth());
        riskManagementBackButton->setSizePolicy(sizePolicy);
        riskManagementBackButton->setMaximumSize(QSize(130, 45));
        riskManagementBackButton->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 62, 58);"));

        gridLayout_10->addWidget(riskManagementBackButton, 1, 5, 1, 1);

        stackedWidget->addWidget(riskManagementMenu);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1366, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        riskManagementButton->setText(QCoreApplication::translate("MainWindow", "Risk Management", nullptr));
        analysisButton->setText(QCoreApplication::translate("MainWindow", "Analysis", nullptr));
        strategiesButton->setText(QCoreApplication::translate("MainWindow", "Strategies", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
        portfolioButton->setText(QCoreApplication::translate("MainWindow", "Portofoliu", nullptr));
        secretApiKeyInput->setText(QCoreApplication::translate("MainWindow", "API Secret Key", nullptr));
        apiKeyInput->setText(QCoreApplication::translate("MainWindow", "API Key", nullptr));
        apiLoginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        SellOrder->setText(QCoreApplication::translate("MainWindow", "Sell order", nullptr));
        AddTransactionOrder->setText(QCoreApplication::translate("MainWindow", "Add transaction order", nullptr));
        BuyOrder->setText(QCoreApplication::translate("MainWindow", "Buy order", nullptr));
        Balance->setText(QCoreApplication::translate("MainWindow", "Balance ", nullptr));
        CancelTransactionOrder->setText(QCoreApplication::translate("MainWindow", "Cancel transaction order", nullptr));
        portfolioBackButton->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        ViewTransactionHistory->setText(QCoreApplication::translate("MainWindow", "View transaction history", nullptr));
        GenerateReport->setText(QCoreApplication::translate("MainWindow", "Generate report ", nullptr));
        analysisBackButton->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        strategiesBackButton->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        predefinedStrategiesButton_6->setText(QCoreApplication::translate("MainWindow", "Predefined Strategies ", nullptr));
        userStrategiesButton_6->setText(QCoreApplication::translate("MainWindow", "Your strategies", nullptr));
        portfolioButton_10->setText(QCoreApplication::translate("MainWindow", "Buy Order", nullptr));
        portfolioButton_5->setText(QCoreApplication::translate("MainWindow", "Sell market", nullptr));
        portfolioButton_7->setText(QCoreApplication::translate("MainWindow", "Stop loss ", nullptr));
        portfolioButton_6->setText(QCoreApplication::translate("MainWindow", "Buy Limit", nullptr));
        portfolioButton_9->setText(QCoreApplication::translate("MainWindow", "Take Profit", nullptr));
        portfolioButton_4->setText(QCoreApplication::translate("MainWindow", "Buy market", nullptr));
        riskManagementBackButton->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
