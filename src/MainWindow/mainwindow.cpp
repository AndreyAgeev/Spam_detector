#include "mainwindow.h"
#include "ui_spamdetector.h"
#include <Qdir>
#include <QProcess>
#include <QMessageBox>
#include <QProcessEnvironment>
#include "src/Browser/browser.h"
#include "src/Method/method.h"
#include <QMenuBar>
#include <QAction>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMenu *file = menuBar()->addMenu("Меню"); //Создаем меню бар и помещаяем в него первый пункт меню file
    QMenu *edit = menuBar()->addMenu("Настройки"); // Добавляем в наш меню бар дополнительный пункт edit
    QAction *openFile = new QAction(tr("Открыть файл"), this); // Создаем экшн для нашего меню файл с пунктом new, так-же обязательно в качестве родителя оператором this указываем наше главное окно
    openFile->setShortcut(tr("Ctrl+O")); // Создаем горячую клавишу для нашего экшена New
    QAction *closeApp = new QAction(tr("Выход из программы"), this); // Создаем экшн для нашего меню файл с пунктом open, так-же обязательно в качестве родителя оператором this указываем наше главное окно
    QAction *aboutApp = new QAction(tr("О программе"),this);

    connect(openFile, SIGNAL(triggered()), this, SLOT(on_pushButton_2_clicked()));
    connect(closeApp, SIGNAL(triggered()), this, SLOT(close()));
    connect(aboutApp, SIGNAL(triggered()), this, SLOT(action()));

    file->addAction(openFile); // Привязка экшена к меню File
    file->addAction(closeApp); // Привязка экшена к меню File
    edit->addAction(aboutApp); // Привязка экшена к меню edit
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
    double result = 0;
    QString resString;
    result = M.result(mainString);
    resString.setNum(result);
    ui->lineEdit->setText(resString);
}

void MainWindow::on_textEdit_textChanged()
{

    QString str=ui->textEdit->toPlainText();
    QStringList strList=str.split('\n');
    str=strList.at(0); /* After pressing "calculate" here will be string to calculate*/
    mainString = str;
}
