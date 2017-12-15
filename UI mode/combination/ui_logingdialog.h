/********************************************************************************
** Form generated from reading UI file 'logingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINGDIALOG_H
#define UI_LOGINGDIALOG_H

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

class Ui_LogingDialog
{
public:
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *LogingDialog)
    {
        if (LogingDialog->objectName().isEmpty())
            LogingDialog->setObjectName(QStringLiteral("LogingDialog"));
        LogingDialog->resize(400, 224);
        label_6 = new QLabel(LogingDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 130, 60, 16));
        lineEdit_4 = new QLineEdit(LogingDialog);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(100, 130, 261, 21));
        label_7 = new QLabel(LogingDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 80, 60, 21));
        lineEdit_5 = new QLineEdit(LogingDialog);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(100, 80, 261, 21));
        label = new QLabel(LogingDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 20, 171, 51));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        pushButton = new QPushButton(LogingDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 180, 113, 32));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2 = new QPushButton(LogingDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 180, 113, 32));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(LogingDialog);

        QMetaObject::connectSlotsByName(LogingDialog);
    } // setupUi

    void retranslateUi(QDialog *LogingDialog)
    {
        LogingDialog->setWindowTitle(QApplication::translate("LogingDialog", "Dialog", Q_NULLPTR));
        label_6->setText(QApplication::translate("LogingDialog", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("LogingDialog", "\345\215\241\345\217\267\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("LogingDialog", "\347\231\273\345\275\225\347\225\214\351\235\242", Q_NULLPTR));
        pushButton->setText(QApplication::translate("LogingDialog", "\347\231\273\345\275\225", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("LogingDialog", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LogingDialog: public Ui_LogingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINGDIALOG_H
