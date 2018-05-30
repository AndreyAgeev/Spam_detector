#include "method.h"
#include <QtDebug>
Method::Method()
{

}

double Method::Pr(QString word, const char &type)
{
    if(type == 'S')
    {
        return (_t.getKey(word, _t.spamTable))/ _t.getCount(_t.spamTable);
    }
    else
    {
      return (_t.getKey(word, _t.hamTable)) / _t.getCount(_t.hamTable);
    }

}
double Method::getResult()
{
    if(_t.hamTable.size() == 0 || _t.spamTable.size() == 0)
          return -1;
    double result = 1.0;
    double inc = 1.0;
    QStringList list;
    list = _string.split(" ");
    const int n = list.size();
    double * pn = new double[n];
    QStringList new_list;
    for(auto i = 0; i < list.size(); i++)
    {
        QString W = list.at(i);
        if(Pr(W,'S') != 0.0 || Pr(W, 'H') != 0.0)
        {
            new_list.append(W);
        }
    }
    list = new_list;
    for(auto i = 0; i < list.size(); i++)
    {
        QString W = list.at(i);
        pn[i] = Pr(W, 'S')/(Pr(W, 'S') + Pr(W, 'H'));
    }
    for(auto i = 0; i < list.size(); i++)
    {
        result *= pn[i];
        inc *= (1- pn[i]);
    }
    result = result/(result + inc);
    delete [] pn;
    return result;
}
void Method::setString(const QString &string)
{
    _string = string;
}
void Method::setTable(Table t)
{
    _t.hamTable = t.hamTable;
    _t.spamTable = t.spamTable;
}
