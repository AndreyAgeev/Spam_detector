#ifndef MAINWINDOW_H
#define MAINWINDOW_H
/**
 * @mainpage Introduction

SpamDetector представляет собой простейшее приложения для детекции спама.
Это приложение способно на основании обученной модели определять вероятность того, что
введенное пользователем приложения является спамом
@code{.c}
#include "labengine.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

@endcode
Эта программа создает графическое окно, в котором пользователь может вводить сообщения и обучить модель
*/

#include <QMainWindow>
#include <QString>
#include <QMessageBox>
#include "src/Method/method.h"
#include "src/TextClass/textclass.h"
#include "src/Table/table.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QString mainString;
    Method M; /* Main calculations method */
    TextClass txtCls; /* Class for normalize string */
    Table T; /* Table for learning */

private slots:
    void on_pushButton_2_clicked(); /* open browser and teach main mechanism */
    void on_pushButton_clicked(); /* Show results */
    void on_textEdit_textChanged(); /* catch string from input stream */
    void aboutApp(); /* 'About' message box */

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
