#include "DBMSMainWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DBMSMainWindow w;
    w.show();
    return a.exec();
}
