#ifndef TAMPILANUSER_H
#define TAMPILANUSER_H

#include <QMainWindow>
#include <QStandardItemModel>

QT_BEGIN_NAMESPACE
namespace Ui {
class TampilanUser;
}
QT_END_NAMESPACE

class TampilanUser : public QMainWindow
{
    Q_OBJECT

public:
    explicit TampilanUser(QWidget *parent = nullptr);
    ~TampilanUser();

private slots:
    void on_pushButtonTambah_clicked();
    void on_pushButtonUrutkan_clicked();
    void on_pushButtonHapus_clicked();

private:
    Ui::TampilanUser *ui;
    QStandardItemModel *model;

    struct Barang {
        QString kode;
        QString nama;
        int jumlah;
        QString keterangan;
        QString tanggal;
        QString lokasi;
    };

    static const int MAX_BARANG = 100;
    Barang dataBarang[MAX_BARANG];
    int jumlahBarang = 0;

    void bubbleSort();
    void tampilkanData();
    void hapusData(int index);
};

#endif // TAMPILANUSER_H
