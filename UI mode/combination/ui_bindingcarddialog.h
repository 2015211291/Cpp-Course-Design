/********************************************************************************
** Form generated from reading UI file 'bindingcarddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BINDINGCARDDIALOG_H
#define UI_BINDINGCARDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_BindingCardDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLabel *label_3;

    void setupUi(QDialog *BindingCardDialog)
    {
        if (BindingCardDialog->objectName().isEmpty())
            BindingCardDialog->setObjectName(QStringLiteral("BindingCardDialog"));
        BindingCardDialog->resize(427, 267);
        label = new QLabel(BindingCardDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 0, 171, 71));
        QFont font;
        font.setPointSize(28);
        label->setFont(font);
        label_2 = new QLabel(BindingCardDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 80, 60, 16));
        lineEdit_2 = new QLineEdit(BindingCardDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 130, 201, 21));
        pushButton_1 = new QPushButton(BindingCardDialog);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(10, 200, 113, 32));
        pushButton_1->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2 = new QPushButton(BindingCardDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 200, 113, 32));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        lineEdit = new QLineEdit(BindingCardDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 80, 201, 21));
        label_3 = new QLabel(BindingCardDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 130, 60, 16));

        retranslateUi(BindingCardDialog);

        QMetaObject::connectSlotsByName(BindingCardDialog);
    } // setupUi

    void retranslateUi(QDialog *BindingCardDialog)
    {
        BindingCardDialog->setWindowTitle(QApplication::translate("BindingCardDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("BindingCardDialog", "\347\273\221\345\256\232\351\223\266\350\241\214\345\215\241", Q_NULLPTR));
        label_2->setText(QApplication::translate("BindingCardDialog", "\345\215\241\345\217\267\357\274\232", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("BindingCardDialog", "\351\200\200\345\207\272", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("BindingCardDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("BindingCardDialog", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BindingCardDialog: public Ui_BindingCardDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BINDINGCARDDIALOG_H
