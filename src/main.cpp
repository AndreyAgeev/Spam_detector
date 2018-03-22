#include "src/MainWindow/mainwindow.h"
#include "src/TextClass/textclass.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    TextClass text;
    w.show();
    return a.exec();
}
