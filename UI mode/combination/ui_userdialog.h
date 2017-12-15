/********************************************************************************
** Form generated from reading UI file 'userdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDIALOG_H
#define UI_USERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_UserDialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QLabel *label;
    QTextEdit *textEdit;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;

    void setupUi(QDialog *UserDialog)
    {
        if (UserDialog->objectName().isEmpty())
            UserDialog->setObjectName(QStringLiteral("UserDialog"));
        UserDialog->resize(436, 319);
        pushButton = new QPushButton(UserDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 280, 113, 32));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2 = new QPushButton(UserDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 30, 113, 32));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4 = new QPushButton(UserDialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(230, 30, 113, 32));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3 = new QPushButton(UserDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 80, 113, 32));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5 = new QPushButton(UserDialog);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 130, 113, 32));
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(UserDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 190, 81, 21));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        textEdit = new QTextEdit(UserDialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(120, 190, 261, 79));
        pushButton_6 = new QPushButton(UserDialog);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(230, 80, 113, 32));
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7 = new QPushButton(UserDialog);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(230, 130, 113, 32));
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(UserDialog);

        QMetaObject::connectSlotsByName(UserDialog);
    } // setupUi

    void retranslateUi(QDialog *UserDialog)
    {
        UserDialog->setWindowTitle(QApplication::translate("UserDialog", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("UserDialog", "\351\200\200\345\207\272", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("UserDialog", "\351\243\237\347\211\251", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("UserDialog", "\350\264\255\347\211\251\350\275\246", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("UserDialog", "\345\233\276\344\271\246", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("UserDialog", "\350\241\243\346\234\215", Q_NULLPTR));
        label->setText(QApplication::translate("UserDialog", "\344\274\230\346\203\240\346\264\273\345\212\250\357\274\232", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("UserDialog", "\347\273\221\345\256\232\351\223\266\350\241\214\345\215\241", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("UserDialog", "\345\216\206\345\217\262\350\256\242\345\215\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserDialog: public Ui_UserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDIALOG_H
