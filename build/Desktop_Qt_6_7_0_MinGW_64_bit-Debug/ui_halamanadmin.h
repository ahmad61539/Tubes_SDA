/********************************************************************************
** Form generated from reading UI file 'halamanadmin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HALAMANADMIN_H
#define UI_HALAMANADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HalamanAdmin
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *textEditNama;
    QLineEdit *textEditJumlah;
    QLineEdit *textEditKeterangan;
    QLineEdit *textEditKode;
    QLineEdit *textEditLokasi;
    QDateEdit *textEditTanggal;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButtonTambah;
    QPushButton *pushButtonHapus;
    QTableView *tableView;
    QPushButton *pushButtonUrutkan;
    QPushButton *pushButtonUpdate;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HalamanAdmin)
    {
        if (HalamanAdmin->objectName().isEmpty())
            HalamanAdmin->setObjectName("HalamanAdmin");
        HalamanAdmin->resize(1298, 701);
        HalamanAdmin->setStyleSheet(QString::fromUtf8("background-image: url(:/bg/bg.jpg);"));
        centralwidget = new QWidget(HalamanAdmin);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(490, 10, 121, 61));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(490, 50, 121, 61));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        label_2->setAlignment(Qt::AlignCenter);
        textEditNama = new QLineEdit(centralwidget);
        textEditNama->setObjectName("textEditNama");
        textEditNama->setGeometry(QRect(220, 240, 181, 22));
        textEditNama->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        textEditJumlah = new QLineEdit(centralwidget);
        textEditJumlah->setObjectName("textEditJumlah");
        textEditJumlah->setGeometry(QRect(220, 290, 181, 22));
        textEditJumlah->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        textEditKeterangan = new QLineEdit(centralwidget);
        textEditKeterangan->setObjectName("textEditKeterangan");
        textEditKeterangan->setGeometry(QRect(220, 340, 181, 22));
        textEditKeterangan->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        textEditKode = new QLineEdit(centralwidget);
        textEditKode->setObjectName("textEditKode");
        textEditKode->setGeometry(QRect(220, 190, 181, 22));
        textEditKode->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        textEditLokasi = new QLineEdit(centralwidget);
        textEditLokasi->setObjectName("textEditLokasi");
        textEditLokasi->setGeometry(QRect(220, 440, 181, 22));
        textEditLokasi->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        textEditTanggal = new QDateEdit(centralwidget);
        textEditTanggal->setObjectName("textEditTanggal");
        textEditTanggal->setGeometry(QRect(220, 390, 181, 22));
        textEditTanggal->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 190, 101, 21));
        QFont font1;
        font1.setPointSize(12);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        label_3->setFrameShape(QFrame::NoFrame);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 240, 101, 21));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        label_4->setFrameShape(QFrame::NoFrame);
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 290, 101, 21));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        label_5->setFrameShape(QFrame::NoFrame);
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 340, 141, 21));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        label_6->setFrameShape(QFrame::NoFrame);
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(50, 390, 101, 21));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        label_7->setFrameShape(QFrame::NoFrame);
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(50, 440, 101, 21));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        label_8->setFrameShape(QFrame::NoFrame);
        label_8->setAlignment(Qt::AlignCenter);
        pushButtonTambah = new QPushButton(centralwidget);
        pushButtonTambah->setObjectName("pushButtonTambah");
        pushButtonTambah->setGeometry(QRect(50, 560, 121, 31));
        pushButtonTambah->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        pushButtonHapus = new QPushButton(centralwidget);
        pushButtonHapus->setObjectName("pushButtonHapus");
        pushButtonHapus->setGeometry(QRect(50, 500, 121, 31));
        pushButtonHapus->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(500, 180, 651, 421));
        tableView->setContextMenuPolicy(Qt::DefaultContextMenu);
        tableView->setStyleSheet(QString::fromUtf8("background-image: url(:/tampilan/Company Profile.jpg);\n"
"background-image: url(:/new/prefix1/Company.jpg);\n"
""));
        pushButtonUrutkan = new QPushButton(centralwidget);
        pushButtonUrutkan->setObjectName("pushButtonUrutkan");
        pushButtonUrutkan->setGeometry(QRect(260, 560, 121, 31));
        pushButtonUrutkan->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        pushButtonUpdate = new QPushButton(centralwidget);
        pushButtonUpdate->setObjectName("pushButtonUpdate");
        pushButtonUpdate->setGeometry(QRect(260, 500, 121, 31));
        pushButtonUpdate->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        HalamanAdmin->setCentralWidget(centralwidget);
        tableView->raise();
        label->raise();
        label_2->raise();
        textEditNama->raise();
        textEditJumlah->raise();
        textEditKeterangan->raise();
        textEditKode->raise();
        textEditLokasi->raise();
        textEditTanggal->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        pushButtonTambah->raise();
        pushButtonHapus->raise();
        pushButtonUrutkan->raise();
        pushButtonUpdate->raise();
        menubar = new QMenuBar(HalamanAdmin);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1298, 26));
        HalamanAdmin->setMenuBar(menubar);
        statusbar = new QStatusBar(HalamanAdmin);
        statusbar->setObjectName("statusbar");
        HalamanAdmin->setStatusBar(statusbar);

        retranslateUi(HalamanAdmin);

        QMetaObject::connectSlotsByName(HalamanAdmin);
    } // setupUi

    void retranslateUi(QMainWindow *HalamanAdmin)
    {
        HalamanAdmin->setWindowTitle(QCoreApplication::translate("HalamanAdmin", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("HalamanAdmin", "TAMPILAN", nullptr));
        label_2->setText(QCoreApplication::translate("HalamanAdmin", "ADMIN", nullptr));
        label_3->setText(QCoreApplication::translate("HalamanAdmin", "Kode Barang", nullptr));
        label_4->setText(QCoreApplication::translate("HalamanAdmin", "Nama Barang", nullptr));
        label_5->setText(QCoreApplication::translate("HalamanAdmin", "Jumlah Barang", nullptr));
        label_6->setText(QCoreApplication::translate("HalamanAdmin", "Keterangan Barang", nullptr));
        label_7->setText(QCoreApplication::translate("HalamanAdmin", "Tanggal Masuk", nullptr));
        label_8->setText(QCoreApplication::translate("HalamanAdmin", "Lokasi Barang", nullptr));
        pushButtonTambah->setText(QCoreApplication::translate("HalamanAdmin", "Tambahkan Barang", nullptr));
        pushButtonHapus->setText(QCoreApplication::translate("HalamanAdmin", "Hapus Barang", nullptr));
        pushButtonUrutkan->setText(QCoreApplication::translate("HalamanAdmin", "Urutkan Barang", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("HalamanAdmin", "Update Barang", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HalamanAdmin: public Ui_HalamanAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HALAMANADMIN_H
