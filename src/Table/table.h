#ifndef TABLE_H
#define TABLE_H
#include <QString>
#include <QMap>
class Table
{
    public:
        Table();
        void tokenizeString(QString string);
        void insertIntoSPAMTable(QStringList listTokens);
        void insertIntoHAMTable(QStringList listTokens);
  //      QMap <QString, double> getSpamTable();
  //      QMap <QString, double> getHamTable();
        QMap<QString, double> spamTable;
        double getKey(QString string, QMap<QString, double> &table);
        QMap<QString, double> hamTable;
};
#endif // TABLE_H
