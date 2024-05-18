#include "halamanuser.h" // Mengimpor header file HalamanUser.h yang berisi deklarasi kelas HalamanUser.
#include "ui_halamanuser.h" // Mengimpor header file ui_halamanuser.h yang berisi deklarasi kelas Ui::HalamanUser.
#include <QStandardItem> // Mengimpor header file QStandardItem yang diperlukan untuk menggunakan kelas QStandardItem.

// Konstruktor HalamanUser
HalamanUser::HalamanUser(QWidget *parent) :
    QMainWindow(parent), // Memanggil konstruktor kelas induk QMainWindow.
    ui(new Ui::HalamanUser) // Menginisialisasi objek ui menggunakan konstruktor baru dari kelas Ui::HalamanUser.
{
    ui->setupUi(this); // Mengatur UI yang telah dibuat menggunakan Qt Designer.

    // Inisialisasi model QStandardItemModel
    model = new QStandardItemModel(this); // Membuat objek model baru dari kelas QStandardItemModel.
    model->setColumnCount(6); // Mengatur jumlah kolom model menjadi 6.

    // Sembunyikan header horizontal QTableView secara default
    ui->tableView->horizontalHeader()->setVisible(false); // Mengatur header horizontal tabel agar tidak terlihat secara default.

    // Set header untuk tabel
    model->setHorizontalHeaderLabels(QStringList() << "Kode Barang" << "Nama Barang" << "Jumlah Barang"
                                                   << "Keterangan Barang" << "Tanggal Masuk" << "Lokasi Barang");
    // Mengatur label untuk header horizontal tabel menggunakan QStringList.

    // Set model untuk QTableView
    ui->tableView->setModel(model); // Mengatur model yang telah dibuat ke dalam QTableView.

    // Set visibilitas header horizontal QTableView menjadi true setelah model diatur
    ui->tableView->horizontalHeader()->setVisible(true); // Mengatur header horizontal tabel agar terlihat.
    ui->tableView->verticalHeader()->setVisible(false); // Mengatur header vertikal tabel agar tidak terlihat.
}

// Destruktor HalamanUser
HalamanUser::~HalamanUser()
{
    delete ui; // Menghapus objek ui yang telah dibuat.
}

// Slot untuk tombol tambah
void HalamanUser::on_pushButtonTambah_clicked()
{
    if (jumlahBarang < MAX_BARANG) {
        // Ambil data dari QLineEdit menggunakan text() bukan toPlainText()
        QString kode = ui->textEditKode->text(); // Mengambil kode barang dari input teks.
        QString nama = ui->textEditNama->text(); // Mengambil nama barang dari input teks.
        int jumlah = ui->textEditJumlah->text().toInt(); // Mengambil jumlah barang dari input teks dan mengonversinya ke integer.
        QString keterangan = ui->textEditKeterangan->text(); // Mengambil keterangan barang dari input teks.
        QString tanggal = ui->textEditTanggal->text(); // Mengambil tanggal masuk barang dari input teks.
        QString lokasi = ui->textEditLokasi->text(); // Mengambil lokasi barang dari input teks.

        // Simpan data ke dalam array
        dataBarang[jumlahBarang].kode = kode; // Menyimpan kode barang ke dalam array.
        dataBarang[jumlahBarang].nama = nama; // Menyimpan nama barang ke dalam array.
        dataBarang[jumlahBarang].jumlah = jumlah; // Menyimpan jumlah barang ke dalam array.
        dataBarang[jumlahBarang].keterangan = keterangan; // Menyimpan keterangan barang ke dalam array.
        dataBarang[jumlahBarang].tanggal = tanggal; // Menyimpan tanggal masuk barang ke dalam array.
        dataBarang[jumlahBarang].lokasi = lokasi; // Menyimpan lokasi barang ke dalam array.

        jumlahBarang++; // Menambah jumlah barang.

        // Tampilkan data ke dalam QTableView
        tampilkanData(); // Memanggil fungsi untuk menampilkan data ke dalam tabel.
    }
}

