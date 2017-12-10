/********************************************************************************
** Form generated from reading UI file 'admidialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIDIALOG_H
#define UI_ADMIDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AdmiDialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;

    void setupUi(QDialog *AdmiDialog)
    {
        if (AdmiDialog->objectName().isEmpty())
            AdmiDialog->setObjectName(QStringLiteral("AdmiDialog"));
        AdmiDialog->resize(406, 257);
        QFont font;
        font.setPointSize(15);
        AdmiDialog->setFont(font);
        pushButton = new QPushButton(AdmiDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 210, 113, 32));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2 = new QPushButton(AdmiDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 30, 113, 32));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3 = new QPushButton(AdmiDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(50, 30, 113, 31));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4 = new QPushButton(AdmiDialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(240, 150, 113, 32));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5 = new QPushButton(AdmiDialog);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(50, 90, 113, 31));
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6 = new QPushButton(AdmiDialog);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(50, 150, 113, 32));
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7 = new QPushButton(AdmiDialog);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(240, 90, 113, 32));
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(AdmiDialog);

        QMetaObject::connectSlotsByName(AdmiDialog);
    } // setupUi

    void retranslateUi(QDialog *AdmiDialog)
    {
        AdmiDialog->setWindowTitle(QApplication::translate("AdmiDialog", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AdmiDialog", "\351\200\200\345\207\272", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("AdmiDialog", "\346\265\217\350\247\210\345\225\206\345\223\201", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("AdmiDialog", "\346\267\273\345\212\240\351\243\237\345\223\201", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("AdmiDialog", "\345\274\200\345\220\257\346\273\241\345\207\217", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("AdmiDialog", "\346\267\273\345\212\240\345\233\276\344\271\246", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("AdmiDialog", "\346\267\273\345\212\240\346\234\215\350\243\205", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("AdmiDialog", "\350\256\276\347\275\256\345\271\277\345\221\212", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdmiDialog: public Ui_AdmiDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIDIALOG_H
