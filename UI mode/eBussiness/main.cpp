#include "platformdialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PlatformDialog w;
    w.show();

    return a.exec();
}
