#include "formslippembayaran.h"
#include "ui_formslippembayaran.h"

FormSlippembayaran::FormSlippembayaran(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormSlippembayaran)
{
    ui->setupUi(this);
}

FormSlippembayaran::~FormSlippembayaran()
{
    delete ui;
}

void FormSlippembayaran::on_pushButton_clicked()
{
    QSqlQuery sql (koneksi);
    sql.prepare("INSERT INTO slippembayaran (kd_pembayaran, kd_mitra, kd_barang, harga, kuantiti, ttl_harga)"
                "VALUE (:kd_pembayaran, :kd_mitra, :kd_barang, :harga, :kuantiti, :ttl_harga)");
    sql.bindValue(":kd_pembayaran",ui->kodePembayaranLineEdit->text());
    sql.bindValue(":kd_mitra",ui->kodeMitraLineEdit->text());
    sql.bindValue(":kd_barang",ui->kodeBarangLineEdit->text());
    sql.bindValue(":harga",ui->hargaLineEdit->text());
    sql.bindValue(":kuantiti",ui->kuantitiLineEdit->text());
    sql.bindValue(":ttl_harga",ui->totalHargaLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Simpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormSlippembayaran::on_pushButton_2_clicked()
{
    QSqlQuery sql (koneksi);
    sql.prepare("UPDATE slippembayaran SET kd_mitra=:kd_mitra, kd_barang=:kd_barang, "
                "harga=:harga, kuantiti=:kuantiti, ttl_harga=:ttl_harga WHERE kd_pembayaran=:kd_pembayaran)");
    sql.bindValue(":kd_pembayaran",ui->kodePembayaranLineEdit->text());
    sql.bindValue(":kd_mitra",ui->kodeMitraLineEdit->text());
    sql.bindValue(":kd_barang",ui->kodeBarangLineEdit->text());
    sql.bindValue(":harga",ui->hargaLineEdit->text());
    sql.bindValue(":kuantiti",ui->kuantitiLineEdit->text());
    sql.bindValue(":ttl_harga",ui->totalHargaLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Edit";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormSlippembayaran::on_pushButton_4_clicked()
{
    QSqlQuery sql(koneksi);
    QSqlRecord cari;
    sql.prepare("SELECT * FROM slippembayaran WHERE kd_pembayaran=:kd_pembayaran");
    sql.bindValue(":kd_pembayaran",ui->kodePembayaranLineEdit->text());

    if (sql.exec()){
        QSqlRecord cari = sql.record();
        // ui->namaLineEdit->setText(cari.value());
        qDebug()<<cari.value(0).toString();
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormSlippembayaran::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM slippembayaran WHERE kd_pembayaran=:kd_pembayaran");
    sql.bindValue(":kd_pembayaran",ui->kodePembayaranLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

