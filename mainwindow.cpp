#include "mainwindow.h"
#include "ui_spamdetector.h"
#include <Qdir>
#include <QProcess>
#include <QMessageBox>
#include <QProcessEnvironment>
#include "browser.h"
#include "method.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    Browser t;
    t.openFiles();
}
void MainWindow::on_pushButton_clicked()
{
    Method M;
    M.result();
}

void MainWindow::on_textEdit_textChanged()
{

    QString str=ui->textEdit->toPlainText();
    QStringList strList=str.split('\n');
    str=strList.at(0); /* After pressing "calculate" here will be string to calculate*/
}
