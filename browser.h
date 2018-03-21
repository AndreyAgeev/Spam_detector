#ifndef BROWSER_H
#define BROWSER_H
#include <QApplication>

#include <QFileDialog>
#include <QString>
class Browser : public QWidget
{
public:

    void openFiles()
    {
        QStringList filenames = QFileDialog::getOpenFileNames(
                    this,
                    tr("Открыть файл"),
                    QDir::currentPath(),
                    tr("Text files (*.txt);;All files (*.*)") );
    }
};

#endif // BROWSER_H
