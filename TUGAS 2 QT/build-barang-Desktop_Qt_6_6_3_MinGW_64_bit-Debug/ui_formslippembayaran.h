/********************************************************************************
** Form generated from reading UI file 'formslippembayaran.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSLIPPEMBAYARAN_H
#define UI_FORMSLIPPEMBAYARAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormSlippembayaran
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *kodePembayaranLabel;
    QLineEdit *kodePembayaranLineEdit;
    QLabel *kodeMitraLabel;
    QLineEdit *kodeMitraLineEdit;
    QLabel *kodeBarangLabel;
    QLineEdit *kodeBarangLineEdit;
    QLabel *hargaLabel;
    QLineEdit *hargaLineEdit;
    QLabel *kuantitiLabel;
    QLineEdit *kuantitiLineEdit;
    QLabel *totalHargaLabel;
    QLineEdit *totalHargaLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *FormSlippembayaran)
    {
        if (FormSlippembayaran->objectName().isEmpty())
            FormSlippembayaran->setObjectName("FormSlippembayaran");
        FormSlippembayaran->resize(850, 578);
        formLayoutWidget = new QWidget(FormSlippembayaran);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(110, 70, 321, 201));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        kodePembayaranLabel = new QLabel(formLayoutWidget);
        kodePembayaranLabel->setObjectName("kodePembayaranLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, kodePembayaranLabel);

        kodePembayaranLineEdit = new QLineEdit(formLayoutWidget);
        kodePembayaranLineEdit->setObjectName("kodePembayaranLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, kodePembayaranLineEdit);

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

        hargaLabel = new QLabel(formLayoutWidget);
        hargaLabel->setObjectName("hargaLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, hargaLabel);

        hargaLineEdit = new QLineEdit(formLayoutWidget);
        hargaLineEdit->setObjectName("hargaLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, hargaLineEdit);

        kuantitiLabel = new QLabel(formLayoutWidget);
        kuantitiLabel->setObjectName("kuantitiLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, kuantitiLabel);

        kuantitiLineEdit = new QLineEdit(formLayoutWidget);
        kuantitiLineEdit->setObjectName("kuantitiLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, kuantitiLineEdit);

        totalHargaLabel = new QLabel(formLayoutWidget);
        totalHargaLabel->setObjectName("totalHargaLabel");

        formLayout->setWidget(5, QFormLayout::LabelRole, totalHargaLabel);

        totalHargaLineEdit = new QLineEdit(formLayoutWidget);
        totalHargaLineEdit->setObjectName("totalHargaLineEdit");

        formLayout->setWidget(5, QFormLayout::FieldRole, totalHargaLineEdit);

        pushButton = new QPushButton(FormSlippembayaran);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 290, 93, 29));
        pushButton_2 = new QPushButton(FormSlippembayaran);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(290, 290, 93, 29));
        pushButton_3 = new QPushButton(FormSlippembayaran);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(140, 340, 93, 29));
        pushButton_4 = new QPushButton(FormSlippembayaran);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(290, 340, 93, 29));

        retranslateUi(FormSlippembayaran);

        QMetaObject::connectSlotsByName(FormSlippembayaran);
    } // setupUi

    void retranslateUi(QWidget *FormSlippembayaran)
    {
        FormSlippembayaran->setWindowTitle(QCoreApplication::translate("FormSlippembayaran", "Form", nullptr));
        kodePembayaranLabel->setText(QCoreApplication::translate("FormSlippembayaran", "Kode Pembayaran", nullptr));
        kodeMitraLabel->setText(QCoreApplication::translate("FormSlippembayaran", "Kode Mitra", nullptr));
        kodeBarangLabel->setText(QCoreApplication::translate("FormSlippembayaran", "Kode Barang", nullptr));
        hargaLabel->setText(QCoreApplication::translate("FormSlippembayaran", "Harga", nullptr));
        kuantitiLabel->setText(QCoreApplication::translate("FormSlippembayaran", "Kuantiti", nullptr));
        totalHargaLabel->setText(QCoreApplication::translate("FormSlippembayaran", "Total Harga", nullptr));
        pushButton->setText(QCoreApplication::translate("FormSlippembayaran", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormSlippembayaran", "Ubah", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormSlippembayaran", "Hapus", nullptr));
        pushButton_4->setText(QCoreApplication::translate("FormSlippembayaran", "Cari", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormSlippembayaran: public Ui_FormSlippembayaran {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSLIPPEMBAYARAN_H
