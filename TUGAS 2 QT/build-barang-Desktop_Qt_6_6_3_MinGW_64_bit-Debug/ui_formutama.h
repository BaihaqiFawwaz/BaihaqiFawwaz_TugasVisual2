/********************************************************************************
** Form generated from reading UI file 'formutama.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMUTAMA_H
#define UI_FORMUTAMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formUtama
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *formUtama)
    {
        if (formUtama->objectName().isEmpty())
            formUtama->setObjectName("formUtama");
        formUtama->resize(594, 600);
        centralwidget = new QWidget(formUtama);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 20, 161, 131));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(340, 20, 161, 131));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(190, 200, 161, 131));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(40, 380, 161, 131));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(340, 380, 161, 131));
        formUtama->setCentralWidget(centralwidget);
        menubar = new QMenuBar(formUtama);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 594, 26));
        formUtama->setMenuBar(menubar);
        statusbar = new QStatusBar(formUtama);
        statusbar->setObjectName("statusbar");
        formUtama->setStatusBar(statusbar);

        retranslateUi(formUtama);

        QMetaObject::connectSlotsByName(formUtama);
    } // setupUi

    void retranslateUi(QMainWindow *formUtama)
    {
        formUtama->setWindowTitle(QCoreApplication::translate("formUtama", "formUtama", nullptr));
        pushButton->setText(QCoreApplication::translate("formUtama", "Form Barang", nullptr));
        pushButton_2->setText(QCoreApplication::translate("formUtama", "Form Mitra", nullptr));
        pushButton_3->setText(QCoreApplication::translate("formUtama", "Form Pesanan", nullptr));
        pushButton_4->setText(QCoreApplication::translate("formUtama", "Form Retur", nullptr));
        pushButton_5->setText(QCoreApplication::translate("formUtama", "Form Slippembayaran", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formUtama: public Ui_formUtama {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMUTAMA_H
