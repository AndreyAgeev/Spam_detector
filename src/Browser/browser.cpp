#include "browser.h"
#include <QFile>
#include <QTextStream>

/* TODO:
 *
*/



Browser::Browser()
{

}

Table Browser::openFiles()
{
    Table T; /* Temp table */
    /* Catching name of learning file /src/learning/some.csv */
    QString fileName = QFileDialog::getOpenFileName(this, tr("Открыть файл"), QDir::currentPath(), tr("CSV files (*.csv)") );
    /* Opening file*/
    QFile learningFile(fileName);
    if(learningFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        while(!learningFile.atEnd())
        {
            /* read csv file by strings and filling the tables */
            QString curString = learningFile.readLine();
            T.tokenizeString(curString); /* TODO:: GOOD FUNCTION!*/
        }
    }
    return T;
}
