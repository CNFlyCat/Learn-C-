/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *mainLineEdit;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *eightButton;
    QPushButton *zeroButton;
    QPushButton *towButton;
    QPushButton *addButton;
    QPushButton *subButton;
    QPushButton *mulButton;
    QPushButton *divButton;
    QPushButton *threeButton;
    QPushButton *fiveButton;
    QPushButton *sevenButton;
    QPushButton *delButton;
    QPushButton *sixButton;
    QPushButton *nineButton;
    QPushButton *rightButton;
    QPushButton *clearButton;
    QPushButton *oneButton;
    QPushButton *fourButton;
    QPushButton *leftButton;
    QPushButton *equalButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(235, 310);
        Widget->setMinimumSize(QSize(235, 310));
        Widget->setMaximumSize(QSize(235, 310));
        mainLineEdit = new QLineEdit(Widget);
        mainLineEdit->setObjectName("mainLineEdit");
        mainLineEdit->setGeometry(QRect(20, 20, 191, 35));
        mainLineEdit->setMinimumSize(QSize(190, 35));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(12);
        font.setBold(true);
        mainLineEdit->setFont(font);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 60, 191, 241));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        eightButton = new QPushButton(layoutWidget);
        eightButton->setObjectName("eightButton");
        eightButton->setMinimumSize(QSize(40, 40));
        eightButton->setMaximumSize(QSize(40, 40));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(16);
        eightButton->setFont(font1);

        gridLayout->addWidget(eightButton, 1, 1, 1, 1);

        zeroButton = new QPushButton(layoutWidget);
        zeroButton->setObjectName("zeroButton");
        zeroButton->setMinimumSize(QSize(40, 40));
        zeroButton->setMaximumSize(QSize(40, 40));
        zeroButton->setFont(font1);

        gridLayout->addWidget(zeroButton, 4, 1, 1, 1);

        towButton = new QPushButton(layoutWidget);
        towButton->setObjectName("towButton");
        towButton->setMinimumSize(QSize(40, 40));
        towButton->setMaximumSize(QSize(40, 40));
        towButton->setFont(font1);

        gridLayout->addWidget(towButton, 3, 1, 1, 1);

        addButton = new QPushButton(layoutWidget);
        addButton->setObjectName("addButton");
        addButton->setMinimumSize(QSize(40, 40));
        addButton->setMaximumSize(QSize(40, 40));
        addButton->setFont(font1);

        gridLayout->addWidget(addButton, 0, 1, 1, 1);

        subButton = new QPushButton(layoutWidget);
        subButton->setObjectName("subButton");
        subButton->setMinimumSize(QSize(40, 40));
        subButton->setMaximumSize(QSize(40, 40));
        subButton->setFont(font1);

        gridLayout->addWidget(subButton, 0, 2, 1, 1);

        mulButton = new QPushButton(layoutWidget);
        mulButton->setObjectName("mulButton");
        mulButton->setMinimumSize(QSize(40, 40));
        mulButton->setMaximumSize(QSize(40, 40));
        mulButton->setFont(font1);

        gridLayout->addWidget(mulButton, 1, 3, 1, 1);

        divButton = new QPushButton(layoutWidget);
        divButton->setObjectName("divButton");
        divButton->setMinimumSize(QSize(40, 40));
        divButton->setMaximumSize(QSize(40, 40));
        divButton->setFont(font1);

        gridLayout->addWidget(divButton, 2, 3, 1, 1);

        threeButton = new QPushButton(layoutWidget);
        threeButton->setObjectName("threeButton");
        threeButton->setMinimumSize(QSize(40, 40));
        threeButton->setMaximumSize(QSize(40, 40));
        threeButton->setFont(font1);

        gridLayout->addWidget(threeButton, 3, 2, 1, 1);

        fiveButton = new QPushButton(layoutWidget);
        fiveButton->setObjectName("fiveButton");
        fiveButton->setMinimumSize(QSize(40, 40));
        fiveButton->setMaximumSize(QSize(40, 40));
        fiveButton->setFont(font1);

        gridLayout->addWidget(fiveButton, 2, 1, 1, 1);

        sevenButton = new QPushButton(layoutWidget);
        sevenButton->setObjectName("sevenButton");
        sevenButton->setMinimumSize(QSize(40, 40));
        sevenButton->setMaximumSize(QSize(40, 40));
        sevenButton->setFont(font1);

        gridLayout->addWidget(sevenButton, 1, 0, 1, 1);

        delButton = new QPushButton(layoutWidget);
        delButton->setObjectName("delButton");
        delButton->setMinimumSize(QSize(40, 40));
        delButton->setMaximumSize(QSize(40, 40));
        delButton->setFont(font1);

        gridLayout->addWidget(delButton, 0, 3, 1, 1);

        sixButton = new QPushButton(layoutWidget);
        sixButton->setObjectName("sixButton");
        sixButton->setMinimumSize(QSize(40, 40));
        sixButton->setMaximumSize(QSize(40, 40));
        sixButton->setFont(font1);

        gridLayout->addWidget(sixButton, 2, 2, 1, 1);

        nineButton = new QPushButton(layoutWidget);
        nineButton->setObjectName("nineButton");
        nineButton->setMinimumSize(QSize(40, 40));
        nineButton->setMaximumSize(QSize(40, 40));
        nineButton->setFont(font1);

        gridLayout->addWidget(nineButton, 1, 2, 1, 1);

        rightButton = new QPushButton(layoutWidget);
        rightButton->setObjectName("rightButton");
        rightButton->setMinimumSize(QSize(40, 40));
        rightButton->setMaximumSize(QSize(40, 40));
        rightButton->setFont(font1);

        gridLayout->addWidget(rightButton, 4, 2, 1, 1);

        clearButton = new QPushButton(layoutWidget);
        clearButton->setObjectName("clearButton");
        clearButton->setMinimumSize(QSize(40, 40));
        clearButton->setMaximumSize(QSize(40, 40));
        clearButton->setFont(font1);

        gridLayout->addWidget(clearButton, 0, 0, 1, 1);

        oneButton = new QPushButton(layoutWidget);
        oneButton->setObjectName("oneButton");
        oneButton->setMinimumSize(QSize(40, 40));
        oneButton->setMaximumSize(QSize(40, 40));
        oneButton->setFont(font1);

        gridLayout->addWidget(oneButton, 3, 0, 1, 1);

        fourButton = new QPushButton(layoutWidget);
        fourButton->setObjectName("fourButton");
        fourButton->setMinimumSize(QSize(40, 40));
        fourButton->setMaximumSize(QSize(40, 40));
        fourButton->setFont(font1);

        gridLayout->addWidget(fourButton, 2, 0, 1, 1);

        leftButton = new QPushButton(layoutWidget);
        leftButton->setObjectName("leftButton");
        leftButton->setMinimumSize(QSize(40, 40));
        leftButton->setMaximumSize(QSize(40, 40));
        leftButton->setFont(font1);

        gridLayout->addWidget(leftButton, 4, 0, 1, 1);

        equalButton = new QPushButton(layoutWidget);
        equalButton->setObjectName("equalButton");
        equalButton->setMinimumSize(QSize(40, 40));
        equalButton->setMaximumSize(QSize(40, 80));
        equalButton->setFont(font1);
        equalButton->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(equalButton, 3, 3, 2, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\351\243\236\347\214\253\350\256\241\347\256\227\345\231\250", nullptr));
        eightButton->setText(QCoreApplication::translate("Widget", "8", nullptr));
        zeroButton->setText(QCoreApplication::translate("Widget", "0", nullptr));
        towButton->setText(QCoreApplication::translate("Widget", "2", nullptr));
        addButton->setText(QCoreApplication::translate("Widget", "+", nullptr));
        subButton->setText(QCoreApplication::translate("Widget", "-", nullptr));
        mulButton->setText(QCoreApplication::translate("Widget", "*", nullptr));
        divButton->setText(QCoreApplication::translate("Widget", "\303\267", nullptr));
        threeButton->setText(QCoreApplication::translate("Widget", "3", nullptr));
        fiveButton->setText(QCoreApplication::translate("Widget", "5", nullptr));
        sevenButton->setText(QCoreApplication::translate("Widget", "7", nullptr));
        delButton->setText(QCoreApplication::translate("Widget", "\342\206\220", nullptr));
        sixButton->setText(QCoreApplication::translate("Widget", "6", nullptr));
        nineButton->setText(QCoreApplication::translate("Widget", "9", nullptr));
        rightButton->setText(QCoreApplication::translate("Widget", "\357\274\211", nullptr));
        clearButton->setText(QCoreApplication::translate("Widget", "C", nullptr));
        oneButton->setText(QCoreApplication::translate("Widget", "1", nullptr));
        fourButton->setText(QCoreApplication::translate("Widget", "4", nullptr));
        leftButton->setText(QCoreApplication::translate("Widget", "\357\274\210", nullptr));
        equalButton->setText(QCoreApplication::translate("Widget", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
