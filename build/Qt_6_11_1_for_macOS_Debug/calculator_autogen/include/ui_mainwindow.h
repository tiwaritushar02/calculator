/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *displayLabel;
    QPushButton *pushButton_AC;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_modulus;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_add;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_equalto;
    QPushButton *pushButton_0;
    QPushButton *pushButton_decimal;
    QPushButton *pushButton_9;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(242, 349);
        MainWindow->setStyleSheet(QString::fromUtf8("QLabel{\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"border: 1px solid gray;\n"
"}\n"
"background-color : white;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        displayLabel = new QLabel(centralwidget);
        displayLabel->setObjectName("displayLabel");
        displayLabel->setGeometry(QRect(0, 0, 241, 91));
        pushButton_AC = new QPushButton(centralwidget);
        pushButton_AC->setObjectName("pushButton_AC");
        pushButton_AC->setGeometry(QRect(0, 90, 61, 61));
        pushButton_delete = new QPushButton(centralwidget);
        pushButton_delete->setObjectName("pushButton_delete");
        pushButton_delete->setGeometry(QRect(60, 90, 61, 61));
        pushButton_modulus = new QPushButton(centralwidget);
        pushButton_modulus->setObjectName("pushButton_modulus");
        pushButton_modulus->setGeometry(QRect(120, 90, 61, 61));
        pushButton_divide = new QPushButton(centralwidget);
        pushButton_divide->setObjectName("pushButton_divide");
        pushButton_divide->setGeometry(QRect(180, 90, 61, 61));
        pushButton_multiply = new QPushButton(centralwidget);
        pushButton_multiply->setObjectName("pushButton_multiply");
        pushButton_multiply->setGeometry(QRect(180, 140, 61, 61));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(0, 140, 61, 61));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(60, 140, 61, 61));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(120, 190, 61, 61));
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName("pushButton_minus");
        pushButton_minus->setGeometry(QRect(180, 190, 61, 61));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 190, 61, 61));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(60, 190, 61, 61));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(120, 240, 61, 61));
        pushButton_add = new QPushButton(centralwidget);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setGeometry(QRect(180, 240, 61, 61));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(0, 240, 61, 61));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(60, 240, 61, 61));
        pushButton_equalto = new QPushButton(centralwidget);
        pushButton_equalto->setObjectName("pushButton_equalto");
        pushButton_equalto->setGeometry(QRect(180, 290, 61, 61));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName("pushButton_0");
        pushButton_0->setGeometry(QRect(0, 290, 121, 61));
        pushButton_decimal = new QPushButton(centralwidget);
        pushButton_decimal->setObjectName("pushButton_decimal");
        pushButton_decimal->setGeometry(QRect(120, 290, 61, 61));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(120, 140, 61, 61));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        displayLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_AC->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_modulus->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_multiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_equalto->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_decimal->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
