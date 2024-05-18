#include "tampilanuser.h"
#include "ui_tampilanuser.h"
#include <QStandardItem>

TampilanUser::TampilanUser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TampilanUser)
{
    ui->setupUi(this);

    // Inisialisasi model QStandardItemModel
    model = new QStandardItemModel(this);
    model->setColumnCount(6); // Sesuaikan dengan jumlah kolom

    // Sembunyikan header horizontal QTableView secara default
    ui->tableView->horizontalHeader()->setVisible(false);

    // Set header untuk tabel
    model->setHorizontalHeaderLabels(QStringList() << "Kode Barang" << "Nama Barang" << "Jumlah Barang"
                                                   << "Keterangan Barang" << "Tanggal Masuk" << "Lokasi Barang");

    // Set model untuk QTableView
    ui->tableView->setModel(model); // Pastikan model diatur ke QTableView di sini

    // Set visibilitas header horizontal QTableView menjadi true setelah model diatur
    ui->tableView->horizontalHeader()->setVisible(true);
    ui->tableView->verticalHeader()->setVisible(false);
}

TampilanUser::~TampilanUser()
{
    delete ui;
}

void TampilanUser::on_pushButtonTambah_clicked()
{
    if (jumlahBarang < MAX_BARANG) {
        // Ambil data dari QLineEdit menggunakan text() bukan toPlainText()
        QString kode = ui->textEditKode->text();
        QString nama = ui->textEditNama->text();
        int jumlah = ui->textEditJumlah->text().toInt();
        QString keterangan = ui->textEditKeterangan->text();
        QString tanggal = ui->textEditTanggal->text();
        QString lokasi = ui->textEditLokasi->text();

        // Simpan data ke dalam array
        dataBarang[jumlahBarang].kode = kode;
        dataBarang[jumlahBarang].nama = nama;
        dataBarang[jumlahBarang].jumlah = jumlah;
        dataBarang[jumlahBarang].keterangan = keterangan;
        dataBarang[jumlahBarang].tanggal = tanggal;
        dataBarang[jumlahBarang].lokasi = lokasi;

        jumlahBarang++;

        // Tampilkan data ke dalam QTableView
        tampilkanData();
    }
}


void TampilanUser::on_pushButtonUrutkan_clicked()
{
    bubbleSort();
    tampilkanData();
}

void TampilanUser::bubbleSort()
{
    for (int i = 0; i < jumlahBarang - 1; ++i) {
        for (int j = 0; j < jumlahBarang - i - 1; ++j) {
            // Bandingkan kode barang untuk pengurutan
            if (dataBarang[j].kode > dataBarang[j + 1].kode) {
                // Tukar posisi data
                Barang temp = dataBarang[j];
                dataBarang[j] = dataBarang[j + 1];
                dataBarang[j + 1] = temp;
            }
        }
    }
}

void TampilanUser::tampilkanData()
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
