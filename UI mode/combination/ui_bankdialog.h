/********************************************************************************
** Form generated from reading UI file 'bankdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANKDIALOG_H
#define UI_BANKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_BankDialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;

    void setupUi(QDialog *BankDialog)
    {
        if (BankDialog->objectName().isEmpty())
            BankDialog->setObjectName(QStringLiteral("BankDialog"));
        BankDialog->resize(400, 300);
        BankDialog->setStyleSheet(QStringLiteral(""));
        pushButton = new QPushButton(BankDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 140, 111, 31));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2 = new QPushButton(BankDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 140, 111, 31));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QStringLiteral(""));
        pushButton_3 = new QPushButton(BankDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 250, 91, 31));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(BankDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 10, 291, 41));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral(""));

        retranslateUi(BankDialog);

        QMetaObject::connectSlotsByName(BankDialog);
    } // setupUi

    void retranslateUi(QDialog *BankDialog)
    {
        BankDialog->setWindowTitle(QApplication::translate("BankDialog", "BankDialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("BankDialog", "\346\263\250\345\206\214", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("BankDialog", "\347\231\273\345\275\225", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("BankDialog", "\351\200\200\345\207\272", Q_NULLPTR));
        label->setText(QApplication::translate("BankDialog", "             \351\223\266\350\241\214\347\263\273\347\273\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BankDialog: public Ui_BankDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANKDIALOG_H
