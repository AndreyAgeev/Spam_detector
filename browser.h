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
                    tr("Open Document"),
                    QDir::currentPath(),
                    tr("Documents (*.doc);;All files (*.*)") );

    }
};

#endif // BROWSER_H
