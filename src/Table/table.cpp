#include "table.h"

Table::Table()
{

}

void Table::tokenizeString(QString string)
{
    QStringList list;
    /* Firstly - need to detect, will that string be SPAM or HAM*/

    /* Removing unnesesary symbols */
    string.replace(","," ");
    string.replace("."," ");
    string.remove(QRegExp(QString::fromUtf8("[-`~!@#$%^&*()_—+=|:;<>«»,.?{}\'\"\\\\\\]")));
    string.remove("\n");
    /* REMINDER! SOMETIMES IT PRODUCES THAT:
     * "Normal,sentence" -> "NormalSentence"
     * TODO:: FIXING
    */

    if((QChar)string[0] == "s")
    {
        /* THIS IS SPAM */
        string.remove("spam");
        list = string.split(" ");
        insertIntoSPAMTable(list);
    }
    else if((QChar)string[0] == "h")
    {
        /* THIS IS HAM */
        string.remove("ham");
        list = string.split(" ");
        insertIntoHAMTable(list);
    }
    else
    {
        /* IDK WHAT THIS IS*/
    }
}

void Table::insertIntoSPAMTable(QStringList listTokens)
{

    /* TODO:
     * Hash-functions?
     * Sorting table?
     * Dont like that function, maybe needs rewriting
*/
    for(int i = 0; i < listTokens.size(); i++)
    {
        /* STEP 1 - Search*/
        if(spamTable.contains(listTokens[i]))
        {
            int num = spamTable.value(listTokens[i]);
            spamTable.insert(listTokens[i], num + 1);
        }
        else
        {
            spamTable.insert(listTokens[i],1);
        }
    }
}

void Table::insertIntoHAMTable(QStringList listTokens)
{
    /* TODO:
     * Hash-functions?
     * Sorting table?
     * Dont like that function, maybe needs rewriting
*/
    for(int i = 0; i < listTokens.size(); i++)
    {

        /* STEP 1 - Search*/
        if(hamTable.contains(listTokens[i]))
        {
            int num = hamTable.value(listTokens[i]);
            hamTable.insert(listTokens[i], num + 1);
        }
        else
        {
            hamTable.insert(listTokens[i],1);
        }
    }
}
double Table::getKey(QString string, QMap<QString, double> &table)
{
    QMap<QString,double>::iterator it = table.begin();
    for(; it != table.end(); ++it)
    {
        if(it.key() == string)
            return it.value();
    }
    double res = 0.0;
    return res;
}

double Table::getCount(QMap<QString, double> &table)
{
    QMap<QString,double>::iterator it = table.begin();
    double count = 0.0;
    for(; it != table.end(); ++it)
    {
        count += it.value();
    }
    return count;
}

