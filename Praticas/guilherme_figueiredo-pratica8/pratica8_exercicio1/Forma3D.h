#ifndef FORMA_3D_H
#define FORMA_3D_H

#include <iostream>

#include "Forma.h"

class Forma3D : public Forma
{
public:
    virtual double get_volume() = 0;
};

#endif