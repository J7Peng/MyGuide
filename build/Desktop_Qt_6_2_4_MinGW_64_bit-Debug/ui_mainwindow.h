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
    QLabel *label_2;
    QPushButton *exitsecurity;
    QWidget *page_5;
    QPushButton *exitTourist;
    QLabel *label_3;
    QPushButton *searchButton;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1003, 955);
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
        label->setGeometry(QRect(350, 60, 251, 211));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        enterTourist = new QPushButton(page_3);
        enterTourist->setObjectName(QString::fromUtf8("enterTourist"));
        enterTourist->setGeometry(QRect(320, 260, 161, 41));
        enterSecurity = new QPushButton(page_3);
        enterSecurity->setObjectName(QString::fromUtf8("enterSecurity"));
        enterSecurity->setGeometry(QRect(320, 340, 161, 41));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        label_2 = new QLabel(page_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(330, 150, 301, 181));
        label_2->setFont(font);
        exitsecurity = new QPushButton(page_4);
        exitsecurity->setObjectName(QString::fromUtf8("exitsecurity"));
        exitsecurity->setGeometry(QRect(570, 400, 80, 18));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(exitsecurity->sizePolicy().hasHeightForWidth());
        exitsecurity->setSizePolicy(sizePolicy1);
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        exitTourist = new QPushButton(page_5);
        exitTourist->setObjectName(QString::fromUtf8("exitTourist"));
        exitTourist->setGeometry(QRect(860, 780, 80, 18));
        label_3 = new QLabel(page_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(170, 0, 651, 901));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Image/map.png")));
        label_3->setScaledContents(true);
        searchButton = new QPushButton(page_5);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setGeometry(QRect(850, 60, 80, 18));
        stackedWidget->addWidget(page_5);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1003, 17));
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
        label_2->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\215\253\351\203\250\347\263\273\347\273\237", nullptr));
        exitsecurity->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\344\277\235\345\215\253\351\203\250\347\263\273\347\273\237", nullptr));
        exitTourist->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\346\270\270\345\256\242\347\263\273\347\273\237", nullptr));
        label_3->setText(QString());
        searchButton->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242\350\267\257\345\276\204", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
