#ifndef FORMUTAMA_H
#define FORMUTAMA_H

#include <QMainWindow>
#include <formbarang.h>
#include <formmitra.h>
#include <formpesanan.h>
#include <formretur.h>
#include <formslippembayaran.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class formUtama;
}
QT_END_NAMESPACE

class formUtama : public QMainWindow
{
    Q_OBJECT

public:
    formUtama(QWidget *parent = nullptr);
    ~formUtama();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::formUtama *ui;
    FormBarang *forbar;
    FormMitra *formit;
    FormPesanan *forpes;
    FormRetur *forret;
    FormSlippembayaran *forslip;
};
#endif // FORMUTAMA_H
