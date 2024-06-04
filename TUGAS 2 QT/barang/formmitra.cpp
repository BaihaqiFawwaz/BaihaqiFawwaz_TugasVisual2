#include "formmitra.h"
#include "ui_formmitra.h"

FormMitra::FormMitra(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormMitra)
{
    ui->setupUi(this);
}

FormMitra::~FormMitra()
{
    delete ui;
}

void FormMitra::on_pushButton_clicked()
{
    QSqlQuery sql (koneksi);
    sql.prepare("INSERT INTO mitra (kd_mitra, nama_mitra, alamat, telp)"
                "VALUE (:kd_mitra, :nama_mitra, :alamat, :telp)");
    sql.bindValue(":kd_mitra",ui->kodeMitraLineEdit->text());
    sql.bindValue(":nama_mitra",ui->namaMitraLineEdit->text());
    sql.bindValue(":alamat",ui->alamatLineEdit->text());
    sql.bindValue(":telp",ui->telpLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Simpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormMitra::on_pushButton_2_clicked()
{
    QSqlQuery sql (koneksi);
    sql.prepare("UPDATE mitra SET nama_mitra=:nama_mitra, alamat=:alamat, telp=:telp WHERE kd_mitra=:kd_mitra");
    sql.bindValue(":kd_mitra",ui->kodeMitraLineEdit->text());
    sql.bindValue(":nama_mitra",ui->namaMitraLineEdit->text());
    sql.bindValue(":alamat",ui->alamatLineEdit->text());
    sql.bindValue(":telp",ui->telpLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Edit";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormMitra::on_pushButton_4_clicked()
{
    QSqlQuery sql(koneksi);
    QSqlRecord cari;
    sql.prepare("SELECT * FROM mitra WHERE kd_mitra=:kd_mitra");
    sql.bindValue(":kd_mitra",ui->kodeMitraLineEdit->text());

    if (sql.exec()){
        QSqlRecord cari = sql.record();
        // ui->namaLineEdit->setText(cari.value());
        qDebug()<<cari.value(0).toString();
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormMitra::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM mitra WHERE kd_mitra=:kd_mitra");
    sql.bindValue(":kd_mitra",ui->kodeMitraLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

