#ifndef FORMA_H
#define FORMA_H

#include <iostream>
#include <string.h>

class Forma
{
public:
    virtual std::string get_cor() = 0;
    virtual std::string get_nome() = 0;
};

#endif
