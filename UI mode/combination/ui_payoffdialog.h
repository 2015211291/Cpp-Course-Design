/********************************************************************************
** Form generated from reading UI file 'payoffdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYOFFDIALOG_H
#define UI_PAYOFFDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PayOffDialog
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *PayOffDialog)
    {
        if (PayOffDialog->objectName().isEmpty())
            PayOffDialog->setObjectName(QStringLiteral("PayOffDialog"));
        PayOffDialog->resize(400, 220);
        label = new QLabel(PayOffDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 81, 21));
        lineEdit = new QLineEdit(PayOffDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 20, 113, 21));
        label_2 = new QLabel(PayOffDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 70, 71, 16));
        comboBox = new QComboBox(PayOffDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(120, 70, 241, 26));
        pushButton = new QPushButton(PayOffDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 170, 113, 32));
        pushButton_2 = new QPushButton(PayOffDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 170, 113, 32));
        label_3 = new QLabel(PayOffDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 120, 41, 21));
        lineEdit_2 = new QLineEdit(PayOffDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 120, 151, 21));

        retranslateUi(PayOffDialog);

        QMetaObject::connectSlotsByName(PayOffDialog);
    } // setupUi

    void retranslateUi(QDialog *PayOffDialog)
    {
        PayOffDialog->setWindowTitle(QApplication::translate("PayOffDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("PayOffDialog", "\350\256\242\345\215\225\346\200\273\344\273\267(\345\205\203)\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("PayOffDialog", "\351\200\211\346\213\251\351\223\266\350\241\214\345\215\241:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("PayOffDialog", "\346\224\257\344\273\230", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("PayOffDialog", "\350\277\224\345\233\236", Q_NULLPTR));
        label_3->setText(QApplication::translate("PayOffDialog", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PayOffDialog: public Ui_PayOffDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYOFFDIALOG_H
