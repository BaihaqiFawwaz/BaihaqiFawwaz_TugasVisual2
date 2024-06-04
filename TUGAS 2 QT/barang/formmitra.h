#ifndef FORMMITRA_H
#define FORMMITRA_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>

namespace Ui {
class FormMitra;
}

class FormMitra : public QWidget
{
    Q_OBJECT

public:
    explicit FormMitra(QWidget *parent = nullptr);
    ~FormMitra();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::FormMitra *ui;
    QSqlDatabase koneksi;
    QSqlQuery sql;
    QSqlRecord cari;
};

#endif // FORMMITRA_H
