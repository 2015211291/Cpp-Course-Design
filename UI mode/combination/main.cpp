#include "platformdialog.h"
#include <QApplication>
#include "header2.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PlatformDialog w;
    //ServerDialog ser;

    w.show();

    return a.exec();
}
