#include "formpesanan.h"
#include "ui_formpesanan.h"

FormPesanan::FormPesanan(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormPesanan)
{
    ui->setupUi(this);
}

FormPesanan::~FormPesanan()
{
    delete ui;
}

void FormPesanan::on_pushButton_clicked()
{
    QSqlQuery sql (koneksi);
    sql.prepare("INSERT INTO pesanan (kd_pesan, kd_mitra, tgl_pesan, kd_barang, nama_barang, kuantiti, harga)"
                "VALUE (:kd_pesan, :kd_mitra, :tgl_pesan, :kd_barang, :nama_barang, :kuantiti, :harga)");
    sql.bindValue(":kd_pesan",ui->kodePesanLineEdit->text());
    sql.bindValue(":kd_mitra",ui->kodeMitraLineEdit->text());
    sql.bindValue(":tgl_pesan",ui->tanggalPesanDateEdit->date().toString("YYYY-MM-DD"));
    sql.bindValue(":kd_barang",ui->kodeBarangLineEdit->text());
    sql.bindValue(":nama_barang",ui->namaBarangLineEdit->text());
    sql.bindValue(":kuantiti",ui->kuantitiLineEdit->text());
    sql.bindValue(":harga",ui->hargaLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Simpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormPesanan::on_pushButton_3_clicked()
{
    QSqlQuery sql (koneksi);
    sql.prepare("UPDATE pesanan SET kd_mitra=:kd_mitra, tgl_pesan=:tgl_pesan, kd_barang=:kd_barang, "
                "nama_barang=:nama_barang, kuantiti=:kuantiti, harga=:harga WHERE kd_pesan=:kd_pesan");
    sql.bindValue(":kd_pesan",ui->kodePesanLineEdit->text());
    sql.bindValue(":kd_mitra",ui->kodeMitraLineEdit->text());
    sql.bindValue(":tgl_pesan",ui->tanggalPesanDateEdit->date().toString("YYYY-MM-DD"));
    sql.bindValue(":kd_barang",ui->kodeBarangLineEdit->text());
    sql.bindValue(":nama_barang",ui->namaBarangLineEdit->text());
    sql.bindValue(":kuantiti",ui->kuantitiLineEdit->text());
    sql.bindValue(":harga",ui->hargaLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Edit";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormPesanan::on_pushButton_4_clicked()
{
    QSqlQuery sql(koneksi);
    QSqlRecord cari;
    sql.prepare("SELECT * FROM pesanan WHERE kd_pesan=:kd_pesan");
    sql.bindValue(":kd_pesan",ui->kodePesanLineEdit->text());

    if (sql.exec()){
        QSqlRecord cari = sql.record();
        // ui->namaLineEdit->setText(cari.value());
        qDebug()<<cari.value(0).toString();
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormPesanan::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM pesanan WHERE kd_pesan=:kd_pesan");
    sql.bindValue(":kd_pesan",ui->kodePesanLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

