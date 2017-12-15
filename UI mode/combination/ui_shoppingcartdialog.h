/********************************************************************************
** Form generated from reading UI file 'shoppingcartdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPPINGCARTDIALOG_H
#define UI_SHOPPINGCARTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ShoppingCartDialog
{
public:
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *ShoppingCartDialog)
    {
        if (ShoppingCartDialog->objectName().isEmpty())
            ShoppingCartDialog->setObjectName(QStringLiteral("ShoppingCartDialog"));
        ShoppingCartDialog->resize(759, 520);
        tableWidget = new QTableWidget(ShoppingCartDialog);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem6);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(50, 10, 601, 351));
        pushButton = new QPushButton(ShoppingCartDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 460, 113, 32));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2 = new QPushButton(ShoppingCartDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(600, 460, 113, 32));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(ShoppingCartDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(370, 380, 111, 41));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        lineEdit = new QLineEdit(ShoppingCartDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(530, 380, 131, 31));

        retranslateUi(ShoppingCartDialog);

        QMetaObject::connectSlotsByName(ShoppingCartDialog);
    } // setupUi

    void retranslateUi(QDialog *ShoppingCartDialog)
    {
        ShoppingCartDialog->setWindowTitle(QApplication::translate("ShoppingCartDialog", "Dialog", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("ShoppingCartDialog", "\344\272\247\345\223\201ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("ShoppingCartDialog", "\347\261\273\345\236\213", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QApplication::translate("ShoppingCartDialog", "\345\220\215\347\247\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QApplication::translate("ShoppingCartDialog", "\346\225\260\351\207\217(\344\273\266)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem4->setText(QApplication::translate("ShoppingCartDialog", "\346\200\273\344\273\267(\345\205\203)", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ShoppingCartDialog", "\350\277\224\345\233\236", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ShoppingCartDialog", "\347\273\223\347\256\227", Q_NULLPTR));
        label->setText(QApplication::translate("ShoppingCartDialog", "\350\256\242\345\215\225\346\200\273\344\273\267(\345\205\203)\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ShoppingCartDialog: public Ui_ShoppingCartDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPPINGCARTDIALOG_H
