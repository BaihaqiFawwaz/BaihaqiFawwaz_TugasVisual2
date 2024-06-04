/********************************************************************************
** Form generated from reading UI file 'formbarang.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMBARANG_H
#define UI_FORMBARANG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormBarang
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *kodeBarangLabel;
    QLineEdit *kodeBarangLineEdit;
    QLabel *kodeMitraLabel;
    QLineEdit *kodeMitraLineEdit;
    QLabel *namaBarangLabel;
    QLineEdit *namaBarangLineEdit;
    QLabel *hargaLabel;
    QLineEdit *hargaLineEdit;
    QLabel *stokLabel;
    QLineEdit *stokLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *FormBarang)
    {
        if (FormBarang->objectName().isEmpty())
            FormBarang->setObjectName("FormBarang");
        FormBarang->resize(1264, 598);
        formLayoutWidget = new QWidget(FormBarang);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(90, 50, 261, 161));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        kodeBarangLabel = new QLabel(formLayoutWidget);
        kodeBarangLabel->setObjectName("kodeBarangLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, kodeBarangLabel);

        kodeBarangLineEdit = new QLineEdit(formLayoutWidget);
        kodeBarangLineEdit->setObjectName("kodeBarangLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, kodeBarangLineEdit);

        kodeMitraLabel = new QLabel(formLayoutWidget);
        kodeMitraLabel->setObjectName("kodeMitraLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, kodeMitraLabel);

        kodeMitraLineEdit = new QLineEdit(formLayoutWidget);
        kodeMitraLineEdit->setObjectName("kodeMitraLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, kodeMitraLineEdit);

        namaBarangLabel = new QLabel(formLayoutWidget);
        namaBarangLabel->setObjectName("namaBarangLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, namaBarangLabel);

        namaBarangLineEdit = new QLineEdit(formLayoutWidget);
        namaBarangLineEdit->setObjectName("namaBarangLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, namaBarangLineEdit);

        hargaLabel = new QLabel(formLayoutWidget);
        hargaLabel->setObjectName("hargaLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, hargaLabel);

        hargaLineEdit = new QLineEdit(formLayoutWidget);
        hargaLineEdit->setObjectName("hargaLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, hargaLineEdit);

        stokLabel = new QLabel(formLayoutWidget);
        stokLabel->setObjectName("stokLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, stokLabel);

        stokLineEdit = new QLineEdit(formLayoutWidget);
        stokLineEdit->setObjectName("stokLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, stokLineEdit);

        pushButton = new QPushButton(FormBarang);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(240, 230, 111, 29));
        pushButton_2 = new QPushButton(FormBarang);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(100, 230, 111, 29));
        pushButton_3 = new QPushButton(FormBarang);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(102, 270, 111, 29));
        pushButton_4 = new QPushButton(FormBarang);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(240, 270, 111, 29));

        retranslateUi(FormBarang);

        QMetaObject::connectSlotsByName(FormBarang);
    } // setupUi

    void retranslateUi(QWidget *FormBarang)
    {
        FormBarang->setWindowTitle(QCoreApplication::translate("FormBarang", "Form", nullptr));
        kodeBarangLabel->setText(QCoreApplication::translate("FormBarang", "Kode Barang", nullptr));
        kodeMitraLabel->setText(QCoreApplication::translate("FormBarang", "Kode Mitra", nullptr));
        namaBarangLabel->setText(QCoreApplication::translate("FormBarang", "Nama Barang", nullptr));
        hargaLabel->setText(QCoreApplication::translate("FormBarang", "Harga", nullptr));
        stokLabel->setText(QCoreApplication::translate("FormBarang", "Stok", nullptr));
        pushButton->setText(QCoreApplication::translate("FormBarang", "Ubah", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormBarang", "Simpan", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormBarang", "Hapus", nullptr));
        pushButton_4->setText(QCoreApplication::translate("FormBarang", "Cari", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormBarang: public Ui_FormBarang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMBARANG_H
