#include "formutama.h"
#include "ui_formutama.h"
#include <qstring.h>

formUtama::formUtama(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::formUtama)
{
    ui->setupUi(this);
    forbar = new FormBarang;
    formit = new FormMitra;
    forpes = new FormPesanan;
    forret = new FormRetur;
    forslip = new FormSlippembayaran;

}

formUtama::~formUtama()
{
    delete ui;
}

void formUtama::on_pushButton_clicked()
{
    forbar->show();
}


void formUtama::on_pushButton_2_clicked()
{
    formit->show();
}


void formUtama::on_pushButton_3_clicked()
{
    forpes->show();
}


void formUtama::on_pushButton_4_clicked()
{
    forret->show();
}


void formUtama::on_pushButton_5_clicked()
{
    forslip->show();
}

