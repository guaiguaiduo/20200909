/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *b1;
    QPushButton *pushButton;
    QPushButton *out;
    QTextEdit *pp;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QPushButton *in;
    QPushButton *sure;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *ing;
    QPushButton *buy;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->setEnabled(true);
        Widget->resize(500, 296);
        Widget->setMinimumSize(QSize(0, 0));
        Widget->setMaximumSize(QSize(100000, 100000));
        b1 = new QPushButton(Widget);
        b1->setObjectName(QStringLiteral("b1"));
        b1->setGeometry(QRect(70, 10, 141, 31));
        b1->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);\n"
"font: 25 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";"));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 140, 81, 71));
        pushButton->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        out = new QPushButton(Widget);
        out->setObjectName(QStringLiteral("out"));
        out->setGeometry(QRect(10, 140, 111, 31));
        out->setStyleSheet(QString::fromUtf8("\n"
"font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pp = new QTextEdit(Widget);
        pp->setObjectName(QStringLiteral("pp"));
        pp->setGeometry(QRect(40, 240, 151, 31));
        pp->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(320, 10, 171, 181));
        textBrowser->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        textBrowser_2 = new QTextBrowser(Widget);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(320, 250, 171, 31));
        textBrowser_2->setStyleSheet(QString::fromUtf8("font: 11pt \"\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223\";"));
        textBrowser_3 = new QTextBrowser(Widget);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(320, 200, 171, 31));
        textBrowser_3->setStyleSheet(QString::fromUtf8("font: 11pt \"\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223\";"));
        in = new QPushButton(Widget);
        in->setObjectName(QStringLiteral("in"));
        in->setGeometry(QRect(10, 180, 111, 31));
        in->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        sure = new QPushButton(Widget);
        sure->setObjectName(QStringLiteral("sure"));
        sure->setGeometry(QRect(190, 240, 91, 31));
        sure->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 50, 138, 65));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);\n"
"font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(pushButton_2, 2, 0, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);\n"
"font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(pushButton_3, 1, 0, 1, 1);

        ing = new QPushButton(Widget);
        ing->setObjectName(QStringLiteral("ing"));
        ing->setGeometry(QRect(200, 50, 91, 31));
        ing->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        buy = new QPushButton(Widget);
        buy->setObjectName(QStringLiteral("buy"));
        buy->setGeometry(QRect(200, 87, 91, 31));
        buy->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        b1->setText(QApplication::translate("Widget", "\345\274\200\345\247\213\346\270\270\346\210\217", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "\346\250\241\346\213\237\346\204\237\346\237\223", Q_NULLPTR));
        out->setText(QApplication::translate("Widget", "\346\226\207\344\273\266\344\277\235\345\255\230", Q_NULLPTR));
        in->setText(QApplication::translate("Widget", "\346\226\207\344\273\266\350\257\273\345\205\245", Q_NULLPTR));
        sure->setText(QApplication::translate("Widget", "\347\241\256\350\256\244", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Widget", "\346\237\245\346\211\276\344\273\273\346\204\217\347\214\252\347\232\204\344\277\241\346\201\257", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Widget", "\346\237\245\346\211\276\344\273\273\346\204\217\347\214\252\345\234\210\344\277\241\346\201\257", Q_NULLPTR));
        ing->setText(QApplication::translate("Widget", "\345\242\236\351\225\277\344\270\216\345\224\256\345\215\226", Q_NULLPTR));
        buy->setText(QApplication::translate("Widget", "\350\264\255\344\271\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
