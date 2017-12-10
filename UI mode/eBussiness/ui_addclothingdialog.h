/********************************************************************************
** Form generated from reading UI file 'addclothingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCLOTHINGDIALOG_H
#define UI_ADDCLOTHINGDIALOG_H

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
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AddClothingDialog
{
public:
    QLabel *label_5;
    QLabel *label_4;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_3;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_4;
    QLabel *label_8;
    QPushButton *pushButton_2;
    QLabel *label_7;
    QComboBox *comboBox;
    QComboBox *comboBox_2;

    void setupUi(QDialog *AddClothingDialog)
    {
        if (AddClothingDialog->objectName().isEmpty())
            AddClothingDialog->setObjectName(QStringLiteral("AddClothingDialog"));
        AddClothingDialog->resize(434, 516);
        label_5 = new QLabel(AddClothingDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 230, 60, 16));
        label_4 = new QLabel(AddClothingDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 150, 60, 16));
        textEdit = new QTextEdit(AddClothingDialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(130, 320, 241, 111));
        pushButton = new QPushButton(AddClothingDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(290, 450, 113, 32));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        lineEdit_2 = new QLineEdit(AddClothingDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 70, 81, 21));
        lineEdit_6 = new QLineEdit(AddClothingDialog);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(130, 190, 81, 21));
        lineEdit_3 = new QLineEdit(AddClothingDialog);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(130, 110, 81, 21));
        label_6 = new QLabel(AddClothingDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(70, 190, 60, 16));
        label = new QLabel(AddClothingDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 30, 60, 16));
        label_2 = new QLabel(AddClothingDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 70, 60, 16));
        label_3 = new QLabel(AddClothingDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 110, 60, 16));
        lineEdit = new QLineEdit(AddClothingDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(130, 30, 171, 21));
        lineEdit_4 = new QLineEdit(AddClothingDialog);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(130, 150, 81, 21));
        label_8 = new QLabel(AddClothingDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(50, 310, 60, 16));
        pushButton_2 = new QPushButton(AddClothingDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 450, 113, 32));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        label_7 = new QLabel(AddClothingDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(70, 270, 60, 16));
        comboBox = new QComboBox(AddClothingDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(130, 230, 104, 26));
        comboBox_2 = new QComboBox(AddClothingDialog);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(130, 270, 104, 26));

        retranslateUi(AddClothingDialog);

        QMetaObject::connectSlotsByName(AddClothingDialog);
    } // setupUi

    void retranslateUi(QDialog *AddClothingDialog)
    {
        AddClothingDialog->setWindowTitle(QApplication::translate("AddClothingDialog", "Dialog", Q_NULLPTR));
        label_5->setText(QApplication::translate("AddClothingDialog", "\345\260\272\347\240\201\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("AddClothingDialog", "\346\212\230\346\211\243\347\263\273\346\225\260\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AddClothingDialog", "\345\256\214\346\210\220", Q_NULLPTR));
        lineEdit_2->setText(QString());
        lineEdit_6->setText(QString());
        lineEdit_3->setText(QString());
        label_6->setText(QApplication::translate("AddClothingDialog", "\345\216\237\346\226\231\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("AddClothingDialog", "\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddClothingDialog", "\346\225\260\351\207\217(\344\273\266)\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddClothingDialog", "\345\215\225\344\273\267(\345\205\203)\357\274\232", Q_NULLPTR));
        lineEdit_4->setText(QString());
        label_8->setText(QApplication::translate("AddClothingDialog", "\344\272\247\345\223\201\346\217\217\350\277\260\357\274\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("AddClothingDialog", "\350\277\224\345\233\236", Q_NULLPTR));
        label_7->setText(QApplication::translate("AddClothingDialog", "\347\261\273\345\236\213\357\274\232", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("AddClothingDialog", "XXS", Q_NULLPTR)
         << QApplication::translate("AddClothingDialog", "XS", Q_NULLPTR)
         << QApplication::translate("AddClothingDialog", "S", Q_NULLPTR)
         << QApplication::translate("AddClothingDialog", "M", Q_NULLPTR)
         << QApplication::translate("AddClothingDialog", "L", Q_NULLPTR)
         << QApplication::translate("AddClothingDialog", "XL", Q_NULLPTR)
         << QApplication::translate("AddClothingDialog", "XXL", Q_NULLPTR)
         << QApplication::translate("AddClothingDialog", "XXXL", Q_NULLPTR)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("AddClothingDialog", "\347\224\267\350\243\205", Q_NULLPTR)
         << QApplication::translate("AddClothingDialog", "\345\245\263\350\243\205", Q_NULLPTR)
         << QApplication::translate("AddClothingDialog", "\347\253\245\350\243\205", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class AddClothingDialog: public Ui_AddClothingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCLOTHINGDIALOG_H
