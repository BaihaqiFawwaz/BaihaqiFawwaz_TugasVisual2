/********************************************************************************
** Form generated from reading UI file 'formmitra.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMMITRA_H
#define UI_FORMMITRA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormMitra
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *kodeMitraLabel;
    QLineEdit *kodeMitraLineEdit;
    QLabel *namaMitraLabel;
    QLineEdit *namaMitraLineEdit;
    QLabel *alamatLabel;
    QLineEdit *alamatLineEdit;
    QLabel *telpLabel;
    QLineEdit *telpLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *FormMitra)
    {
        if (FormMitra->objectName().isEmpty())
            FormMitra->setObjectName("FormMitra");
        FormMitra->resize(961, 587);
        formLayoutWidget = new QWidget(FormMitra);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(50, 40, 281, 141));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        kodeMitraLabel = new QLabel(formLayoutWidget);
        kodeMitraLabel->setObjectName("kodeMitraLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, kodeMitraLabel);

        kodeMitraLineEdit = new QLineEdit(formLayoutWidget);
        kodeMitraLineEdit->setObjectName("kodeMitraLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, kodeMitraLineEdit);

        namaMitraLabel = new QLabel(formLayoutWidget);
        namaMitraLabel->setObjectName("namaMitraLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, namaMitraLabel);

        namaMitraLineEdit = new QLineEdit(formLayoutWidget);
        namaMitraLineEdit->setObjectName("namaMitraLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, namaMitraLineEdit);

        alamatLabel = new QLabel(formLayoutWidget);
        alamatLabel->setObjectName("alamatLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, alamatLabel);

        alamatLineEdit = new QLineEdit(formLayoutWidget);
        alamatLineEdit->setObjectName("alamatLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, alamatLineEdit);

        telpLabel = new QLabel(formLayoutWidget);
        telpLabel->setObjectName("telpLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, telpLabel);

        telpLineEdit = new QLineEdit(formLayoutWidget);
        telpLineEdit->setObjectName("telpLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, telpLineEdit);

        pushButton = new QPushButton(FormMitra);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 190, 93, 29));
        pushButton_2 = new QPushButton(FormMitra);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(200, 190, 93, 29));
        pushButton_3 = new QPushButton(FormMitra);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(60, 230, 93, 29));
        pushButton_4 = new QPushButton(FormMitra);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(200, 230, 93, 29));

        retranslateUi(FormMitra);

        QMetaObject::connectSlotsByName(FormMitra);
    } // setupUi

    void retranslateUi(QWidget *FormMitra)
    {
        FormMitra->setWindowTitle(QCoreApplication::translate("FormMitra", "Form", nullptr));
        kodeMitraLabel->setText(QCoreApplication::translate("FormMitra", "Kode Mitra", nullptr));
        namaMitraLabel->setText(QCoreApplication::translate("FormMitra", "Nama Mitra", nullptr));
        alamatLabel->setText(QCoreApplication::translate("FormMitra", "Alamat", nullptr));
        telpLabel->setText(QCoreApplication::translate("FormMitra", "Telp", nullptr));
        pushButton->setText(QCoreApplication::translate("FormMitra", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormMitra", "Ubah", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormMitra", "Hapus", nullptr));
        pushButton_4->setText(QCoreApplication::translate("FormMitra", "Cari", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormMitra: public Ui_FormMitra {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMMITRA_H
