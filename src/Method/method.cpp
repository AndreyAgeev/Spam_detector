#include "method.h"
#include <QtDebug>
Method::Method()
{

}

double Method::Pr(QString word, const char &type)
{
    if(type == 'S')
    {
        return (_t.getKey(word, _t.spamTable))/ _t.spamTable.size();
    }
    else
    {
      return (_t.getKey(word, _t.hamTable)) / _t.hamTable.size();
    }

}
double Method::getResult()
{
    //We need to catch Nan
    if(_t.hamTable.size() == 0 || _t.spamTable.size() == 0)
        return -1;
    double result = 1.0;
    double inc = 1.0;
    QStringList list;
    list = _string.split(" ");
    const int n = list.size();
    double * pn = new double[n];
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
    for(auto i = 0; i < list.size(); i++)
    {
        result = result/(result + inc);
    }
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
