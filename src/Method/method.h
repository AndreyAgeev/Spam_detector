#ifndef METHOD_H
#define METHOD_H
#include <string>
#include <iostream>
#include "src/Table/table.h"
class Method
{
    public:
        Method();
        double getResult();
        void setString(const std::string &string);
        void setTable(Table && t);
    private:
        std::string _string;
        Table _t;
};

#endif // METHOD_H