// Slot untuk tombol urutkan
void HalamanUser::on_pushButtonUrutkan_clicked()
{
    bubbleSort(); // Memanggil fungsi untuk mengurutkan data.
    tampilkanData(); // Memanggil fungsi untuk menampilkan data setelah diurutkan.
}

// Algoritma Bubble Sort untuk mengurutkan dataBarang berdasarkan kode barang
void HalamanUser::bubbleSort()
{
    for (int i = 0; i < jumlahBarang - 1; ++i) {
        for (int j = 0; j < jumlahBarang - i - 1; ++j) {
            // Bandingkan kode barang setelah mengonversinya ke integer
            if (dataBarang[j].kode.toInt() > dataBarang[j + 1].kode.toInt()) {
                // Tukar posisi data
                Barang temp = dataBarang[j];
                dataBarang[j] = dataBarang[j + 1];
                dataBarang[j + 1] = temp;
            }
        }
    }
}

// Fungsi untuk menampilkan data ke dalam QTableView
void HalamanUser::tampilkanData()
{
    // Bersihkan model sebelum menambahkan data baru
    model->clear(); // Menghapus semua data dari model.

    // Set header untuk tabel
    model->setHorizontalHeaderLabels(QStringList() << "Kode Barang" << "Nama Barang" << "Jumlah Barang"
                                                   << "Keterangan Barang" << "Tanggal Masuk" << "Lokasi Barang");
    // Mengatur label untuk header horizontal tabel menggunakan QStringList.

    // Tampilkan data ke dalam QTableView
    for (int i = 0; i < jumlahBarang; ++i) {
        QList<QStandardItem *> rowItems;
        rowItems << new QStandardItem(dataBarang[i].kode)
                 << new QStandardItem(dataBarang[i].nama)
                 << new QStandardItem(QString::number(dataBarang[i].jumlah))
                 << new QStandardItem(dataBarang[i].keterangan)
                 << new QStandardItem(dataBarang[i].tanggal)
                 << new QStandardItem(dataBarang[i].lokasi);
        model->appendRow(rowItems); // Menambahkan baris ke model untuk setiap barang.
    }
}

void HalamanUser::on_pushButtonUpdate_clicked()
{
    // Mendapatkan indeks baris yang dipilih dari QTableView
    QModelIndexList selectedIndexes = ui->tableView->selectionModel()->selectedRows();
    if (!selectedIndexes.isEmpty()) {
        int index = selectedIndexes.at(0).row();

        // Ambil data dari input teks yang ingin diupdate
        QString kode = ui->textEditKode->text(); // Mengambil kode barang dari input teks.
        QString nama = ui->textEditNama->text(); // Mengambil nama barang dari input teks.
        int jumlah = ui->textEditJumlah->text().toInt(); // Mengambil jumlah barang dari input teks dan mengonversinya ke integer.
        QString keterangan = ui->textEditKeterangan->text(); // Mengambil keterangan barang dari input teks.
        QString tanggal = ui->textEditTanggal->text(); // Mengambil tanggal masuk barang dari input teks.
        QString lokasi = ui->textEditLokasi->text(); // Mengambil lokasi barang dari input teks.

        // Update data di dalam array
        dataBarang[index].kode = kode; // Memperbarui kode barang di dalam array.
        dataBarang[index].nama = nama; // Memperbarui nama barang di dalam array.
        dataBarang[index].jumlah = jumlah; // Memperbarui jumlah barang di dalam array.
        dataBarang[index].keterangan = keterangan; // Memperbarui keterangan barang di dalam array.
        dataBarang[index].tanggal = tanggal; // Memperbarui tanggal masuk barang di dalam array.
        dataBarang[index].lokasi = lokasi; // Memperbarui lokasi barang di dalam array.

        // Tampilkan data yang telah diupdate di dalam QTableView
        tampilkanData(); // Memanggil fungsi untuk menampilkan data yang telah diupdate di dalam tabel.
    }
}
