/********************************************************************************
** Form generated from reading UI file 'showerecorddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWERECORDDIALOG_H
#define UI_SHOWERECORDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ShowErecordDialog
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QDialog *ShowErecordDialog)
    {
        if (ShowErecordDialog->objectName().isEmpty())
            ShowErecordDialog->setObjectName(QStringLiteral("ShowErecordDialog"));
        ShowErecordDialog->resize(469, 310);
        pushButton = new QPushButton(ShowErecordDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 270, 113, 32));
        textEdit = new QTextEdit(ShowErecordDialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(30, 30, 411, 211));

        retranslateUi(ShowErecordDialog);

        QMetaObject::connectSlotsByName(ShowErecordDialog);
    } // setupUi

    void retranslateUi(QDialog *ShowErecordDialog)
    {
        ShowErecordDialog->setWindowTitle(QApplication::translate("ShowErecordDialog", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ShowErecordDialog", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ShowErecordDialog: public Ui_ShowErecordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWERECORDDIALOG_H
