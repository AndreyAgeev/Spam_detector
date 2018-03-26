#include "src/MainWindow/mainwindow.h"
#include "src/TextClass/textclass.h"
#include <QApplication>
#include "test/unittest.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    UnitTest tests;
    QTest::qExec(&tests);
    return a.exec();
}
