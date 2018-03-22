#ifndef TEXTCLASS_H
#define TEXTCLASS_H
#include <string>
#include <iostream>
<<<<<<< HEAD

struct associated_mass{
    char * mass;
    int hash_func(const std::string &s);
};
=======
>>>>>>> 4c26d85a901d4eb93fe4428175249a3d5301e6fd
class TextClass
{
public:
    TextClass();
    explicit TextClass(const int &n);
<<<<<<< HEAD
    associated_mass& get_assoc_mass();
    associated_mass mass;
=======
    std::string str = "hello";
>>>>>>> 4c26d85a901d4eb93fe4428175249a3d5301e6fd
};

#endif // TEXTCLASS_H
