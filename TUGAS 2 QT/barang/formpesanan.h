#ifndef FORMPESANAN_H
#define FORMPESANAN_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>

namespace Ui {
class FormPesanan;
}

class FormPesanan : public QWidget
{
    Q_OBJECT

public:
    explicit FormPesanan(QWidget *parent = nullptr);
    ~FormPesanan();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::FormPesanan *ui;
    QSqlDatabase koneksi;
    QSqlQuery sql;
    QSqlRecord cari;
};

#endif // FORMPESANAN_H
