#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QMessageBox>
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
private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void on_textEdit_textChanged();
    void action()
    {
        QMessageBox msg;
        msg.setText("Action");
        msg.exec();
    }
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
