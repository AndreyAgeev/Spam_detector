#include "table.h"
#include "src/TextClass/textclass.h"

Table::Table()
{

}

void Table::tokenizeString(QString string)
{
    QStringList list;
    /* Firstly - need to detect, will that string be SPAM or HAM*/
    string.remove(QRegExp(QString::fromUtf8("[-`~!@#$%^&*()_—+=|:;<>«»,.?/{}\'\"\\\[\\\]\\\\]")));
    string.remove("\n");
    if(string[0] == "s")
    {
        /* THIS IS SPAM */
        string.remove("spam");
        list = string.split(" ");
        insertIntoSPAMTable(list);
    }
    else if(string[0] == "h")
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
