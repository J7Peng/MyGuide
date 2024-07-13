/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionexit;
    QAction *actiontourists;
    QAction *actionsecurity;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QLabel *label;
    QPushButton *enterTourist;
    QPushButton *enterSecurity;
    QWidget *page_4;
    QLabel *label_5;
    QPushButton *changeMap;
    QPushButton *exitSecurity;
    QWidget *page_5;
    QPushButton *exitTourist;
    QLabel *label_3;
    QPushButton *searchButton;
    QPushButton *gongzhujiao;
    QPushButton *gongzhujiao_2;
    QPushButton *gongzhujiao_3;
    QPushButton *gongzhujiao_4;
    QPushButton *gongzhujiao_5;
    QPushButton *yingyuan;
    QPushButton *gongzhujiao_7;
    QPushButton *gongzhujiao_8;
    QPushButton *gongzhujiao_9;
    QPushButton *gongzhujiao_10;
    QPushButton *gongzhujiao_11;
    QPushButton *gongzhujiao_12;
    QPushButton *gongzhujiao_13;
    QPushButton *gongzhujiao_14;
    QPushButton *gongzhujiao_15;
    QPushButton *gongzhujiao_16;
    QPushButton *gongzhujiao_17;
    QPushButton *gongzhujiao_18;
    QPushButton *gongzhujiao_19;
    QPushButton *gongzhujiao_20;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1132, 770);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/Image/whu.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionexit = new QAction(MainWindow);
        actionexit->setObjectName(QString::fromUtf8("actionexit"));
        actiontourists = new QAction(MainWindow);
        actiontourists->setObjectName(QString::fromUtf8("actiontourists"));
        actionsecurity = new QAction(MainWindow);
        actionsecurity->setObjectName(QString::fromUtf8("actionsecurity"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setMinimumSize(QSize(0, 549));
        stackedWidget->setCursor(QCursor(Qt::ArrowCursor));
        stackedWidget->setFocusPolicy(Qt::NoFocus);
        stackedWidget->setContextMenuPolicy(Qt::PreventContextMenu);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label = new QLabel(page_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(480, 200, 200, 100));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        enterTourist = new QPushButton(page_3);
        enterTourist->setObjectName(QString::fromUtf8("enterTourist"));
        enterTourist->setGeometry(QRect(332, 368, 200, 40));
        enterSecurity = new QPushButton(page_3);
        enterSecurity->setObjectName(QString::fromUtf8("enterSecurity"));
        enterSecurity->setGeometry(QRect(600, 368, 200, 40));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        label_5 = new QLabel(page_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(100, 0, 469, 700));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/imgs/Image/routegraph.jpg")));
        label_5->setScaledContents(true);
        changeMap = new QPushButton(page_4);
        changeMap->setObjectName(QString::fromUtf8("changeMap"));
        changeMap->setGeometry(QRect(700, 168, 200, 40));
        exitSecurity = new QPushButton(page_4);
        exitSecurity->setObjectName(QString::fromUtf8("exitSecurity"));
        exitSecurity->setGeometry(QRect(700, 432, 200, 40));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        exitTourist = new QPushButton(page_5);
        exitTourist->setObjectName(QString::fromUtf8("exitTourist"));
        exitTourist->setGeometry(QRect(700, 432, 200, 40));
        label_3 = new QLabel(page_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 0, 469, 700));
        QFont font1;
        font1.setPointSize(6);
        label_3->setFont(font1);
        label_3->setCursor(QCursor(Qt::PointingHandCursor));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/imgs/Image/routegraph.jpg")));
        label_3->setScaledContents(true);
        searchButton = new QPushButton(page_5);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setGeometry(QRect(700, 168, 200, 40));
        gongzhujiao = new QPushButton(page_5);
        gongzhujiao->setObjectName(QString::fromUtf8("gongzhujiao"));
        gongzhujiao->setGeometry(QRect(280, 10, 15, 15));
        gongzhujiao->setFont(font1);
        gongzhujiao->setCursor(QCursor(Qt::PointingHandCursor));
        gongzhujiao->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        gongzhujiao_2 = new QPushButton(page_5);
        gongzhujiao_2->setObjectName(QString::fromUtf8("gongzhujiao_2"));
        gongzhujiao_2->setGeometry(QRect(460, 50, 15, 15));
        gongzhujiao_2->setFont(font1);
        gongzhujiao_2->setCursor(QCursor(Qt::PointingHandCursor));
        gongzhujiao_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        gongzhujiao_3 = new QPushButton(page_5);
        gongzhujiao_3->setObjectName(QString::fromUtf8("gongzhujiao_3"));
        gongzhujiao_3->setGeometry(QRect(540, 160, 15, 15));
        gongzhujiao_3->setFont(font1);
        gongzhujiao_3->setCursor(QCursor(Qt::PointingHandCursor));
        gongzhujiao_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        gongzhujiao_4 = new QPushButton(page_5);
        gongzhujiao_4->setObjectName(QString::fromUtf8("gongzhujiao_4"));
        gongzhujiao_4->setGeometry(QRect(390, 170, 15, 15));
        gongzhujiao_4->setFont(font1);
        gongzhujiao_4->setCursor(QCursor(Qt::PointingHandCursor));
        gongzhujiao_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        gongzhujiao_5 = new QPushButton(page_5);
        gongzhujiao_5->setObjectName(QString::fromUtf8("gongzhujiao_5"));
        gongzhujiao_5->setGeometry(QRect(270, 300, 15, 15));
        gongzhujiao_5->setFont(font1);
        gongzhujiao_5->setCursor(QCursor(Qt::PointingHandCursor));
        gongzhujiao_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        yingyuan = new QPushButton(page_5);
        yingyuan->setObjectName(QString::fromUtf8("yingyuan"));
        yingyuan->setGeometry(QRect(280, 90, 15, 15));
        yingyuan->setFont(font1);
        yingyuan->setCursor(QCursor(Qt::PointingHandCursor));
        yingyuan->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        gongzhujiao_7 = new QPushButton(page_5);
        gongzhujiao_7->setObjectName(QString::fromUtf8("gongzhujiao_7"));
        gongzhujiao_7->setGeometry(QRect(230, 160, 15, 15));
        gongzhujiao_7->setFont(font1);
        gongzhujiao_7->setCursor(QCursor(Qt::PointingHandCursor));
        gongzhujiao_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        gongzhujiao_8 = new QPushButton(page_5);
        gongzhujiao_8->setObjectName(QString::fromUtf8("gongzhujiao_8"));
        gongzhujiao_8->setGeometry(QRect(150, 150, 15, 15));
        gongzhujiao_8->setFont(font1);
        gongzhujiao_8->setCursor(QCursor(Qt::PointingHandCursor));
        gongzhujiao_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        gongzhujiao_9 = new QPushButton(page_5);
        gongzhujiao_9->setObjectName(QString::fromUtf8("gongzhujiao_9"));
        gongzhujiao_9->setGeometry(QRect(470, 300, 20, 20));
        gongzhujiao_9->setFont(font1);
        gongzhujiao_9->setCursor(QCursor(Qt::PointingHandCursor));
        gongzhujiao_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        gongzhujiao_10 = new QPushButton(page_5);
        gongzhujiao_10->setObjectName(QString::fromUtf8("gongzhujiao_10"));
        gongzhujiao_10->setGeometry(QRect(150, 250, 15, 15));
        gongzhujiao_10->setFont(font1);
        gongzhujiao_10->setCursor(QCursor(Qt::PointingHandCursor));
        gongzhujiao_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        gongzhujiao_11 = new QPushButton(page_5);
        gongzhujiao_11->setObjectName(QString::fromUtf8("gongzhujiao_11"));
        gongzhujiao_11->setGeometry(QRect(160, 340, 15, 15));
        gongzhujiao_11->setFont(font1);
        gongzhujiao_11->setCursor(QCursor(Qt::PointingHandCursor));
        gongzhujiao_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        gongzhujiao_12 = new QPushButton(page_5);
        gongzhujiao_12->setObjectName(QString::fromUtf8("gongzhujiao_12"));
        gongzhujiao_12->setGeometry(QRect(340, 420, 15, 15));
        gongzhujiao_12->setFont(font1);
        gongzhujiao_12->setCursor(QCursor(Qt::PointingHandCursor));
        gongzhujiao_12->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        gongzhujiao_13 = new QPushButton(page_5);
        gongzhujiao_13->setObjectName(QString::fromUtf8("gongzhujiao_13"));
        gongzhujiao_13->setGeometry(QRect(230, 420, 15, 15));
        gongzhujiao_13->setFont(font1);
        gongzhujiao_13->setCursor(QCursor(Qt::PointingHandCursor));
        gongzhujiao_13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        gongzhujiao_14 = new QPushButton(page_5);
        gongzhujiao_14->setObjectName(QString::fromUtf8("gongzhujiao_14"));
        gongzhujiao_14->setGeometry(QRect(340, 520, 15, 15));
        gongzhujiao_14->setFont(font1);
        gongzhujiao_14->setCursor(QCursor(Qt::PointingHandCursor));
        gongzhujiao_14->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        gongzhujiao_15 = new QPushButton(page_5);
        gongzhujiao_15->setObjectName(QString::fromUtf8("gongzhujiao_15"));
        gongzhujiao_15->setGeometry(QRect(130, 500, 15, 15));
        gongzhujiao_15->setFont(font1);
        gongzhujiao_15->setCursor(QCursor(Qt::PointingHandCursor));
        gongzhujiao_15->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        gongzhujiao_16 = new QPushButton(page_5);
        gongzhujiao_16->setObjectName(QString::fromUtf8("gongzhujiao_16"));
        gongzhujiao_16->setGeometry(QRect(130, 580, 15, 15));
        gongzhujiao_16->setFont(font1);
        gongzhujiao_16->setCursor(QCursor(Qt::PointingHandCursor));
        gongzhujiao_16->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        gongzhujiao_17 = new QPushButton(page_5);
        gongzhujiao_17->setObjectName(QString::fromUtf8("gongzhujiao_17"));
        gongzhujiao_17->setGeometry(QRect(230, 580, 15, 15));
        gongzhujiao_17->setFont(font1);
        gongzhujiao_17->setCursor(QCursor(Qt::PointingHandCursor));
        gongzhujiao_17->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        gongzhujiao_18 = new QPushButton(page_5);
        gongzhujiao_18->setObjectName(QString::fromUtf8("gongzhujiao_18"));
        gongzhujiao_18->setGeometry(QRect(340, 580, 15, 15));
        gongzhujiao_18->setFont(font1);
        gongzhujiao_18->setCursor(QCursor(Qt::PointingHandCursor));
        gongzhujiao_18->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        gongzhujiao_19 = new QPushButton(page_5);
        gongzhujiao_19->setObjectName(QString::fromUtf8("gongzhujiao_19"));
        gongzhujiao_19->setGeometry(QRect(340, 660, 15, 15));
        gongzhujiao_19->setFont(font1);
        gongzhujiao_19->setCursor(QCursor(Qt::PointingHandCursor));
        gongzhujiao_19->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        gongzhujiao_20 = new QPushButton(page_5);
        gongzhujiao_20->setObjectName(QString::fromUtf8("gongzhujiao_20"));
        gongzhujiao_20->setGeometry(QRect(230, 660, 15, 15));
        gongzhujiao_20->setFont(font1);
        gongzhujiao_20->setCursor(QCursor(Qt::PointingHandCursor));
        gongzhujiao_20->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        stackedWidget->addWidget(page_5);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1132, 24));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionexit);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\346\240\241\345\233\255\345\257\274\346\270\270\347\263\273\347\273\237", nullptr));
        actionexit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        actiontourists->setText(QCoreApplication::translate("MainWindow", "\346\270\270\345\256\242", nullptr));
        actionsecurity->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\215\253\351\203\250", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\257\274\346\270\270\347\263\273\347\273\237", nullptr));
        enterTourist->setText(QCoreApplication::translate("MainWindow", "\350\277\233\345\205\245\346\270\270\345\256\242\347\263\273\347\273\237", nullptr));
        enterSecurity->setText(QCoreApplication::translate("MainWindow", "\350\277\233\345\205\245\344\277\235\345\215\253\351\203\250\347\263\273\347\273\237", nullptr));
        label_5->setText(QString());
        changeMap->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\345\234\260\345\233\276", nullptr));
        exitSecurity->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\344\277\235\345\215\253\351\203\250\347\263\273\347\273\237", nullptr));
        exitTourist->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\346\270\270\345\256\242\347\263\273\347\273\237", nullptr));
        label_3->setText(QString());
        searchButton->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242\350\267\257\345\276\204", nullptr));
        gongzhujiao->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        gongzhujiao_2->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        gongzhujiao_3->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        gongzhujiao_4->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        gongzhujiao_5->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        yingyuan->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        gongzhujiao_7->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        gongzhujiao_8->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        gongzhujiao_9->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        gongzhujiao_10->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        gongzhujiao_11->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        gongzhujiao_12->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        gongzhujiao_13->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        gongzhujiao_14->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        gongzhujiao_15->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        gongzhujiao_16->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        gongzhujiao_17->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        gongzhujiao_18->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        gongzhujiao_19->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        gongzhujiao_20->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
