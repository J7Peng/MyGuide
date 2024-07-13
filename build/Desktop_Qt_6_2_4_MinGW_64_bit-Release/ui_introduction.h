/********************************************************************************
** Form generated from reading UI file 'introduction.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTRODUCTION_H
#define UI_INTRODUCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Introduction
{
public:
    QStackedWidget *stackedWidget;
    QWidget *gongzhujiao;
    QLabel *gongzhujiao_pic;
    QLabel *gongzhujiao_text;
    QWidget *yingyuan;
    QLabel *yingyuan_text;
    QLabel *yingyuan_pic;

    void setupUi(QDialog *Introduction)
    {
        if (Introduction->objectName().isEmpty())
            Introduction->setObjectName(QString::fromUtf8("Introduction"));
        Introduction->resize(800, 600);
        stackedWidget = new QStackedWidget(Introduction);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 800, 600));
        gongzhujiao = new QWidget();
        gongzhujiao->setObjectName(QString::fromUtf8("gongzhujiao"));
        gongzhujiao_pic = new QLabel(gongzhujiao);
        gongzhujiao_pic->setObjectName(QString::fromUtf8("gongzhujiao_pic"));
        gongzhujiao_pic->setGeometry(QRect(0, 0, 800, 400));
        gongzhujiao_pic->setPixmap(QPixmap(QString::fromUtf8(":/imgs/Image/gongzhujiao.jpg")));
        gongzhujiao_text = new QLabel(gongzhujiao);
        gongzhujiao_text->setObjectName(QString::fromUtf8("gongzhujiao_text"));
        gongzhujiao_text->setGeometry(QRect(0, 400, 800, 200));
        gongzhujiao_text->setWordWrap(true);
        stackedWidget->addWidget(gongzhujiao);
        yingyuan = new QWidget();
        yingyuan->setObjectName(QString::fromUtf8("yingyuan"));
        yingyuan_text = new QLabel(yingyuan);
        yingyuan_text->setObjectName(QString::fromUtf8("yingyuan_text"));
        yingyuan_text->setGeometry(QRect(0, 400, 800, 200));
        yingyuan_text->setWordWrap(true);
        yingyuan_pic = new QLabel(yingyuan);
        yingyuan_pic->setObjectName(QString::fromUtf8("yingyuan_pic"));
        yingyuan_pic->setGeometry(QRect(0, 0, 800, 400));
        yingyuan_pic->setPixmap(QPixmap(QString::fromUtf8(":/imgs/Image/yingyuan.jpg")));
        stackedWidget->addWidget(yingyuan);

        retranslateUi(Introduction);

        QMetaObject::connectSlotsByName(Introduction);
    } // setupUi

    void retranslateUi(QDialog *Introduction)
    {
        Introduction->setWindowTitle(QCoreApplication::translate("Introduction", "Dialog", nullptr));
        gongzhujiao_pic->setText(QString());
        gongzhujiao_text->setText(QCoreApplication::translate("Introduction", "<html><head/><body><p><span style=\" font-size:16pt; color:#5500ff;\">\344\273\213\347\273\215\357\274\232\344\274\240\350\257\264\357\274\214\345\234\250WHU\346\234\211\345\272\247\342\200\234\345\205\254\344\270\273\346\225\231\342\200\235\346\257\217\344\270\252\345\211\215\346\235\245\346\216\242\351\231\251\347\232\204\345\260\221\345\271\264\351\203\275\344\274\232\350\242\253\345\205\254\344\270\273\347\232\204\351\243\216\351\207\207\346\203\212\350\211\263\346\212\230\346\234\215\343\200\202\345\215\227\346\234\233\347\217\236\347\217\210\345\261\261\357\274\214\345\214\227\344\270\264\344\270\234\346\271\226\346\260\264\357\274\214\345\234\250\346\227\247\346\240\241\350\275\246\347\232\204\342\200\234\344\270\273\346\225\231\345\255\246\346\245\274\342\200\235\347\253\231\345\217\260\346\227\201\350\277\231\345\272\247\345\215\227\345\214\227\346\234\235\345\220\221\347\273\277\350\215\253\346\216\251\346\230\240\347\232\204\351\235\222\347\201\260\350\211\262\345\273\272\347\255\221\357\274\214\346"
                        "\255\243\346\230\257\345\267\245\345\255\246\351\203\250\344\270\273\346\225\231\345\255\246\346\245\274\357\274\214\345\205\255\345\261\202\351\253\230\347\232\204\344\270\273\344\275\223\343\200\201\345\206\205\345\207\271\345\274\217\347\232\204\345\256\275\351\230\224\345\271\277\345\234\272\357\274\214\345\260\275\346\230\276\344\270\200\346\264\276\346\201\242\345\256\217\346\260\224\345\212\277\343\200\202</span></p></body></html>", nullptr));
        yingyuan_text->setText(QCoreApplication::translate("Introduction", "<html><head/><body><p><span style=\" font-size:14pt; color:#5500ff;\">\344\273\213\347\273\215\357\274\232\346\255\246\345\244\247\346\250\261\345\233\255\357\274\214\344\275\215\344\272\216\344\270\255\345\233\275\346\271\226\345\214\227\346\255\246\346\261\211\344\270\234\346\271\226\344\271\213\347\225\224\347\217\236\347\217\210\345\261\261\344\270\212\347\232\204\346\255\246\346\261\211\345\244\247\345\255\246\346\227\251\346\234\237\345\273\272\347\255\221\343\200\202\346\255\246\345\244\247\346\250\261\345\233\255\346\230\257\346\255\246\346\261\211\345\244\247\345\255\246\345\202\215\347\213\256\345\255\220\345\261\261\350\200\214\345\273\272\347\232\204\345\273\272\347\255\221\347\276\244\357\274\214\345\273\272\344\272\216\346\260\221\345\233\275\345\215\201\344\271\235\345\271\264(\345\205\254\345\205\2031931\345\271\264)\357\274\214\345\210\235\345\220\215\350\200\201\346\226\213\350\210\215\357\274\214\344\270\272\345\275\274\346\227\266\344\271\213\345\255\246\347\224\237\345\256\277\350\210\215\357"
                        "\274\214\350\242\253\345\210\227\345\205\245\345\233\275\345\256\266\351\207\215\347\202\271\346\226\207\347\211\251\344\277\235\346\212\244\345\215\225\344\275\215\343\200\202 </span></p><p><span style=\" font-size:14pt; color:#5500ff;\">\346\257\217\345\271\2643\346\234\210\346\254\243\350\265\217\346\250\261\350\212\261\345\267\262\346\210\220\344\270\272\347\231\276\344\270\207\346\261\237\345\237\216\344\272\272\347\232\204\346\230\245\345\244\251\347\233\233\344\272\213\343\200\202\346\203\263\347\234\237\346\255\243\351\242\206\347\225\245\346\250\261\350\212\261\347\232\204\347\245\236\351\237\265\357\274\214\350\277\230\346\230\257\345\210\235\346\232\256\345\244\234\350\211\262\351\207\214\357\274\214\347\234\213\346\250\261\350\212\261\345\246\202\344\272\221;\346\234\210\344\270\213\346\274\253\346\255\245\346\250\261\350\212\261\345\244\247\351\201\223\357\274\214\344\273\273\350\220\275\350\212\261\345\246\202\351\233\250\343\200\202\346\257\217\345\275\223\345\257\222\345\206\254\350\277\207\345"
                        "\220\216\357\274\214\346\242\205\350\212\261\345\207\213\350\260\242\344\271\213\346\227\266\357\274\214\346\227\251\346\250\261\345\274\200\346\224\276\357\274\214\347\273\247\350\200\214\346\227\245\346\234\254\346\250\261\350\212\261\343\200\201\345\236\202\346\236\235\346\250\261\350\212\261\343\200\201\346\231\232\346\250\261\347\255\211\345\274\200\346\224\276\343\200\202 </span></p></body></html>", nullptr));
        yingyuan_pic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Introduction: public Ui_Introduction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTRODUCTION_H
