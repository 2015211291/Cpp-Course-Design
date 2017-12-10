/********************************************************************************
** Form generated from reading UI file 'addfooddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFOODDIALOG_H
#define UI_ADDFOODDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AddFoodDialog
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_7;
    QLineEdit *lineEdit_7;
    QTextEdit *textEdit;
    QLabel *label_8;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *AddFoodDialog)
    {
        if (AddFoodDialog->objectName().isEmpty())
            AddFoodDialog->setObjectName(QStringLiteral("AddFoodDialog"));
        AddFoodDialog->resize(394, 492);
        label = new QLabel(AddFoodDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 30, 60, 16));
        lineEdit = new QLineEdit(AddFoodDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 30, 171, 21));
        lineEdit_2 = new QLineEdit(AddFoodDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 70, 81, 21));
        label_2 = new QLabel(AddFoodDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 70, 60, 16));
        lineEdit_3 = new QLineEdit(AddFoodDialog);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(120, 110, 81, 21));
        label_3 = new QLabel(AddFoodDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 110, 60, 16));
        lineEdit_4 = new QLineEdit(AddFoodDialog);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(120, 150, 81, 21));
        label_4 = new QLabel(AddFoodDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 150, 60, 16));
        label_6 = new QLabel(AddFoodDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 190, 60, 16));
        lineEdit_6 = new QLineEdit(AddFoodDialog);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(120, 190, 81, 21));
        label_5 = new QLabel(AddFoodDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 230, 60, 16));
        lineEdit_5 = new QLineEdit(AddFoodDialog);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(120, 230, 81, 21));
        label_7 = new QLabel(AddFoodDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 270, 60, 16));
        lineEdit_7 = new QLineEdit(AddFoodDialog);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(120, 270, 81, 21));
        textEdit = new QTextEdit(AddFoodDialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(120, 320, 241, 111));
        label_8 = new QLabel(AddFoodDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 310, 60, 16));
        pushButton = new QPushButton(AddFoodDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 450, 113, 32));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2 = new QPushButton(AddFoodDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 450, 113, 32));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(AddFoodDialog);

        QMetaObject::connectSlotsByName(AddFoodDialog);
    } // setupUi

    void retranslateUi(QDialog *AddFoodDialog)
    {
        AddFoodDialog->setWindowTitle(QApplication::translate("AddFoodDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("AddFoodDialog", "\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        lineEdit_2->setText(QString());
        label_2->setText(QApplication::translate("AddFoodDialog", "\346\225\260\351\207\217(\344\273\266)\357\274\232", Q_NULLPTR));
        lineEdit_3->setText(QString());
        label_3->setText(QApplication::translate("AddFoodDialog", "\345\215\225\344\273\267(\345\205\203)\357\274\232", Q_NULLPTR));
        lineEdit_4->setText(QString());
        label_4->setText(QApplication::translate("AddFoodDialog", "\346\212\230\346\211\243\347\263\273\346\225\260\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("AddFoodDialog", "\347\224\237\344\272\247\346\227\245\346\234\237\357\274\232", Q_NULLPTR));
        lineEdit_6->setText(QString());
        label_5->setText(QApplication::translate("AddFoodDialog", "\344\277\235\350\264\250\346\234\237(\345\244\251)\357\274\232", Q_NULLPTR));
        lineEdit_5->setText(QString());
        label_7->setText(QApplication::translate("AddFoodDialog", "\351\207\215\351\207\217(\345\205\213)\357\274\232", Q_NULLPTR));
        lineEdit_7->setText(QString());
        label_8->setText(QApplication::translate("AddFoodDialog", "\344\272\247\345\223\201\346\217\217\350\277\260\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AddFoodDialog", "\345\256\214\346\210\220", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("AddFoodDialog", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddFoodDialog: public Ui_AddFoodDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFOODDIALOG_H
