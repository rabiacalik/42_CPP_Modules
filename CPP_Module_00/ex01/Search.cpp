#include "PhoneBook.hpp"

void Phonebook::SEARCH()
{
    for (int i = 0; person[i].flag == 1; i++)
    {
        std::cout << i+1 << "|";

        if (person[i].getName().length() > 10)
            std::cout << std::setw(10) << person[i].getName().substr(0,9) + "." << "|";
        else
            std::cout << std::setw(10) << person[i].getName() << "|";


        if (person[i].getSurname().length() > 10)
            std::cout << std::setw(10) << person[i].getSurname().substr(0,9) + "." << "|";
        else
            std::cout << std::setw(10) << person[i].getSurname() << "|";



        if (person[i].getNickName().length() > 10)
            std::cout << std::setw(10) << person[i].getNickName().substr(0,9) + "." << "|";
        else
            std::cout << std::setw(10) << person[i].getNickName() << "|";
        
        std::cout << std::endl;
    }

    int select = 0;

    std::cout << "Choose a number between 1 and "
}

/*
setw --> bosluk bırakmamızı saglıyor
substr --> 0 dan basla 9 a kadar alt dizin olustur
*/