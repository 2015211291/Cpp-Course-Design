/********************************************************************************
** Form generated from reading UI file 'platformdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLATFORMDIALOG_H
#define UI_PLATFORMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PlatformDialog
{
public:
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *PlatformDialog)
    {
        if (PlatformDialog->objectName().isEmpty())
            PlatformDialog->setObjectName(QStringLiteral("PlatformDialog"));
        PlatformDialog->resize(533, 273);
        pushButton_4 = new QPushButton(PlatformDialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(380, 210, 113, 32));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2 = new QPushButton(PlatformDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 140, 113, 32));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3 = new QPushButton(PlatformDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(380, 140, 113, 32));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton = new QPushButton(PlatformDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 140, 113, 32));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(PlatformDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 10, 171, 71));
        QFont font;
        font.setPointSize(28);
        label->setFont(font);

        retranslateUi(PlatformDialog);

        QMetaObject::connectSlotsByName(PlatformDialog);
    } // setupUi

    void retranslateUi(QDialog *PlatformDialog)
    {
        PlatformDialog->setWindowTitle(QApplication::translate("PlatformDialog", "PlatformDialog", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("PlatformDialog", "\351\200\200\345\207\272", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("PlatformDialog", "\347\224\250\346\210\267\347\231\273\345\275\225", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("PlatformDialog", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", Q_NULLPTR));
        pushButton->setText(QApplication::translate("PlatformDialog", "\347\224\250\346\210\267\346\263\250\345\206\214", Q_NULLPTR));
        label->setText(QApplication::translate("PlatformDialog", "\347\224\265\345\225\206\345\271\263\345\217\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PlatformDialog: public Ui_PlatformDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLATFORMDIALOG_H
