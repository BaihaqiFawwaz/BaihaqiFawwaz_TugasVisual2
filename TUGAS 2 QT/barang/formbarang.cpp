#include "formbarang.h"
#include "ui_formbarang.h"

FormBarang::FormBarang(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormBarang)
{
    ui->setupUi(this);

    QSqlDatabase koneksi = QSqlDatabase::addDatabase("QODBC");
    koneksi.setDatabaseName("dsn_sistemkesehatan");
    koneksi.setUserName("root");
    koneksi.setPassword("");

    if(!koneksi.open()){
        qDebug()<<koneksi.lastError().text();
    }else{
        qDebug()<<"Database Terkoneksi";

    }
}

FormBarang::~FormBarang()
{
    delete ui;
}

void FormBarang::on_pushButton_2_clicked()
{
    QSqlQuery sql (koneksi);
    sql.prepare("INSERT INTO barang (kd_barang, kd_mitra, nama_barang, harga, stok)"
                "VALUE (:kd_barang, :kd_mitra, :nama_barang, :harga, :stok)");
    sql.bindValue(":kd_barang",ui->kodeBarangLineEdit->text());
    sql.bindValue(":kd_mitra",ui->kodeMitraLineEdit->text());
    sql.bindValue(":nama_barang",ui->namaBarangLineEdit->text());
    sql.bindValue(":harga",ui->hargaLineEdit->text());
    sql.bindValue(":stok",ui->stokLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Simpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormBarang::on_pushButton_clicked()
{
    QSqlQuery sql (koneksi);
    sql.prepare("UPDATE barang SET kd_mitra=:kd_mitra, nama_barang=:nama_barang, "
                "harga=:harga, stok=:stok WHERE kd_barang=:kd_barang");
    sql.bindValue(":kd_barang",ui->kodeBarangLineEdit->text());
    sql.bindValue(":kd_mitra",ui->kodeMitraLineEdit->text());
    sql.bindValue(":nama_barang",ui->namaBarangLineEdit->text());
    sql.bindValue(":harga",ui->hargaLineEdit->text());
    sql.bindValue(":stok",ui->stokLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Edit";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormBarang::on_pushButton_4_clicked()
{
    QSqlQuery sql(koneksi);
    QSqlRecord cari;
    sql.prepare("SELECT * FROM barang WHERE kd_barang=:kd_barang");
    sql.bindValue(":kd_barang",ui->kodeBarangLineEdit->text());

    if (sql.exec()){
        QSqlRecord cari = sql.record();
        // ui->namaLineEdit->setText(cari.value());
        qDebug()<<cari.value(0).toString();
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormBarang::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM barang WHERE kd_barang=:kd_barang");
    sql.bindValue(":kd_barang",ui->kodeBarangLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

