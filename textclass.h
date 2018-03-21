#ifndef TEXTCLASS_H
#define TEXTCLASS_H
#include <string>
#include <iostream>

struct associated_mass{
    char * mass;
    int hash_func(const std::string &s);
};
class TextClass
{
public:
    TextClass();
    explicit TextClass(const int &n);
    associated_mass& get_assoc_mass();
    associated_mass mass;
};

#endif // TEXTCLASS_H
