#ifndef TEXTCLASS_H
#define TEXTCLASS_H
#include <string>
#include <iostream>

class TextClass
{
public:
    TextClass();
    explicit TextClass(const int &n);
    void setString(std::string inputString); /* Setter to get to private field */
    std::string normalizeString(); /* Module to simplify string */

private:
    std::string str = "Hello";
};

#endif // TEXTCLASS_H
