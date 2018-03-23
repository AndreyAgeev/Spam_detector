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

private:
    QMap<QString, double> spamTable;
    QMap<QString, double> hamTable;
};
#endif // TABLE_H
