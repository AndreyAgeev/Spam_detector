#include "table.h"

Table::Table()
{

}

QStringList Table::tokenizeString(QString string)
{
    QStringList list;
    list = string.split(".");
    return list;
}

void Table::insertIntoTable(QStringList listTokens)
{

}
