/********************************************************************************
** Form generated from reading UI file 'show_card_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_CARD_DIALOG_H
#define UI_SHOW_CARD_DIALOG_H

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

class Ui_show_card_Dialog
{
public:
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit_5;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLabel *label_8;

    void setupUi(QDialog *show_card_Dialog)
    {
        if (show_card_Dialog->objectName().isEmpty())
            show_card_Dialog->setObjectName(QStringLiteral("show_card_Dialog"));
        show_card_Dialog->resize(423, 408);
        lineEdit_3 = new QLineEdit(show_card_Dialog);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(100, 230, 261, 21));
        lineEdit = new QLineEdit(show_card_Dialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(100, 150, 113, 21));
        lineEdit_2 = new QLineEdit(show_card_Dialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 190, 261, 21));
        label_3 = new QLabel(show_card_Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 150, 60, 16));
        pushButton = new QPushButton(show_card_Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 360, 113, 32));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        label_4 = new QLabel(show_card_Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 190, 60, 16));
        label_5 = new QLabel(show_card_Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 230, 60, 16));
        label_2 = new QLabel(show_card_Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 70, 60, 16));
        label = new QLabel(show_card_Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 10, 111, 41));
        QFont font;
        font.setPointSize(21);
        label->setFont(font);
        lineEdit_5 = new QLineEdit(show_card_Dialog);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(100, 70, 261, 21));
        label_7 = new QLabel(show_card_Dialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 110, 60, 16));
        lineEdit_6 = new QLineEdit(show_card_Dialog);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(100, 110, 261, 21));
        lineEdit_7 = new QLineEdit(show_card_Dialog);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(100, 270, 113, 21));
        label_8 = new QLabel(show_card_Dialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 270, 60, 16));

        retranslateUi(show_card_Dialog);

        QMetaObject::connectSlotsByName(show_card_Dialog);
    } // setupUi

    void retranslateUi(QDialog *show_card_Dialog)
    {
        show_card_Dialog->setWindowTitle(QApplication::translate("show_card_Dialog", "Dialog", Q_NULLPTR));
        lineEdit_3->setText(QString());
        lineEdit_2->setText(QString());
        label_3->setText(QApplication::translate("show_card_Dialog", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("show_card_Dialog", "\350\277\224\345\233\236", Q_NULLPTR));
        label_4->setText(QApplication::translate("show_card_Dialog", "\350\272\253\344\273\275\350\257\201\345\217\267:", Q_NULLPTR));
        label_5->setText(QApplication::translate("show_card_Dialog", "\346\211\213\346\234\272\345\217\267:", Q_NULLPTR));
        label_2->setText(QApplication::translate("show_card_Dialog", "\351\223\266\350\241\214\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("show_card_Dialog", "\344\270\252\344\272\272\344\277\241\346\201\257", Q_NULLPTR));
        lineEdit_5->setText(QString());
        label_7->setText(QApplication::translate("show_card_Dialog", "\345\215\241\345\217\267\357\274\232", Q_NULLPTR));
        lineEdit_6->setText(QString());
        lineEdit_7->setText(QString());
        label_8->setText(QApplication::translate("show_card_Dialog", "\344\275\231\351\242\235(\345\205\203)\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class show_card_Dialog: public Ui_show_card_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_CARD_DIALOG_H
