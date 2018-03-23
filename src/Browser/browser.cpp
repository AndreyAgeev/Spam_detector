#include "browser.h"

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
            QStringList tokenisedString = T.tokenizeString(curString);
            T.insertIntoTable(tokenisedString);
        }
    }
    return T;
}
