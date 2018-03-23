#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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
    Method M;
    TextClass txtCls;

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void on_textEdit_textChanged();
    void aboutApp();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
