/********************************************************************************
** Form generated from reading UI file 'erecorddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERECORDDIALOG_H
#define UI_ERECORDDIALOG_H

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

class Ui_eRecordDialog
{
public:
    QPushButton *pushButton;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QComboBox *comboBox_2;
    QLabel *label_3;

    void setupUi(QDialog *eRecordDialog)
    {
        if (eRecordDialog->objectName().isEmpty())
            eRecordDialog->setObjectName(QStringLiteral("eRecordDialog"));
        eRecordDialog->resize(400, 216);
        pushButton = new QPushButton(eRecordDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 160, 113, 32));
        comboBox = new QComboBox(eRecordDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(150, 70, 104, 26));
        pushButton_2 = new QPushButton(eRecordDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 160, 113, 32));
        label = new QLabel(eRecordDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 30, 60, 16));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label_2 = new QLabel(eRecordDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 70, 60, 16));
        label_2->setFont(font);
        lineEdit = new QLineEdit(eRecordDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 30, 113, 21));
        comboBox_2 = new QComboBox(eRecordDialog);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(150, 110, 104, 26));
        label_3 = new QLabel(eRecordDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 110, 60, 16));
        label_3->setFont(font);

        retranslateUi(eRecordDialog);

        QMetaObject::connectSlotsByName(eRecordDialog);
    } // setupUi

    void retranslateUi(QDialog *eRecordDialog)
    {
        eRecordDialog->setWindowTitle(QApplication::translate("eRecordDialog", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("eRecordDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("eRecordDialog", "1", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "2", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "3", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "4", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "5", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "6", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "7", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "8", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "9", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "10", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "11", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "12", Q_NULLPTR)
        );
        pushButton_2->setText(QApplication::translate("eRecordDialog", "\350\277\224\345\233\236", Q_NULLPTR));
        label->setText(QApplication::translate("eRecordDialog", "\345\271\264\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("eRecordDialog", "\346\234\210\357\274\232", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("eRecordDialog", "1", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "2", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "3", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "4", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "5", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "6", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "7", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "8", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "9", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "10", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "11", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "12", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "13", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "14", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "15", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "16", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "17", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "18", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "19", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "20", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "21", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "22", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "23", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "24", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "25", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "26", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "27", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "28", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "29", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "30", Q_NULLPTR)
         << QApplication::translate("eRecordDialog", "31", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("eRecordDialog", "\345\244\251\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class eRecordDialog: public Ui_eRecordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERECORDDIALOG_H
