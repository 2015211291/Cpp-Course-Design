/********************************************************************************
** Form generated from reading UI file 'recorddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORDDIALOG_H
#define UI_RECORDDIALOG_H

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

class Ui_RecordDialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *RecordDialog)
    {
        if (RecordDialog->objectName().isEmpty())
            RecordDialog->setObjectName(QStringLiteral("RecordDialog"));
        RecordDialog->resize(387, 200);
        pushButton = new QPushButton(RecordDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 150, 113, 32));
        pushButton_2 = new QPushButton(RecordDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 150, 113, 32));
        label = new QLabel(RecordDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 20, 60, 16));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        lineEdit = new QLineEdit(RecordDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 20, 113, 21));
        label_2 = new QLabel(RecordDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 60, 60, 16));
        label_2->setFont(font);
        comboBox = new QComboBox(RecordDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(150, 60, 104, 26));
        label_3 = new QLabel(RecordDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 100, 60, 16));
        label_3->setFont(font);
        comboBox_2 = new QComboBox(RecordDialog);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(150, 100, 104, 26));
        pushButton_3 = new QPushButton(RecordDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(400, 240, 113, 32));
        pushButton_4 = new QPushButton(RecordDialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(160, 240, 113, 32));

        retranslateUi(RecordDialog);

        QMetaObject::connectSlotsByName(RecordDialog);
    } // setupUi

    void retranslateUi(QDialog *RecordDialog)
    {
        RecordDialog->setWindowTitle(QApplication::translate("RecordDialog", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("RecordDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("RecordDialog", "\350\277\224\345\233\236", Q_NULLPTR));
        label->setText(QApplication::translate("RecordDialog", "\345\271\264\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("RecordDialog", "\346\234\210\357\274\232", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("RecordDialog", "1", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "2", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "3", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "4", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "5", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "6", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "7", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "8", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "9", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "10", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "11", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "12", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("RecordDialog", "\345\244\251\357\274\232", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("RecordDialog", "1", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "2", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "3", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "4", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "5", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "6", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "7", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "8", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "9", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "10", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "11", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "12", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "13", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "14", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "15", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "16", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "17", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "18", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "19", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "20", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "21", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "22", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "23", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "24", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "25", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "26", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "27", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "28", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "29", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "30", Q_NULLPTR)
         << QApplication::translate("RecordDialog", "31", Q_NULLPTR)
        );
        pushButton_3->setText(QApplication::translate("RecordDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("RecordDialog", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RecordDialog: public Ui_RecordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORDDIALOG_H
