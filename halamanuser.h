#ifndef HALAMANUSER_H // Guarda header: mencegah inklusi ganda dari file header yang sama.
#define HALAMANUSER_H // Mendefinisikan makro HALAMANUSER_H untuk menandai awal dari file header.

#include <QMainWindow> // Sertakan file header yang diperlukan untuk QMainWindow.
#include <QStandardItemModel> // Sertakan file header yang diperlukan untuk QStandardItemModel.

QT_BEGIN_NAMESPACE // Mulai namespace Qt.
namespace Ui {
class HalamanUser; // Deklarasikan kelas HalamanUser dalam namespace Ui.
}
QT_END_NAMESPACE // Akhiri namespace Qt.

class HalamanUser : public QMainWindow // Tentukan kelas HalamanUser, mewarisi dari QMainWindow.
{
    Q_OBJECT // Makro yang diperlukan untuk mendukung sinyal dan slot.

public:
    explicit HalamanUser(QWidget *parent = nullptr); // Deklarasi konstruktor dengan parameter parent opsional.
    ~HalamanUser(); // Deklarasi destruktor.

private slots:
    void on_pushButtonTambah_clicked(); // Deklarasi slot privat untuk menangani acara klik tombol tambah.
    void on_pushButtonUrutkan_clicked(); // Deklarasi slot privat untuk menangani acara klik tombol urutkan.
    void on_pushButtonUpdate_clicked(); // Deklarasi slot untuk tombol Update.

private:
    Ui::HalamanUser *ui; // Pointer ke kelas UI yang dihasilkan oleh Qt Designer.
    QStandardItemModel *model; // Pointer ke QStandardItemModel yang digunakan untuk tabel.

    // Definisikan sebuah struct bernama Barang untuk merepresentasikan data barang.
    struct Barang {
        QString kode; // Kode barang.
        QString nama; // Nama barang.
        int jumlah; // Jumlah barang.
        QString keterangan; // Deskripsi barang.
        QString tanggal; // Tanggal masuk barang.
        QString lokasi; // Lokasi barang.
    };

    static const int MAX_BARANG = 100; // Jumlah maksimum barang.
    Barang dataBarang[MAX_BARANG]; // Array untuk menyimpan data barang.
    int jumlahBarang = 0; // Variabel untuk melacak jumlah barang.

    void bubbleSort(); // Fungsi untuk mengurutkan barang menggunakan algoritma bubble sort.
    void tampilkanData(); // Fungsi untuk menampilkan data barang di tabel.
};

#endif // HALAMANUSER_H // Akhir dari file header dan makro HALAMANUSER_H.
