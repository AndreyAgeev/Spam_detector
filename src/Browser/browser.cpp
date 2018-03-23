#include "browser.h"
#include <QFile>
#include <QTextStream>

Browser::Browser()
{

}

Table Browser::openFiles()
{
    Table T;
    QString fileName = QFileDialog::getOpenFileName(this, tr("Открыть файл"), QDir::currentPath(), tr("CSV files (*.csv)") );
    QFile learningFile(fileName);
    if(learningFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        while(!learningFile.atEnd())
        {
            QString curString = learningFile.readLine();
            T.tokenizeString(curString);
        }
    }
    QFile testOutputFile("C:\\Users\\Dmitriy\\Desktop\\file.txt");
    if(testOutputFile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QMap<QString,double>::iterator it = T.hamTable.begin();
        for(;it != T.hamTable.end(); ++it)
        {
           QTextStream stream(&testOutputFile);
           stream << "\n";
           stream << it.key();
           stream << " ";
           stream << it.value();
           stream << "\n";
        }

    }
    return T;
}
