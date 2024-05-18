#include "siinventaris.h" // Mengimpor file header siinventaris.h yang berisi deklarasi kelas SiInventaris.
#include "halamanadmin.h" // Mengimpor file header halamanadmin.h yang berisi deklarasi kelas HalamanAdmin.
#include "halamanuser.h" // Mengimpor file header halamanuser.h yang berisi deklarasi kelas HalamanUser.
#include "ui_siinventaris.h" // Mengimpor file header ui_siinventaris.h yang berisi deklarasi kelas Ui::SiInventaris.
#include "ui_halamanadmin.h" // Mengimpor file header ui_halamanadmin.h yang berisi deklarasi kelas Ui::HalamanAdmin.
#include "ui_halamanuser.h" // Mengimpor file header ui_halamanuser.h yang berisi deklarasi kelas Ui::HalamanUser.
#include <QMessageBox> // Mengimpor header file QMessageBox yang diperlukan untuk menampilkan pesan dialog.

SiInventaris::SiInventaris(QWidget *parent)
    : QMainWindow(parent) // Memanggil konstruktor kelas induk QMainWindow.
    , ui(new Ui::SiInventaris) // Menginisialisasi objek ui menggunakan konstruktor baru dari kelas Ui::SiInventaris.
{
    ui->setupUi(this); // Mengatur UI yang telah dibuat menggunakan Qt Designer.
}

SiInventaris::~SiInventaris() // Destruktor untuk kelas SiInventaris.
{
    delete ui; // Menghapus objek ui yang telah dibuat.
}

void SiInventaris::on_loginButton_clicked() // Slot untuk tombol login yang diklik.
{
    QString username = ui->usernameLineEdit->text(); // Mendapatkan username dari input line edit.
    QString password = ui->passwordLineEdit->text(); // Mendapatkan password dari input line edit.

    // Memeriksa apakah username dan password sesuai dengan yang diinginkan
    if (username == "admin" && password == "jaemin") { // Jika login sebagai admin
        // Jika sesuai, tampilkan pesan berhasil dan lanjutkan ke aplikasi utama
        QMessageBox::information(this, "Login", "Login sebagai admin berhasil!");
        // Lanjutkan ke aplikasi utama, yaitu HalamanAdmin
        HalamanAdmin *halamanAdmin = new HalamanAdmin(); // Membuat objek HalamanAdmin
        halamanAdmin->show(); // Menampilkan HalamanAdmin
        this->close(); // Menutup jendela login
    }
    else if (username == "user" && password == "jaemin") { // Jika login sebagai user
        QMessageBox::information(this, "Login", "Login sebagai user berhasil!");
        HalamanUser *halamanUser = new HalamanUser(); // Membuat objek HalamanUser
        halamanUser->show(); // Menampilkan HalamanUser
        this->close(); // Menutup jendela login
    }
    else {
        // Jika tidak sesuai, tampilkan pesan gagal login
        QMessageBox::warning(this, "Login", "Username atau password salah!");
    }
}
