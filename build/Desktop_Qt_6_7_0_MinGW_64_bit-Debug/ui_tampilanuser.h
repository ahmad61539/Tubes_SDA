/********************************************************************************
** Form generated from reading UI file 'tampilanuser.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAMPILANUSER_H
#define UI_TAMPILANUSER_H

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

class Ui_TampilanUser
{
public:
    QWidget *centralwidget;
    QPushButton *pushButtonTambah;
    QDateEdit *textEditTanggal;
    QLabel *label_7;
    QLineEdit *textEditKeterangan;
    QLabel *label_6;
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
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TampilanUser)
    {
        if (TampilanUser->objectName().isEmpty())
            TampilanUser->setObjectName("TampilanUser");
        TampilanUser->resize(1298, 701);
        centralwidget = new QWidget(TampilanUser);
        centralwidget->setObjectName("centralwidget");
        pushButtonTambah = new QPushButton(centralwidget);
        pushButtonTambah->setObjectName("pushButtonTambah");
        pushButtonTambah->setGeometry(QRect(110, 570, 121, 31));
        textEditTanggal = new QDateEdit(centralwidget);
        textEditTanggal->setObjectName("textEditTanggal");
        textEditTanggal->setGeometry(QRect(280, 400, 181, 22));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(110, 400, 101, 21));
        QFont font;
        font.setPointSize(12);
        label_7->setFont(font);
        label_7->setFrameShape(QFrame::NoFrame);
        label_7->setAlignment(Qt::AlignCenter);
        textEditKeterangan = new QLineEdit(centralwidget);
        textEditKeterangan->setObjectName("textEditKeterangan");
        textEditKeterangan->setGeometry(QRect(280, 350, 181, 22));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(110, 350, 141, 21));
        label_6->setFont(font);
        label_6->setFrameShape(QFrame::NoFrame);
        label_6->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(110, 300, 101, 21));
        label_5->setFont(font);
        label_5->setFrameShape(QFrame::NoFrame);
        label_5->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(550, 60, 121, 61));
        QFont font1;
        font1.setPointSize(16);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(110, 450, 101, 21));
        label_8->setFont(font);
        label_8->setFrameShape(QFrame::NoFrame);
        label_8->setAlignment(Qt::AlignCenter);
        textEditKode = new QLineEdit(centralwidget);
        textEditKode->setObjectName("textEditKode");
        textEditKode->setGeometry(QRect(280, 200, 181, 22));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 200, 101, 21));
        label_3->setFont(font);
        label_3->setFrameShape(QFrame::NoFrame);
        label_3->setAlignment(Qt::AlignCenter);
        textEditJumlah = new QLineEdit(centralwidget);
        textEditJumlah->setObjectName("textEditJumlah");
        textEditJumlah->setGeometry(QRect(280, 300, 181, 22));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(550, 20, 121, 61));
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        textEditNama = new QLineEdit(centralwidget);
        textEditNama->setObjectName("textEditNama");
        textEditNama->setGeometry(QRect(280, 250, 181, 22));
        textEditLokasi = new QLineEdit(centralwidget);
        textEditLokasi->setObjectName("textEditLokasi");
        textEditLokasi->setGeometry(QRect(280, 450, 181, 22));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(110, 250, 101, 21));
        label_4->setFont(font);
        label_4->setFrameShape(QFrame::NoFrame);
        label_4->setAlignment(Qt::AlignCenter);
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(595, 201, 671, 431));
        tableView->setMouseTracking(false);
        TampilanUser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TampilanUser);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1298, 22));
        TampilanUser->setMenuBar(menubar);
        statusbar = new QStatusBar(TampilanUser);
        statusbar->setObjectName("statusbar");
        TampilanUser->setStatusBar(statusbar);

        retranslateUi(TampilanUser);

        QMetaObject::connectSlotsByName(TampilanUser);
    } // setupUi

    void retranslateUi(QMainWindow *TampilanUser)
    {
        TampilanUser->setWindowTitle(QCoreApplication::translate("TampilanUser", "MainWindow", nullptr));
        pushButtonTambah->setText(QCoreApplication::translate("TampilanUser", "Tambahkan Barang", nullptr));
        label_7->setText(QCoreApplication::translate("TampilanUser", "Tanggal Masuk", nullptr));
        label_6->setText(QCoreApplication::translate("TampilanUser", "Keterangan Barang", nullptr));
        label_5->setText(QCoreApplication::translate("TampilanUser", "Jumlah Barang", nullptr));
        label_2->setText(QCoreApplication::translate("TampilanUser", "ADMIN", nullptr));
        label_8->setText(QCoreApplication::translate("TampilanUser", "Lokasi Barang", nullptr));
        label_3->setText(QCoreApplication::translate("TampilanUser", "Kode Barang", nullptr));
        label->setText(QCoreApplication::translate("TampilanUser", "TAMPILAN", nullptr));
        label_4->setText(QCoreApplication::translate("TampilanUser", "Nama Barang", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TampilanUser: public Ui_TampilanUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAMPILANUSER_H
