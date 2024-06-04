#include "formretur.h"
#include "ui_formretur.h"

FormRetur::FormRetur(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormRetur)
{
    ui->setupUi(this);
}

FormRetur::~FormRetur()
{
    delete ui;
}

void FormRetur::on_pushButton_clicked()
{
    QSqlQuery sql (koneksi);
    sql.prepare("INSERT INTO retur (no_retur, kd_mitra, kd_barang, jmlh_retur, ttl_retur)"
                "VALUE (:no_retur, :kd_mitra, :kd_barang, :jmlh_retur, :ttl_retur)");
    sql.bindValue(":no_retur",ui->noReturLineEdit->text());
    sql.bindValue(":kd_mitra",ui->kodeMitraLineEdit->text());
    sql.bindValue(":kd_barang",ui->kodeBarangLineEdit->text());
    sql.bindValue(":jmlh_retur",ui->jumlahReturLineEdit->text());
    sql.bindValue(":ttl_retur",ui->totalReturLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Simpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormRetur::on_pushButton_2_clicked()
{
    QSqlQuery sql (koneksi);
    sql.prepare("UPDATE retur SET kd_mitra=:kd_mitra, kd_barang=:kd_barang, "
                "jmlh_retur=:jmlh_retur, ttl_retur=:ttl_retur WHERE no_retur=:no_retur)");
    sql.bindValue(":no_retur",ui->noReturLineEdit->text());
    sql.bindValue(":kd_mitra",ui->kodeMitraLineEdit->text());
    sql.bindValue(":kd_barang",ui->kodeBarangLineEdit->text());
    sql.bindValue(":jmlh_retur",ui->jumlahReturLineEdit->text());
    sql.bindValue(":ttl_retur",ui->totalReturLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Simpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormRetur::on_pushButton_4_clicked()
{
    QSqlQuery sql(koneksi);
    QSqlRecord cari;
    sql.prepare("SELECT * FROM retur WHERE no_retur=:no_retur");
    sql.bindValue(":no_retur",ui->noReturLineEdit->text());

    if (sql.exec()){
        QSqlRecord cari = sql.record();
        // ui->namaLineEdit->setText(cari.value());
        qDebug()<<cari.value(0).toString();
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormRetur::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM retur WHERE no_retur=:no_retur");
    sql.bindValue(":no_retur",ui->noReturLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

