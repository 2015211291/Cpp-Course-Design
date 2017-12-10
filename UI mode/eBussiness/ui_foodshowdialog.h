/********************************************************************************
** Form generated from reading UI file 'foodshowdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOODSHOWDIALOG_H
#define UI_FOODSHOWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_FoodShowDialog
{
public:
    QTableWidget *tableWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *FoodShowDialog)
    {
        if (FoodShowDialog->objectName().isEmpty())
            FoodShowDialog->setObjectName(QStringLiteral("FoodShowDialog"));
        FoodShowDialog->resize(796, 441);
        tableWidget = new QTableWidget(FoodShowDialog);
        if (tableWidget->columnCount() < 11)
            tableWidget->setColumnCount(11);
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
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem11);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 10, 781, 351));
        pushButton = new QPushButton(FoodShowDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(660, 400, 113, 32));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(FoodShowDialog);

        QMetaObject::connectSlotsByName(FoodShowDialog);
    } // setupUi

    void retranslateUi(QDialog *FoodShowDialog)
    {
        FoodShowDialog->setWindowTitle(QApplication::translate("FoodShowDialog", "Dialog", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("FoodShowDialog", "\344\272\247\345\223\201ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("FoodShowDialog", "\347\261\273\345\210\253", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QApplication::translate("FoodShowDialog", "\345\220\215\347\247\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QApplication::translate("FoodShowDialog", "\346\225\260\351\207\217(\344\273\266)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem4->setText(QApplication::translate("FoodShowDialog", "\345\216\237\344\273\267(\345\205\203\357\274\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem5->setText(QApplication::translate("FoodShowDialog", "\347\216\260\344\273\267(\345\205\203\357\274\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem6->setText(QApplication::translate("FoodShowDialog", "\344\272\247\345\223\201\346\217\217\350\277\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem7->setText(QApplication::translate("FoodShowDialog", "\347\224\237\344\272\247\346\227\245\346\234\237", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem8->setText(QApplication::translate("FoodShowDialog", "\344\277\235\350\264\250\346\234\237(\345\244\251\357\274\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem9->setText(QApplication::translate("FoodShowDialog", "\351\207\215\351\207\217(\345\205\213)", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FoodShowDialog", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FoodShowDialog: public Ui_FoodShowDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOODSHOWDIALOG_H
