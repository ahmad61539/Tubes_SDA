#include "halamanadmin.h" // Mengimpor header file HalamanAdmin.h yang berisi deklarasi kelas HalamanAdmin.
#include "ui_halamanadmin.h" // Mengimpor header file ui_halamanadmin.h yang berisi deklarasi kelas Ui::HalamanAdmin.
#include <QStandardItem> // Mengimpor header file QStandardItem yang diperlukan untuk menggunakan kelas QStandardItem.
#include <QTextStream> // Mengimpor header file QTextStream yang diperlukan untuk manipulasi teks.

// Konstruktor untuk kelas HalamanAdmin
HalamanAdmin::HalamanAdmin(QWidget *parent) :
    QMainWindow(parent), // Memanggil konstruktor kelas induk QMainWindow.
    ui(new Ui::HalamanAdmin) // Menginisialisasi objek ui menggunakan konstruktor baru dari kelas Ui::HalamanAdmin.
{
    ui->setupUi(this); // Mengatur UI yang telah dibuat menggunakan Qt Designer.

    // Inisialisasi model QStandardItemModel untuk tabel
    model = new QStandardItemModel(this); // Membuat objek model baru dari kelas QStandardItemModel.
    model->setColumnCount(6); // Jumlah kolom diatur sesuai kebutuhan

    // Sembunyikan header horizontal QTableView secara default
    ui->tableView->horizontalHeader()->setVisible(false); // Mengatur header horizontal tabel agar tidak terlihat secara default.

    // Set header untuk tabel
    model->setHorizontalHeaderLabels(QStringList() << "Kode Barang" << "Nama Barang" << "Jumlah Barang"
                                                   << "Keterangan Barang" << "Tanggal Masuk" << "Lokasi Barang");

    // Set model untuk QTableView
    ui->tableView->setModel(model); // Pastikan model diatur ke QTableView di sini

    // Set visibilitas header horizontal QTableView menjadi true setelah model diatur
    ui->tableView->horizontalHeader()->setVisible(true);
    ui->tableView->verticalHeader()->setVisible(false);
}

// Destruktor untuk kelas HalamanAdmin
HalamanAdmin::~HalamanAdmin()
{
    delete ui; // Menghapus objek ui yang telah dibuat.
}

// Slot untuk tombol Tambah data
void HalamanAdmin::on_pushButtonTambah_clicked()
{
    if (jumlahBarang < MAX_BARANG) {
        // Ambil data dari QLineEdit menggunakan text() bukan toPlainText()
        QString kode = ui->textEditKode->text(); // Mengambil kode barang dari input teks.
        QString nama = ui->textEditNama->text(); // Mengambil nama barang dari input teks.
        int jumlah = ui->textEditJumlah->text().toInt(); // Mengambil jumlah barang dari input teks dan mengonversinya ke integer.
        QString keterangan = ui->textEditKeterangan->text(); // Mengambil keterangan barang dari input teks.
        QString tanggal = ui->textEditTanggal->text(); // Mengambil tanggal masuk barang dari input teks.
        QString lokasi = ui->textEditLokasi->text(); // Mengambil lokasi barang dari input teks.

        // Simpan data ke dalam array dataBarang
        dataBarang[jumlahBarang].kode = kode;
        dataBarang[jumlahBarang].nama = nama;
        dataBarang[jumlahBarang].jumlah = jumlah;
        dataBarang[jumlahBarang].keterangan = keterangan;
        dataBarang[jumlahBarang].tanggal = tanggal;
        dataBarang[jumlahBarang].lokasi = lokasi;

        // Tambahkan jumlahBarang
        jumlahBarang++;

        // Tampilkan data ke dalam QTableView
        tampilkanData();
    }
}

// Slot untuk tombol Urutkan
void HalamanAdmin::on_pushButtonUrutkan_clicked()
{
    // Panggil fungsi bubbleSort() untuk mengurutkan dataBarang
    bubbleSort();

    // Tampilkan data terurut ke dalam QTableView
    tampilkanData();
}

// Algoritma Bubble Sort untuk mengurutkan dataBarang berdasarkan kode barang
void HalamanAdmin::bubbleSort()
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


// Menampilkan data dari array dataBarang ke dalam QTableView
void HalamanAdmin::tampilkanData()
{
    // Bersihkan model sebelum menambahkan data baru
    model->clear();

    // Set header untuk tabel
    model->setHorizontalHeaderLabels(QStringList() << "Kode Barang" << "Nama Barang" << "Jumlah Barang"
                                                   << "Keterangan Barang" << "Tanggal Masuk" << "Lokasi Barang");

    // Tampilkan data ke dalam QTableView
    for (int i = 0; i < jumlahBarang; ++i) {
        QList<QStandardItem *> rowItems;
        rowItems << new QStandardItem(dataBarang[i].kode)
                 << new QStandardItem(dataBarang[i].nama)
                 << new QStandardItem(QString::number(dataBarang[i].jumlah))
                 << new QStandardItem(dataBarang[i].keterangan)
                 << new QStandardItem(dataBarang[i].tanggal)
                 << new QStandardItem(dataBarang[i].lokasi);
        model->appendRow(rowItems);
    }
}

// Menghapus data dari model dan array dataBarang
void HalamanAdmin::hapusData(int index)
{
    if (index >= 0 && index < jumlahBarang) {
        // Hapus data dari model
        model->removeRow(index);

        // Geser data pada array untuk menutup celah
        for (int i = index; i < jumlahBarang - 1; ++i) {
            dataBarang[i] = dataBarang[i + 1];
        }

        // Kurangi jumlahBarang karena satu data telah dihapus
        jumlahBarang--;
    }
}

// Slot untuk tombol Hapus data
void HalamanAdmin::on_pushButtonHapus_clicked()
{
    // Dapatkan indeks baris yang dipilih
    QModelIndexList selectedIndexes = ui->tableView->selectionModel()->selectedRows();
    if (!selectedIndexes.isEmpty()) {
        // Hapus data dari model dan array
        int index = selectedIndexes.at(0).row();
        hapusData(index);
    }
}

// Slot untuk tombol update data
void HalamanAdmin::on_pushButtonUpdate_clicked()
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
