/********************************************************************************
** Form generated from reading UI file 'siinventaris.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIINVENTARIS_H
#define UI_SIINVENTARIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SiInventaris
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *loginButton;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SiInventaris)
    {
        if (SiInventaris->objectName().isEmpty())
            SiInventaris->setObjectName("SiInventaris");
        SiInventaris->resize(764, 583);
        SiInventaris->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 192, 208);"));
        centralwidget = new QWidget(SiInventaris);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 50, 91, 71));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(175, 192, 208);"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(330, 100, 151, 71));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 192, 208);"));
        label_2->setAlignment(Qt::AlignCenter);
        usernameLineEdit = new QLineEdit(centralwidget);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setGeometry(QRect(370, 251, 141, 31));
        usernameLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(28, 63, 95);\n"
""));
        passwordLineEdit = new QLineEdit(centralwidget);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(370, 301, 141, 31));
        passwordLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(28, 63, 95);\n"
""));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(250, 250, 81, 31));
        QFont font1;
        font1.setPointSize(12);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 63, 95);"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(250, 300, 81, 31));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 171, 192);\n"
"background-color: rgb(28, 63, 95);"));
        label_4->setAlignment(Qt::AlignCenter);
        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(370, 380, 91, 41));
        loginButton->setFont(font1);
        loginButton->setStyleSheet(QString::fromUtf8("border-color: rgb(28, 63, 95);\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(28, 63, 95);\n"
""));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(40, -60, 51, 861));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 63, 95);"));
        SiInventaris->setCentralWidget(centralwidget);
        label_2->raise();
        usernameLineEdit->raise();
        passwordLineEdit->raise();
        label_3->raise();
        label_4->raise();
        loginButton->raise();
        label->raise();
        lineEdit->raise();
        menubar = new QMenuBar(SiInventaris);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 764, 26));
        SiInventaris->setMenuBar(menubar);
        statusbar = new QStatusBar(SiInventaris);
        statusbar->setObjectName("statusbar");
        SiInventaris->setStatusBar(statusbar);

        retranslateUi(SiInventaris);

        QMetaObject::connectSlotsByName(SiInventaris);
    } // setupUi

    void retranslateUi(QMainWindow *SiInventaris)
    {
        SiInventaris->setWindowTitle(QCoreApplication::translate("SiInventaris", "SiInventaris", nullptr));
        label->setText(QCoreApplication::translate("SiInventaris", "<html><head/><body><p><span style=\" font-weight:700; text-decoration: underline; color:#1c3f5f;\">LOGIN</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("SiInventaris", "<html><head/><body><p><span style=\" font-weight:700; text-decoration: underline; color:#1c3f5f;\">INVENTARIS</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("SiInventaris", "<html><head/><body><p><span style=\" color:#ffffff;\">Username</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("SiInventaris", "<html><head/><body><p><span style=\" color:#ffffff;\">Password</span></p></body></html>", nullptr));
        loginButton->setText(QCoreApplication::translate("SiInventaris", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SiInventaris: public Ui_SiInventaris {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIINVENTARIS_H
