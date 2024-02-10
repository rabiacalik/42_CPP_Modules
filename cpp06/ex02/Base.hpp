#pragma once 

#include <iostream>
#include <stdlib.h>

class Base 
{
    public:
        virtual ~Base();
        static Base* generate(void);
        static void identify(Base *p);//tanimlamak
        static void identify(Base &p);
};