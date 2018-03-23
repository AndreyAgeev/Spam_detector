#ifndef TABLE_H
#define TABLE_H
#include <QString>
#include <QMap>
class Table
{
 public:
    Table();
    QStringList tokenizeString(QString string);
    void insertIntoTable(QStringList listTokens);
private:
    QMap<QString, double> spamTable;
    QMap<QString, double> hamTable;
};
#endif // TABLE_H
