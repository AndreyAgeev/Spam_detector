#ifndef METHOD_H
#define METHOD_H

#include "textclass.h"


class Method
{
public:
    Method(): result(0), text(0)
    {}
    int result;
    TextClass text;
    Method();
    double result();

};

#endif // METHOD_H
