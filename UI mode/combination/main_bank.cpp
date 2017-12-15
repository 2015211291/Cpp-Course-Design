#include "bankdialog.h"
#include <QApplication>
#include "header.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BankDialog bank;

    bank.show();

    return a.exec();
}
