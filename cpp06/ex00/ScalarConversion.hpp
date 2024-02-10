#pragma once

#include <iostream>
#include <string>
#include <algorithm> //count
#include <stdlib.h> // ne için kullnaılıyor yaz !!!

class ScalarConverter
{
    private: // bu niye varr !!!!
        std::string _name;
    
    public:
        ScalarConverter(); //private yapılmalı mı !!!!
        ScalarConverter(const std::string& s);
        ScalarConverter(const ScalarConverter& sc);
        ScalarConverter& operator=(const ScalarConverter& sc);
        ~ScalarConverter();

        static void convert(std::string str); //donusturmek
        static bool is_it_for_science(std::string& s); //bilim için mi
        static bool is_wrong_number(std::string& s); //yasnlis numara
};