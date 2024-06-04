#ifndef FORMSLIPPEMBAYARAN_H
#define FORMSLIPPEMBAYARAN_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>

namespace Ui {
class FormSlippembayaran;
}

class FormSlippembayaran : public QWidget
{
    Q_OBJECT

public:
    explicit FormSlippembayaran(QWidget *parent = nullptr);
    ~FormSlippembayaran();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::FormSlippembayaran *ui;
    QSqlDatabase koneksi;
    QSqlQuery sql;
    QSqlRecord cari;
};

#endif // FORMSLIPPEMBAYARAN_H
