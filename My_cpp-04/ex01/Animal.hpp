#pragma once
#include <cstdio>
#include <cstdlib>

#include <string> // !!! gerekli mi !!!
#include <iostream>

class Animal 
{
    protected:
        std::string _type;

    public:
        Animal();
        virtual ~Animal();
        Animal( const Animal& tmp );
        Animal& operator=( const Animal& tmp );

        virtual void makeSound( void ) const;

        std::string getType( void ) const;
};