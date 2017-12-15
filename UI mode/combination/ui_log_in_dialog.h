/********************************************************************************
** Form generated from reading UI file 'log_in_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOG_IN_DIALOG_H
#define UI_LOG_IN_DIALOG_H

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

class Ui_log_in_Dialog
{
public:
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;

    void setupUi(QDialog *log_in_Dialog)
    {
        if (log_in_Dialog->objectName().isEmpty())
            log_in_Dialog->setObjectName(QStringLiteral("log_in_Dialog"));
        log_in_Dialog->resize(445, 264);
        pushButton_4 = new QPushButton(log_in_Dialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 200, 113, 32));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3 = new QPushButton(log_in_Dialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(320, 200, 113, 32));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        label_3 = new QLabel(log_in_Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 130, 60, 16));
        label = new QLabel(log_in_Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 0, 171, 71));
        QFont font;
        font.setPointSize(28);
        label->setFont(font);
        label_2 = new QLabel(log_in_Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 80, 60, 16));
        lineEdit_2 = new QLineEdit(log_in_Dialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 130, 201, 21));
        lineEdit = new QLineEdit(log_in_Dialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 80, 201, 21));

        retranslateUi(log_in_Dialog);

        QMetaObject::connectSlotsByName(log_in_Dialog);
    } // setupUi

    void retranslateUi(QDialog *log_in_Dialog)
    {
        log_in_Dialog->setWindowTitle(QApplication::translate("log_in_Dialog", "Dialog", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("log_in_Dialog", "\351\200\200\345\207\272", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("log_in_Dialog", "\347\231\273\345\275\225", Q_NULLPTR));
        label_3->setText(QApplication::translate("log_in_Dialog", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("log_in_Dialog", "\347\231\273\345\275\225", Q_NULLPTR));
        label_2->setText(QApplication::translate("log_in_Dialog", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class log_in_Dialog: public Ui_log_in_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_IN_DIALOG_H
