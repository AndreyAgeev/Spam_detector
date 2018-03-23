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
#include <QMessageBox>
#include <QtGui>
#include <QIcon>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMenu *file = menuBar()->addMenu("Меню"); /* Creating menubar and adding first field */
    QMenu *edit = menuBar()->addMenu("Настройки"); /* Adding second field About */
    QAction *openFile = new QAction(tr("Открыть файл"), this); /* Setting up some Actions for future buttons */
    openFile->setShortcut(tr("Ctrl+O")); /* Setting hotkey, idk why */
    QAction *closeApp = new QAction(tr("Выход из программы"), this); /* CloseApp Action */
    QAction *aboutApp = new QAction(tr("О программе"),this); /* About Message box action */

    /* Connecting manually signals and slots */
    connect(openFile, SIGNAL(triggered()), this, SLOT(on_pushButton_2_clicked()));
    connect(closeApp, SIGNAL(triggered()), this, SLOT(close()));
    connect(aboutApp, SIGNAL(triggered()), this, SLOT(aboutApp()));

    /* Finally, linking Actions (which already connected to slots) to MenuBar */
    file->addAction(openFile);
    file->addAction(closeApp);
    edit->addAction(aboutApp);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::aboutApp()
{
    QMessageBox msg; /* Creating message box */
    QIcon winIcon(":resource/images/icon.png"); /* Loading icon from resource file */
    QPixmap msgPic(":resource/images/info_alpha.png"); /* Loading picture from resource file */
    QSize picSize(100,100); /* Setting up size for picture */
    msg.setWindowTitle("О программе");
    msg.setText("Тут вкратце о программе"); /* Setting text inside message box */
    msgPic = msgPic.scaled(picSize, Qt::KeepAspectRatio); /* Resizing picture inside message box */
    msg.setWindowIcon(winIcon);
    msg.setIconPixmap(msgPic);
    msg.exec();

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
