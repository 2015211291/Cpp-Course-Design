/********************************************************************************
** Form generated from reading UI file 'ebdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EBDIALOG_H
#define UI_EBDIALOG_H

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

class Ui_eBDialog
{
public:
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *eBDialog)
    {
        if (eBDialog->objectName().isEmpty())
            eBDialog->setObjectName(QStringLiteral("eBDialog"));
        eBDialog->resize(481, 263);
        pushButton_3 = new QPushButton(eBDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(340, 210, 113, 32));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4 = new QPushButton(eBDialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(50, 210, 113, 32));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(eBDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 10, 171, 71));
        QFont font;
        font.setPointSize(28);
        label->setFont(font);
        label_2 = new QLabel(eBDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 90, 60, 16));
        lineEdit = new QLineEdit(eBDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(160, 90, 201, 21));
        label_3 = new QLabel(eBDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 140, 60, 16));
        lineEdit_2 = new QLineEdit(eBDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 140, 201, 21));

        retranslateUi(eBDialog);

        QMetaObject::connectSlotsByName(eBDialog);
    } // setupUi

    void retranslateUi(QDialog *eBDialog)
    {
        eBDialog->setWindowTitle(QApplication::translate("eBDialog", "Dialog", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("eBDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("eBDialog", "\351\200\200\345\207\272", Q_NULLPTR));
        label->setText(QApplication::translate("eBDialog", "\346\263\250\345\206\214", Q_NULLPTR));
        label_2->setText(QApplication::translate("eBDialog", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("eBDialog", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class eBDialog: public Ui_eBDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EBDIALOG_H
