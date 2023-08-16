#include "PhoneBook.hpp"

void Phonebook::SEARCH()
{
    for (int i = 0; person[i].flag == 1; i++)
    {
        std::cout << i + 1 << "|";

        if(person[i].getName().length() > 10)
            std::cout << std::setw(10) << person[i].getName().substr(0, 9) + "." << "|";
        else
            std::cout << std::setw(10) << person[i].getName() << "|";

        if(person[i].getSurname().length() > 10)
            std::cout << std::setw(10) << person[i].getSurname().substr(0, 9) + "." << "|";
        else
            std::cout << std::setw(10) << person[i].getSurname() << "|";

        if(person[i].getNickName().length() > 10)
            std::cout << std::setw(10) << person[i].getNickName().substr(0, 9) + "." << "|";
        else
            std::cout << std::setw(10) << person[i].getNickName() << "|"; 

        std::cout << std::endl; // sadece endl yazsak olmuyor mu illa cout da yazmamız gerekiyor mu       
    }
}