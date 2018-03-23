#ifndef BROWSER_H
#define BROWSER_H
#include <QApplication>

#include <QFileDialog>
#include <QString>
#include "src/Table/table.h"
class Browser : public QWidget
{
public:
    Browser();
    Table openFiles();
};

#endif // BROWSER_H
