/********************************************************************************
** Form generated from reading UI file 'fulloffdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FULLOFFDIALOG_H
#define UI_FULLOFFDIALOG_H

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

class Ui_FullOffDialog
{
public:
    QComboBox *comboBox;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_3;

    void setupUi(QDialog *FullOffDialog)
    {
        if (FullOffDialog->objectName().isEmpty())
            FullOffDialog->setObjectName(QStringLiteral("FullOffDialog"));
        FullOffDialog->resize(376, 197);
        comboBox = new QComboBox(FullOffDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(170, 30, 104, 26));
        label = new QLabel(FullOffDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 30, 81, 20));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        pushButton = new QPushButton(FullOffDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 130, 113, 32));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2 = new QPushButton(FullOffDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 130, 113, 32));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        label_2 = new QLabel(FullOffDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 80, 21, 20));
        label_2->setFont(font);
        lineEdit = new QLineEdit(FullOffDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(90, 80, 71, 21));
        lineEdit_2 = new QLineEdit(FullOffDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(230, 80, 71, 21));
        label_3 = new QLabel(FullOffDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(200, 80, 21, 20));
        label_3->setFont(font);

        retranslateUi(FullOffDialog);

        QMetaObject::connectSlotsByName(FullOffDialog);
    } // setupUi

    void retranslateUi(QDialog *FullOffDialog)
    {
        FullOffDialog->setWindowTitle(QApplication::translate("FullOffDialog", "Dialog", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("FullOffDialog", "\345\205\250\345\234\272\346\273\241\345\207\217", Q_NULLPTR)
         << QApplication::translate("FullOffDialog", "\351\243\237\345\223\201\346\273\241\345\207\217", Q_NULLPTR)
         << QApplication::translate("FullOffDialog", "\345\233\276\344\271\246\346\273\241\345\207\217", Q_NULLPTR)
         << QApplication::translate("FullOffDialog", "\346\234\215\350\243\205\346\273\241\345\207\217", Q_NULLPTR)
         << QApplication::translate("FullOffDialog", "\345\217\226\346\266\210\346\273\241\345\207\217", Q_NULLPTR)
        );
        label->setText(QApplication::translate("FullOffDialog", "\346\273\241\345\207\217\347\261\273\345\236\213\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FullOffDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("FullOffDialog", "\350\277\224\345\233\236", Q_NULLPTR));
        label_2->setText(QApplication::translate("FullOffDialog", "\346\273\241\357\274\232", Q_NULLPTR));
        lineEdit_2->setText(QString());
        label_3->setText(QApplication::translate("FullOffDialog", "\345\207\217\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FullOffDialog: public Ui_FullOffDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FULLOFFDIALOG_H
