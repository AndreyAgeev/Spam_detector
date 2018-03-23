#include "textclass.h"

TextClass::TextClass()
{

    std::cout << str;
}

void TextClass::setString(std::string inputString)
{
    /* TODO: simple setter, need to fill up private field "str" from inputString */
}

std::string TextClass::normalizeString()
{
    /* TODO: module to re-work inputString and modify
    *        that string to simplify it lexems
    *        Guess it needs to overwrite field "str" in TextClass
    *        so module "Method" can work with it
    */
    return str;
}
TextClass::TextClass(const int &n)
{
    std::cout << n;
}
