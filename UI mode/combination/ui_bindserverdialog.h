/********************************************************************************
** Form generated from reading UI file 'bindserverdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BINDSERVERDIALOG_H
#define UI_BINDSERVERDIALOG_H

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

class Ui_BindServerDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *BindServerDialog)
    {
        if (BindServerDialog->objectName().isEmpty())
            BindServerDialog->setObjectName(QStringLiteral("BindServerDialog"));
        BindServerDialog->resize(405, 375);
        label = new QLabel(BindServerDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 101, 31));
        label_2 = new QLabel(BindServerDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 170, 101, 31));
        textEdit = new QTextEdit(BindServerDialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(33, 58, 321, 101));
        textEdit_2 = new QTextEdit(BindServerDialog);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(30, 210, 321, 101));
        pushButton = new QPushButton(BindServerDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(290, 330, 113, 32));

        retranslateUi(BindServerDialog);

        QMetaObject::connectSlotsByName(BindServerDialog);
    } // setupUi

    void retranslateUi(QDialog *BindServerDialog)
    {
        BindServerDialog->setWindowTitle(QApplication::translate("BindServerDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("BindServerDialog", "\345\256\242\346\210\267\347\253\257\345\217\221\351\200\201\344\277\241\346\201\257\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("BindServerDialog", "\346\234\215\345\212\241\347\253\257\350\277\224\345\233\236\344\277\241\346\201\257\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("BindServerDialog", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BindServerDialog: public Ui_BindServerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BINDSERVERDIALOG_H
