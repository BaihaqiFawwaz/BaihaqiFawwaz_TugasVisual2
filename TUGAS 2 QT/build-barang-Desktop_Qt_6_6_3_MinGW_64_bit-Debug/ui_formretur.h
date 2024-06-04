/********************************************************************************
** Form generated from reading UI file 'formretur.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMRETUR_H
#define UI_FORMRETUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormRetur
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *noReturLabel;
    QLineEdit *noReturLineEdit;
    QLabel *kodeMitraLabel;
    QLineEdit *kodeMitraLineEdit;
    QLabel *kodeBarangLabel;
    QLineEdit *kodeBarangLineEdit;
    QLabel *jumlahReturLabel;
    QLineEdit *jumlahReturLineEdit;
    QLabel *totalReturLabel;
    QLineEdit *totalReturLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *FormRetur)
    {
        if (FormRetur->objectName().isEmpty())
            FormRetur->setObjectName("FormRetur");
        FormRetur->resize(738, 588);
        formLayoutWidget = new QWidget(FormRetur);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(80, 80, 351, 171));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        noReturLabel = new QLabel(formLayoutWidget);
        noReturLabel->setObjectName("noReturLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, noReturLabel);

        noReturLineEdit = new QLineEdit(formLayoutWidget);
        noReturLineEdit->setObjectName("noReturLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, noReturLineEdit);

        kodeMitraLabel = new QLabel(formLayoutWidget);
        kodeMitraLabel->setObjectName("kodeMitraLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, kodeMitraLabel);

        kodeMitraLineEdit = new QLineEdit(formLayoutWidget);
        kodeMitraLineEdit->setObjectName("kodeMitraLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, kodeMitraLineEdit);

        kodeBarangLabel = new QLabel(formLayoutWidget);
        kodeBarangLabel->setObjectName("kodeBarangLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, kodeBarangLabel);

        kodeBarangLineEdit = new QLineEdit(formLayoutWidget);
        kodeBarangLineEdit->setObjectName("kodeBarangLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, kodeBarangLineEdit);

        jumlahReturLabel = new QLabel(formLayoutWidget);
        jumlahReturLabel->setObjectName("jumlahReturLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, jumlahReturLabel);

        jumlahReturLineEdit = new QLineEdit(formLayoutWidget);
        jumlahReturLineEdit->setObjectName("jumlahReturLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, jumlahReturLineEdit);

        totalReturLabel = new QLabel(formLayoutWidget);
        totalReturLabel->setObjectName("totalReturLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, totalReturLabel);

        totalReturLineEdit = new QLineEdit(formLayoutWidget);
        totalReturLineEdit->setObjectName("totalReturLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, totalReturLineEdit);

        pushButton = new QPushButton(FormRetur);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 260, 93, 29));
        pushButton_2 = new QPushButton(FormRetur);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(280, 260, 93, 29));
        pushButton_3 = new QPushButton(FormRetur);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(120, 310, 93, 29));
        pushButton_4 = new QPushButton(FormRetur);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(280, 310, 93, 29));

        retranslateUi(FormRetur);

        QMetaObject::connectSlotsByName(FormRetur);
    } // setupUi

    void retranslateUi(QWidget *FormRetur)
    {
        FormRetur->setWindowTitle(QCoreApplication::translate("FormRetur", "Form", nullptr));
        noReturLabel->setText(QCoreApplication::translate("FormRetur", "No Retur", nullptr));
        kodeMitraLabel->setText(QCoreApplication::translate("FormRetur", "Kode Mitra", nullptr));
        kodeBarangLabel->setText(QCoreApplication::translate("FormRetur", "Kode Barang", nullptr));
        jumlahReturLabel->setText(QCoreApplication::translate("FormRetur", "Jumlah Retur", nullptr));
        totalReturLabel->setText(QCoreApplication::translate("FormRetur", "Total Retur", nullptr));
        pushButton->setText(QCoreApplication::translate("FormRetur", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormRetur", "Ubah", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormRetur", "Hapus", nullptr));
        pushButton_4->setText(QCoreApplication::translate("FormRetur", "Cari", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormRetur: public Ui_FormRetur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMRETUR_H
