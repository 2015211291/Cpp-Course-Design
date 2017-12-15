/********************************************************************************
** Form generated from reading UI file 'addbookdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOKDIALOG_H
#define UI_ADDBOOKDIALOG_H

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

class Ui_AddBookDialog
{
public:
    QLineEdit *lineEdit_4;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_7;
    QLabel *label_8;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_6;
    QLabel *label_2;
    QLabel *label_5;
    QPushButton *pushButton_2;
    QTextEdit *textEdit;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_7;
    QLineEdit *lineEdit_5;

    void setupUi(QDialog *AddBookDialog)
    {
        if (AddBookDialog->objectName().isEmpty())
            AddBookDialog->setObjectName(QStringLiteral("AddBookDialog"));
        AddBookDialog->resize(458, 513);
        lineEdit_4 = new QLineEdit(AddBookDialog);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(150, 150, 81, 21));
        label_3 = new QLabel(AddBookDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 110, 60, 16));
        lineEdit = new QLineEdit(AddBookDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 30, 171, 21));
        lineEdit_3 = new QLineEdit(AddBookDialog);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(150, 110, 81, 21));
        label_4 = new QLabel(AddBookDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 150, 60, 16));
        lineEdit_7 = new QLineEdit(AddBookDialog);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(150, 270, 171, 21));
        label_8 = new QLabel(AddBookDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(70, 310, 60, 16));
        pushButton = new QPushButton(AddBookDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 450, 113, 32));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        lineEdit_2 = new QLineEdit(AddBookDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 70, 81, 21));
        lineEdit_6 = new QLineEdit(AddBookDialog);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(150, 190, 81, 21));
        label_2 = new QLabel(AddBookDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 70, 60, 16));
        label_5 = new QLabel(AddBookDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 230, 60, 16));
        pushButton_2 = new QPushButton(AddBookDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 450, 113, 32));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        textEdit = new QTextEdit(AddBookDialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(150, 320, 241, 111));
        label_6 = new QLabel(AddBookDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(70, 190, 60, 16));
        label = new QLabel(AddBookDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 30, 60, 16));
        label_7 = new QLabel(AddBookDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 270, 60, 16));
        lineEdit_5 = new QLineEdit(AddBookDialog);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(150, 230, 81, 21));

        retranslateUi(AddBookDialog);

        QMetaObject::connectSlotsByName(AddBookDialog);
    } // setupUi

    void retranslateUi(QDialog *AddBookDialog)
    {
        AddBookDialog->setWindowTitle(QApplication::translate("AddBookDialog", "Dialog", Q_NULLPTR));
        lineEdit_4->setText(QString());
        label_3->setText(QApplication::translate("AddBookDialog", "\345\215\225\344\273\267(\345\205\203)\357\274\232", Q_NULLPTR));
        lineEdit_3->setText(QString());
        label_4->setText(QApplication::translate("AddBookDialog", "\346\212\230\346\211\243\347\263\273\346\225\260\357\274\232", Q_NULLPTR));
        lineEdit_7->setText(QString());
        label_8->setText(QApplication::translate("AddBookDialog", "\344\272\247\345\223\201\346\217\217\350\277\260\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AddBookDialog", "\345\256\214\346\210\220", Q_NULLPTR));
        lineEdit_2->setText(QString());
        lineEdit_6->setText(QString());
        label_2->setText(QApplication::translate("AddBookDialog", "\346\225\260\351\207\217(\346\234\254)\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("AddBookDialog", "\344\275\234\350\200\205\357\274\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("AddBookDialog", "\350\277\224\345\233\236", Q_NULLPTR));
        label_6->setText(QApplication::translate("AddBookDialog", "\345\207\272\347\211\210\346\227\245\346\234\237\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("AddBookDialog", "\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("AddBookDialog", "\345\207\272\347\211\210\347\244\276\357\274\232", Q_NULLPTR));
        lineEdit_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddBookDialog: public Ui_AddBookDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOKDIALOG_H
