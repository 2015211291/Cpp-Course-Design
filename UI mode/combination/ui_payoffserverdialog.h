/********************************************************************************
** Form generated from reading UI file 'payoffserverdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYOFFSERVERDIALOG_H
#define UI_PAYOFFSERVERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_PayOffServerDialog
{
public:
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *PayOffServerDialog)
    {
        if (PayOffServerDialog->objectName().isEmpty())
            PayOffServerDialog->setObjectName(QStringLiteral("PayOffServerDialog"));
        PayOffServerDialog->resize(402, 362);
        textEdit = new QTextEdit(PayOffServerDialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(23, 38, 321, 101));
        textEdit_2 = new QTextEdit(PayOffServerDialog);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(20, 190, 321, 101));
        pushButton = new QPushButton(PayOffServerDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 310, 113, 32));
        label_2 = new QLabel(PayOffServerDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 150, 101, 31));
        label = new QLabel(PayOffServerDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 101, 31));

        retranslateUi(PayOffServerDialog);

        QMetaObject::connectSlotsByName(PayOffServerDialog);
    } // setupUi

    void retranslateUi(QDialog *PayOffServerDialog)
    {
        PayOffServerDialog->setWindowTitle(QApplication::translate("PayOffServerDialog", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("PayOffServerDialog", "\351\200\200\345\207\272", Q_NULLPTR));
        label_2->setText(QApplication::translate("PayOffServerDialog", "\346\234\215\345\212\241\347\253\257\350\277\224\345\233\236\344\277\241\346\201\257\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("PayOffServerDialog", "\345\256\242\346\210\267\347\253\257\345\217\221\351\200\201\344\277\241\346\201\257\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PayOffServerDialog: public Ui_PayOffServerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYOFFSERVERDIALOG_H
