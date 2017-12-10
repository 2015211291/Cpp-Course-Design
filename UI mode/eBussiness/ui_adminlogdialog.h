/********************************************************************************
** Form generated from reading UI file 'adminlogdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGDIALOG_H
#define UI_ADMINLOGDIALOG_H

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

class Ui_AdminLogDialog
{
public:
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_4;

    void setupUi(QDialog *AdminLogDialog)
    {
        if (AdminLogDialog->objectName().isEmpty())
            AdminLogDialog->setObjectName(QStringLiteral("AdminLogDialog"));
        AdminLogDialog->resize(421, 269);
        lineEdit_2 = new QLineEdit(AdminLogDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 140, 201, 21));
        pushButton_3 = new QPushButton(AdminLogDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 210, 113, 32));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        label_3 = new QLabel(AdminLogDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 140, 60, 16));
        label = new QLabel(AdminLogDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 10, 171, 71));
        QFont font;
        font.setPointSize(28);
        label->setFont(font);
        label_2 = new QLabel(AdminLogDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(19, 90, 91, 20));
        lineEdit = new QLineEdit(AdminLogDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 90, 201, 21));
        pushButton_4 = new QPushButton(AdminLogDialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 210, 113, 32));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(AdminLogDialog);

        QMetaObject::connectSlotsByName(AdminLogDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminLogDialog)
    {
        AdminLogDialog->setWindowTitle(QApplication::translate("AdminLogDialog", "Dialog", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("AdminLogDialog", "\347\231\273\345\275\225", Q_NULLPTR));
        label_3->setText(QApplication::translate("AdminLogDialog", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("AdminLogDialog", "\347\231\273\345\275\225", Q_NULLPTR));
        label_2->setText(QApplication::translate("AdminLogDialog", "\347\256\241\347\220\206\345\221\230\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("AdminLogDialog", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdminLogDialog: public Ui_AdminLogDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGDIALOG_H
