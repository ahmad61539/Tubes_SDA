/********************************************************************************
** Form generated from reading UI file 'halamanuser.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HALAMANUSER_H
#define UI_HALAMANUSER_H

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

class Ui_HalamanUser
{
public:
    QWidget *centralwidget;
    QPushButton *pushButtonTambah;
    QDateEdit *textEditTanggal;
    QLabel *label_7;
    QTableView *tableView;
    QLineEdit *textEditKeterangan;
    QLabel *label_6;
    QPushButton *pushButtonUrutkan;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_8;
    QLineEdit *textEditKode;
    QLabel *label_3;
    QLineEdit *textEditJumlah;
    QLabel *label;
    QLineEdit *textEditNama;
    QLineEdit *textEditLokasi;
    QLabel *label_4;
    QPushButton *pushButtonUpdate;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HalamanUser)
    {
        if (HalamanUser->objectName().isEmpty())
            HalamanUser->setObjectName("HalamanUser");
        HalamanUser->resize(1291, 768);
        HalamanUser->setStyleSheet(QString::fromUtf8("background-image: url(:/bg/bg.jpg);"));
        centralwidget = new QWidget(HalamanUser);
        centralwidget->setObjectName("centralwidget");
        pushButtonTambah = new QPushButton(centralwidget);
        pushButtonTambah->setObjectName("pushButtonTambah");
        pushButtonTambah->setGeometry(QRect(90, 590, 121, 31));
        pushButtonTambah->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        textEditTanggal = new QDateEdit(centralwidget);
        textEditTanggal->setObjectName("textEditTanggal");
        textEditTanggal->setGeometry(QRect(280, 440, 181, 22));
        textEditTanggal->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(110, 440, 101, 21));
        QFont font;
        font.setPointSize(12);
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        label_7->setFrameShape(QFrame::NoFrame);
        label_7->setAlignment(Qt::AlignCenter);
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(585, 221, 621, 401));
        tableView->setContextMenuPolicy(Qt::DefaultContextMenu);
        tableView->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        textEditKeterangan = new QLineEdit(centralwidget);
        textEditKeterangan->setObjectName("textEditKeterangan");
        textEditKeterangan->setGeometry(QRect(280, 390, 181, 22));
        textEditKeterangan->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(110, 390, 141, 21));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        label_6->setFrameShape(QFrame::NoFrame);
        label_6->setAlignment(Qt::AlignCenter);
        pushButtonUrutkan = new QPushButton(centralwidget);
        pushButtonUrutkan->setObjectName("pushButtonUrutkan");
        pushButtonUrutkan->setGeometry(QRect(390, 590, 121, 31));
        pushButtonUrutkan->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(110, 340, 101, 21));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        label_5->setFrameShape(QFrame::NoFrame);
        label_5->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(590, 80, 121, 61));
        QFont font1;
        font1.setPointSize(16);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        label_2->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(110, 490, 101, 21));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        label_8->setFrameShape(QFrame::NoFrame);
        label_8->setAlignment(Qt::AlignCenter);
        textEditKode = new QLineEdit(centralwidget);
        textEditKode->setObjectName("textEditKode");
        textEditKode->setGeometry(QRect(280, 240, 181, 22));
        textEditKode->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 240, 101, 21));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        label_3->setFrameShape(QFrame::NoFrame);
        label_3->setAlignment(Qt::AlignCenter);
        textEditJumlah = new QLineEdit(centralwidget);
        textEditJumlah->setObjectName("textEditJumlah");
        textEditJumlah->setGeometry(QRect(280, 340, 181, 22));
        textEditJumlah->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(590, 40, 121, 61));
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        label->setAlignment(Qt::AlignCenter);
        textEditNama = new QLineEdit(centralwidget);
        textEditNama->setObjectName("textEditNama");
        textEditNama->setGeometry(QRect(280, 290, 181, 22));
        textEditNama->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        textEditLokasi = new QLineEdit(centralwidget);
        textEditLokasi->setObjectName("textEditLokasi");
        textEditLokasi->setGeometry(QRect(280, 490, 181, 22));
        textEditLokasi->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(110, 290, 101, 21));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        label_4->setFrameShape(QFrame::NoFrame);
        label_4->setAlignment(Qt::AlignCenter);
        pushButtonUpdate = new QPushButton(centralwidget);
        pushButtonUpdate->setObjectName("pushButtonUpdate");
        pushButtonUpdate->setGeometry(QRect(240, 590, 121, 31));
        pushButtonUpdate->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/Company.jpg);"));
        HalamanUser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HalamanUser);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1291, 26));
        HalamanUser->setMenuBar(menubar);
        statusbar = new QStatusBar(HalamanUser);
        statusbar->setObjectName("statusbar");
        HalamanUser->setStatusBar(statusbar);

        retranslateUi(HalamanUser);

        QMetaObject::connectSlotsByName(HalamanUser);
    } // setupUi

    void retranslateUi(QMainWindow *HalamanUser)
    {
        HalamanUser->setWindowTitle(QCoreApplication::translate("HalamanUser", "MainWindow", nullptr));
        pushButtonTambah->setText(QCoreApplication::translate("HalamanUser", "Tambahkan Barang", nullptr));
        label_7->setText(QCoreApplication::translate("HalamanUser", "Tanggal Masuk", nullptr));
        label_6->setText(QCoreApplication::translate("HalamanUser", "Keterangan Barang", nullptr));
        pushButtonUrutkan->setText(QCoreApplication::translate("HalamanUser", "Urutkan Barang", nullptr));
        label_5->setText(QCoreApplication::translate("HalamanUser", "Jumlah Barang", nullptr));
        label_2->setText(QCoreApplication::translate("HalamanUser", "USER", nullptr));
        label_8->setText(QCoreApplication::translate("HalamanUser", "Lokasi Barang", nullptr));
        label_3->setText(QCoreApplication::translate("HalamanUser", "Kode Barang", nullptr));
        label->setText(QCoreApplication::translate("HalamanUser", "TAMPILAN", nullptr));
        label_4->setText(QCoreApplication::translate("HalamanUser", "Nama Barang", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("HalamanUser", "Update Barang", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HalamanUser: public Ui_HalamanUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HALAMANUSER_H
