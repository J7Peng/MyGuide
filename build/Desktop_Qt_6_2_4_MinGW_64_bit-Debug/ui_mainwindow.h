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
#include <QtWidgets/QTextEdit>
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
    QLabel *routegraph;
    QPushButton *searchButton;
    QPushButton *gongzhujiao;
    QPushButton *songyuancaochang;
    QPushButton *fengyuan;
    QPushButton *jiuyiercaochang;
    QPushButton *luojiaguangchang;
    QPushButton *yingyuan;
    QPushButton *guiyuancaochang;
    QPushButton *jisuanjixueyuan;
    QPushButton *luojiashan;
    QPushButton *leijunkejilou;
    QPushButton *luojiamen;
    QPushButton *xintu;
    QPushButton *xinghutiyuchang;
    QPushButton *xincao;
    QPushButton *wanganxiaocaochang;
    QPushButton *guoruanc3;
    QPushButton *shishe;
    QPushButton *xinxixuebuyijiao;
    QPushButton *luoyumen;
    QPushButton *nanermen;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTextEdit *anouncementtextEdit;
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
        stackedWidget->setMinimumSize(QSize(1, 549));
        stackedWidget->setCursor(QCursor(Qt::ArrowCursor));
        stackedWidget->setFocusPolicy(Qt::NoFocus);
        stackedWidget->setContextMenuPolicy(Qt::PreventContextMenu);
        stackedWidget->setFrameShape(QFrame::NoFrame);
        stackedWidget->setFrameShadow(QFrame::Sunken);
        stackedWidget->setLineWidth(0);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label = new QLabel(page_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(480, 200, 200, 100));
        QFont font;
        font.setFamilies({QString::fromUtf8("Nirmala UI Semilight")});
        font.setPointSize(36);
        label->setFont(font);
        label->setMidLineWidth(-1);
        label->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
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
        label_5->setGeometry(QRect(10, 10, 469, 700));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/imgs/Image/routegraph.jpg")));
        label_5->setScaledContents(true);
        changeMap = new QPushButton(page_4);
        changeMap->setObjectName(QString::fromUtf8("changeMap"));
        changeMap->setGeometry(QRect(330, 560, 141, 41));
        QFont font1;
        font1.setPointSize(14);
        changeMap->setFont(font1);
        exitSecurity = new QPushButton(page_4);
        exitSecurity->setObjectName(QString::fromUtf8("exitSecurity"));
        exitSecurity->setGeometry(QRect(940, 640, 121, 31));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        exitTourist = new QPushButton(page_5);
        exitTourist->setObjectName(QString::fromUtf8("exitTourist"));
        exitTourist->setGeometry(QRect(960, 650, 121, 31));
        routegraph = new QLabel(page_5);
        routegraph->setObjectName(QString::fromUtf8("routegraph"));
        routegraph->setGeometry(QRect(10, 10, 469, 700));
        QFont font2;
        font2.setPointSize(6);
        routegraph->setFont(font2);
        routegraph->setCursor(QCursor(Qt::ArrowCursor));
        routegraph->setPixmap(QPixmap(QString::fromUtf8(":/imgs/Image/routegraph.jpg")));
        routegraph->setScaledContents(true);
        searchButton = new QPushButton(page_5);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setGeometry(QRect(330, 540, 131, 31));
        searchButton->setFont(font1);
        gongzhujiao = new QPushButton(page_5);
        gongzhujiao->setObjectName(QString::fromUtf8("gongzhujiao"));
        gongzhujiao->setGeometry(QRect(180, 40, 41, 16));
        QFont font3;
        font3.setPointSize(9);
        gongzhujiao->setFont(font3);
        gongzhujiao->setCursor(QCursor(Qt::PointingHandCursor));
        gongzhujiao->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        songyuancaochang = new QPushButton(page_5);
        songyuancaochang->setObjectName(QString::fromUtf8("songyuancaochang"));
        songyuancaochang->setGeometry(QRect(350, 80, 51, 21));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(songyuancaochang->sizePolicy().hasHeightForWidth());
        songyuancaochang->setSizePolicy(sizePolicy2);
        songyuancaochang->setFont(font3);
        songyuancaochang->setCursor(QCursor(Qt::PointingHandCursor));
        songyuancaochang->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        fengyuan = new QPushButton(page_5);
        fengyuan->setObjectName(QString::fromUtf8("fengyuan"));
        fengyuan->setGeometry(QRect(440, 200, 31, 20));
        fengyuan->setFont(font3);
        fengyuan->setCursor(QCursor(Qt::PointingHandCursor));
        fengyuan->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        jiuyiercaochang = new QPushButton(page_5);
        jiuyiercaochang->setObjectName(QString::fromUtf8("jiuyiercaochang"));
        jiuyiercaochang->setGeometry(QRect(280, 200, 61, 21));
        jiuyiercaochang->setFont(font3);
        jiuyiercaochang->setCursor(QCursor(Qt::PointingHandCursor));
        jiuyiercaochang->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        luojiaguangchang = new QPushButton(page_5);
        luojiaguangchang->setObjectName(QString::fromUtf8("luojiaguangchang"));
        luojiaguangchang->setGeometry(QRect(160, 330, 51, 21));
        QFont font4;
        font4.setPointSize(10);
        luojiaguangchang->setFont(font4);
        luojiaguangchang->setCursor(QCursor(Qt::PointingHandCursor));
        luojiaguangchang->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        yingyuan = new QPushButton(page_5);
        yingyuan->setObjectName(QString::fromUtf8("yingyuan"));
        yingyuan->setGeometry(QRect(180, 130, 41, 21));
        yingyuan->setFont(font4);
        yingyuan->setCursor(QCursor(Qt::PointingHandCursor));
        yingyuan->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        guiyuancaochang = new QPushButton(page_5);
        guiyuancaochang->setObjectName(QString::fromUtf8("guiyuancaochang"));
        guiyuancaochang->setGeometry(QRect(120, 200, 51, 21));
        guiyuancaochang->setFont(font3);
        guiyuancaochang->setCursor(QCursor(Qt::PointingHandCursor));
        guiyuancaochang->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        jisuanjixueyuan = new QPushButton(page_5);
        jisuanjixueyuan->setObjectName(QString::fromUtf8("jisuanjixueyuan"));
        jisuanjixueyuan->setGeometry(QRect(30, 180, 61, 21));
        jisuanjixueyuan->setFont(font3);
        jisuanjixueyuan->setCursor(QCursor(Qt::PointingHandCursor));
        jisuanjixueyuan->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        luojiashan = new QPushButton(page_5);
        luojiashan->setObjectName(QString::fromUtf8("luojiashan"));
        luojiashan->setGeometry(QRect(370, 360, 51, 20));
        luojiashan->setFont(font3);
        luojiashan->setCursor(QCursor(Qt::PointingHandCursor));
        luojiashan->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        leijunkejilou = new QPushButton(page_5);
        leijunkejilou->setObjectName(QString::fromUtf8("leijunkejilou"));
        leijunkejilou->setGeometry(QRect(30, 280, 71, 21));
        leijunkejilou->setFont(font3);
        leijunkejilou->setCursor(QCursor(Qt::PointingHandCursor));
        leijunkejilou->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        luojiamen = new QPushButton(page_5);
        luojiamen->setObjectName(QString::fromUtf8("luojiamen"));
        luojiamen->setGeometry(QRect(60, 380, 41, 16));
        luojiamen->setFont(font3);
        luojiamen->setCursor(QCursor(Qt::PointingHandCursor));
        luojiamen->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        xintu = new QPushButton(page_5);
        xintu->setObjectName(QString::fromUtf8("xintu"));
        xintu->setGeometry(QRect(230, 460, 41, 21));
        xintu->setFont(font3);
        xintu->setCursor(QCursor(Qt::PointingHandCursor));
        xintu->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        xinghutiyuchang = new QPushButton(page_5);
        xinghutiyuchang->setObjectName(QString::fromUtf8("xinghutiyuchang"));
        xinghutiyuchang->setGeometry(QRect(120, 460, 61, 20));
        xinghutiyuchang->setFont(font3);
        xinghutiyuchang->setCursor(QCursor(Qt::PointingHandCursor));
        xinghutiyuchang->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        xincao = new QPushButton(page_5);
        xincao->setObjectName(QString::fromUtf8("xincao"));
        xincao->setGeometry(QRect(240, 556, 31, 20));
        xincao->setFont(font3);
        xincao->setCursor(QCursor(Qt::PointingHandCursor));
        xincao->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        wanganxiaocaochang = new QPushButton(page_5);
        wanganxiaocaochang->setObjectName(QString::fromUtf8("wanganxiaocaochang"));
        wanganxiaocaochang->setGeometry(QRect(10, 540, 61, 16));
        wanganxiaocaochang->setFont(font2);
        wanganxiaocaochang->setCursor(QCursor(Qt::PointingHandCursor));
        wanganxiaocaochang->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        guoruanc3 = new QPushButton(page_5);
        guoruanc3->setObjectName(QString::fromUtf8("guoruanc3"));
        guoruanc3->setGeometry(QRect(20, 615, 41, 20));
        guoruanc3->setFont(font3);
        guoruanc3->setCursor(QCursor(Qt::PointingHandCursor));
        guoruanc3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        shishe = new QPushButton(page_5);
        shishe->setObjectName(QString::fromUtf8("shishe"));
        shishe->setGeometry(QRect(140, 616, 21, 20));
        shishe->setFont(font3);
        shishe->setCursor(QCursor(Qt::PointingHandCursor));
        shishe->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        xinxixuebuyijiao = new QPushButton(page_5);
        xinxixuebuyijiao->setObjectName(QString::fromUtf8("xinxixuebuyijiao"));
        xinxixuebuyijiao->setGeometry(QRect(220, 610, 71, 21));
        xinxixuebuyijiao->setFont(font3);
        xinxixuebuyijiao->setCursor(QCursor(Qt::PointingHandCursor));
        xinxixuebuyijiao->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        luoyumen = new QPushButton(page_5);
        luoyumen->setObjectName(QString::fromUtf8("luoyumen"));
        luoyumen->setGeometry(QRect(240, 690, 41, 21));
        luoyumen->setFont(font3);
        luoyumen->setCursor(QCursor(Qt::PointingHandCursor));
        luoyumen->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        nanermen = new QPushButton(page_5);
        nanermen->setObjectName(QString::fromUtf8("nanermen"));
        nanermen->setGeometry(QRect(140, 690, 31, 21));
        nanermen->setFont(font3);
        nanermen->setCursor(QCursor(Qt::PointingHandCursor));
        nanermen->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        widget = new QWidget(page_5);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(590, 30, 491, 591));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setSizeIncrement(QSize(0, 0));
        QFont font5;
        font5.setPointSize(20);
        label_2->setFont(font5);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        anouncementtextEdit = new QTextEdit(widget);
        anouncementtextEdit->setObjectName(QString::fromUtf8("anouncementtextEdit"));
        anouncementtextEdit->setSizeIncrement(QSize(1, 0));
        anouncementtextEdit->setFocusPolicy(Qt::NoFocus);
        anouncementtextEdit->setContextMenuPolicy(Qt::CustomContextMenu);

        verticalLayout_2->addWidget(anouncementtextEdit);

        stackedWidget->addWidget(page_5);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1132, 17));
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
        routegraph->setText(QString());
        searchButton->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242\350\267\257\345\276\204", nullptr));
        gongzhujiao->setText(QCoreApplication::translate("MainWindow", "\345\267\245\344\270\273\346\225\231", nullptr));
        songyuancaochang->setText(QCoreApplication::translate("MainWindow", "\346\241\202\345\233\255\346\223\215\345\234\272", nullptr));
        fengyuan->setText(QCoreApplication::translate("MainWindow", "\346\236\253\345\233\255", nullptr));
        jiuyiercaochang->setText(QCoreApplication::translate("MainWindow", "\344\271\235\344\270\200\344\272\214\346\223\215\345\234\272", nullptr));
        luojiaguangchang->setText(QCoreApplication::translate("MainWindow", "\347\217\236\347\217\210\345\271\277\345\234\272", nullptr));
        yingyuan->setText(QCoreApplication::translate("MainWindow", "\346\250\261\345\233\255", nullptr));
        guiyuancaochang->setText(QCoreApplication::translate("MainWindow", "\346\241\202\345\233\255\346\223\215\345\234\272", nullptr));
        jisuanjixueyuan->setText(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\346\234\272\345\255\246\351\231\242", nullptr));
        luojiashan->setText(QCoreApplication::translate("MainWindow", "\347\217\236\347\217\210\345\261\261", nullptr));
        leijunkejilou->setText(QCoreApplication::translate("MainWindow", "\351\233\267\345\206\233\347\247\221\346\212\200\346\245\274", nullptr));
        luojiamen->setText(QCoreApplication::translate("MainWindow", "\347\217\236\347\217\210\351\227\250", nullptr));
        xintu->setText(QCoreApplication::translate("MainWindow", "\344\277\241\345\233\276", nullptr));
        xinghutiyuchang->setText(QCoreApplication::translate("MainWindow", "\346\230\237\346\271\226\344\275\223\350\202\262\345\234\272", nullptr));
        xincao->setText(QCoreApplication::translate("MainWindow", "\344\277\241\346\223\215", nullptr));
        wanganxiaocaochang->setText(QCoreApplication::translate("MainWindow", "\347\275\221\345\256\211\345\260\217\346\223\215\345\234\272", nullptr));
        guoruanc3->setText(QCoreApplication::translate("MainWindow", "\345\233\275\350\275\257c3", nullptr));
        shishe->setText(QCoreApplication::translate("MainWindow", "10\350\210\215", nullptr));
        xinxixuebuyijiao->setText(QCoreApplication::translate("MainWindow", "\344\277\241\346\201\257\345\255\246\351\203\2501\346\225\231", nullptr));
        luoyumen->setText(QCoreApplication::translate("MainWindow", "\347\217\236\347\221\234\351\227\250", nullptr));
        nanermen->setText(QCoreApplication::translate("MainWindow", "\345\215\2272\351\227\250", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\205\254\345\221\212\346\240\217", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
