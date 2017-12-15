/********************************************************************************
** Form generated from reading UI file 'enrolldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENROLLDIALOG_H
#define UI_ENROLLDIALOG_H

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

class Ui_EnrollDialog
{
public:
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QLabel *label_6;
    QPushButton *pushButton_2;

    void setupUi(QDialog *EnrollDialog)
    {
        if (EnrollDialog->objectName().isEmpty())
            EnrollDialog->setObjectName(QStringLiteral("EnrollDialog"));
        EnrollDialog->resize(422, 401);
        comboBox = new QComboBox(EnrollDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(120, 60, 271, 26));
        comboBox->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(EnrollDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 10, 81, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(EnrollDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 60, 60, 16));
        label_3 = new QLabel(EnrollDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 110, 60, 16));
        lineEdit = new QLineEdit(EnrollDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 110, 113, 21));
        lineEdit_2 = new QLineEdit(EnrollDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 150, 261, 21));
        label_4 = new QLabel(EnrollDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 150, 60, 16));
        lineEdit_3 = new QLineEdit(EnrollDialog);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(120, 190, 261, 21));
        label_5 = new QLabel(EnrollDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 190, 60, 16));
        lineEdit_4 = new QLineEdit(EnrollDialog);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(120, 230, 261, 21));
        label_6 = new QLabel(EnrollDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 230, 60, 16));
        pushButton_2 = new QPushButton(EnrollDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 290, 113, 32));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(EnrollDialog);

        QMetaObject::connectSlotsByName(EnrollDialog);
    } // setupUi

    void retranslateUi(QDialog *EnrollDialog)
    {
        EnrollDialog->setWindowTitle(QApplication::translate("EnrollDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("EnrollDialog", "\346\263\250\345\206\214", Q_NULLPTR));
        label_2->setText(QApplication::translate("EnrollDialog", "\351\223\266\350\241\214\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("EnrollDialog", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        lineEdit_2->setText(QString());
        label_4->setText(QApplication::translate("EnrollDialog", "\350\272\253\344\273\275\350\257\201\345\217\267:", Q_NULLPTR));
        lineEdit_3->setText(QString());
        label_5->setText(QApplication::translate("EnrollDialog", "\346\211\213\346\234\272\345\217\267:", Q_NULLPTR));
        label_6->setText(QApplication::translate("EnrollDialog", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("EnrollDialog", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EnrollDialog: public Ui_EnrollDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENROLLDIALOG_H
