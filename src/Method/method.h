#ifndef METHOD_H
#define METHOD_H
#include <QString>
#include <iostream>
#include "src/Table/table.h"
class Method
{
    public:
        Method();
        double getResult();
        void setString(const QString &string);
        void setTable( Table t);
        double Pr(QString, const char &type);
    private:
        QString _string;
        Table _t;
};

#endif // METHOD_H
