#ifndef METHOD_H
#define METHOD_H

#include "textclass.h"


#include <Qstring>


class Method
{
public:
    Method(): result(0), text(0)
    {}
    int result;
    TextClass text;
    Method();
    double result();
    double result(QString string);
};

#endif // METHOD_H
