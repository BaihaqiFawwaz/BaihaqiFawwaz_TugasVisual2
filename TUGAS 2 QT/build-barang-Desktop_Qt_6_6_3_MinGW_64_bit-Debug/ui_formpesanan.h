/********************************************************************************
** Form generated from reading UI file 'formpesanan.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMPESANAN_H
#define UI_FORMPESANAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormPesanan
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *kodePesanLabel;
    QLineEdit *kodePesanLineEdit;
    QLabel *kodeMitraLabel;
    QLineEdit *kodeMitraLineEdit;
    QLabel *tanggalPesanLabel;
    QDateEdit *tanggalPesanDateEdit;
    QLabel *kodeBarangLabel;
    QLineEdit *kodeBarangLineEdit;
    QLabel *namaBarangLabel;
    QLineEdit *namaBarangLineEdit;
    QLabel *kuantitiLabel;
    QLineEdit *kuantitiLineEdit;
    QLabel *hargaLabel;
    QLineEdit *hargaLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *FormPesanan)
    {
        if (FormPesanan->objectName().isEmpty())
            FormPesanan->setObjectName("FormPesanan");
        FormPesanan->resize(840, 597);
        formLayoutWidget = new QWidget(FormPesanan);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(70, 50, 291, 241));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        kodePesanLabel = new QLabel(formLayoutWidget);
        kodePesanLabel->setObjectName("kodePesanLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, kodePesanLabel);

        kodePesanLineEdit = new QLineEdit(formLayoutWidget);
        kodePesanLineEdit->setObjectName("kodePesanLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, kodePesanLineEdit);

        kodeMitraLabel = new QLabel(formLayoutWidget);
        kodeMitraLabel->setObjectName("kodeMitraLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, kodeMitraLabel);

        kodeMitraLineEdit = new QLineEdit(formLayoutWidget);
        kodeMitraLineEdit->setObjectName("kodeMitraLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, kodeMitraLineEdit);

        tanggalPesanLabel = new QLabel(formLayoutWidget);
        tanggalPesanLabel->setObjectName("tanggalPesanLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, tanggalPesanLabel);

        tanggalPesanDateEdit = new QDateEdit(formLayoutWidget);
        tanggalPesanDateEdit->setObjectName("tanggalPesanDateEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, tanggalPesanDateEdit);

        kodeBarangLabel = new QLabel(formLayoutWidget);
        kodeBarangLabel->setObjectName("kodeBarangLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, kodeBarangLabel);

        kodeBarangLineEdit = new QLineEdit(formLayoutWidget);
        kodeBarangLineEdit->setObjectName("kodeBarangLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, kodeBarangLineEdit);

        namaBarangLabel = new QLabel(formLayoutWidget);
        namaBarangLabel->setObjectName("namaBarangLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, namaBarangLabel);

        namaBarangLineEdit = new QLineEdit(formLayoutWidget);
        namaBarangLineEdit->setObjectName("namaBarangLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, namaBarangLineEdit);

        kuantitiLabel = new QLabel(formLayoutWidget);
        kuantitiLabel->setObjectName("kuantitiLabel");

        formLayout->setWidget(5, QFormLayout::LabelRole, kuantitiLabel);

        kuantitiLineEdit = new QLineEdit(formLayoutWidget);
        kuantitiLineEdit->setObjectName("kuantitiLineEdit");

        formLayout->setWidget(5, QFormLayout::FieldRole, kuantitiLineEdit);

        hargaLabel = new QLabel(formLayoutWidget);
        hargaLabel->setObjectName("hargaLabel");

        formLayout->setWidget(6, QFormLayout::LabelRole, hargaLabel);

        hargaLineEdit = new QLineEdit(formLayoutWidget);
        hargaLineEdit->setObjectName("hargaLineEdit");

        formLayout->setWidget(6, QFormLayout::FieldRole, hargaLineEdit);

        pushButton = new QPushButton(FormPesanan);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(110, 310, 93, 29));
        pushButton_2 = new QPushButton(FormPesanan);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(110, 350, 93, 29));
        pushButton_3 = new QPushButton(FormPesanan);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(230, 310, 93, 29));
        pushButton_4 = new QPushButton(FormPesanan);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(230, 350, 93, 29));

        retranslateUi(FormPesanan);

        QMetaObject::connectSlotsByName(FormPesanan);
    } // setupUi

    void retranslateUi(QWidget *FormPesanan)
    {
        FormPesanan->setWindowTitle(QCoreApplication::translate("FormPesanan", "Form", nullptr));
        kodePesanLabel->setText(QCoreApplication::translate("FormPesanan", "Kode Pesan", nullptr));
        kodeMitraLabel->setText(QCoreApplication::translate("FormPesanan", "Kode Mitra", nullptr));
        tanggalPesanLabel->setText(QCoreApplication::translate("FormPesanan", "Tanggal Pesan", nullptr));
        kodeBarangLabel->setText(QCoreApplication::translate("FormPesanan", "Kode Barang", nullptr));
        namaBarangLabel->setText(QCoreApplication::translate("FormPesanan", "Nama Barang", nullptr));
        kuantitiLabel->setText(QCoreApplication::translate("FormPesanan", "Kuantiti", nullptr));
        hargaLabel->setText(QCoreApplication::translate("FormPesanan", "Harga", nullptr));
        pushButton->setText(QCoreApplication::translate("FormPesanan", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormPesanan", "Hapus", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormPesanan", "Ubah", nullptr));
        pushButton_4->setText(QCoreApplication::translate("FormPesanan", "Cari", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormPesanan: public Ui_FormPesanan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPESANAN_H
