#pragma once

#include "Data.hpp"
#include <iostream>
#include <stdint.h> // bu ne için gerekli !!!!!

class Serialize
{
    private:
        std::string str;
    
    public:
        Serialize();
        ~Serialize();
        Serialize(Serialize const& src);
        Serialize& operator=(Serialize const& src);

        //uintpr_t(unsigned integer type capable of holding a pointer)
        //bir işaretçiinin adresini temsil edebilecek şekilde boyutlandırılmış integer
        //işaretçi ile aynı boyutta 64-bit lik sistemlerde 64 bittir gibi
        
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};