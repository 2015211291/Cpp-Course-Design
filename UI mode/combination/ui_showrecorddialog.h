/********************************************************************************
** Form generated from reading UI file 'showrecorddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWRECORDDIALOG_H
#define UI_SHOWRECORDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ShowRecordDialog
{
public:
    QTextEdit *textEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *ShowRecordDialog)
    {
        if (ShowRecordDialog->objectName().isEmpty())
            ShowRecordDialog->setObjectName(QStringLiteral("ShowRecordDialog"));
        ShowRecordDialog->resize(400, 300);
        textEdit = new QTextEdit(ShowRecordDialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(30, 30, 331, 211));
        pushButton = new QPushButton(ShowRecordDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 260, 113, 32));

        retranslateUi(ShowRecordDialog);

        QMetaObject::connectSlotsByName(ShowRecordDialog);
    } // setupUi

    void retranslateUi(QDialog *ShowRecordDialog)
    {
        ShowRecordDialog->setWindowTitle(QApplication::translate("ShowRecordDialog", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ShowRecordDialog", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ShowRecordDialog: public Ui_ShowRecordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWRECORDDIALOG_H
