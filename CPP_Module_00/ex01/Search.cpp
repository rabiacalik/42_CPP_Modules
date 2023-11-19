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

    std::cout << "Choose a number between 1 and " << add << " : ";


    while(!(std::cin >> select) || select > add || select < 1 || !std::isdigit(select)) 
    {
        std::cout << std::endl << "Chose a number between 1 and " << add << " : ";
        std::cin >> select;
        std::cin.ignore();
    }

    std::cout << "Name          :" << person[select - 1].getName() << std::endl;
    std::cout << "Surname       :" << person[select - 1].getSurname() << std::endl;
    std::cout << "NickName      :" << person[select - 1].getNickName() << std::endl;
    std::cout << "Phone Number  :" << person[select - 1].getName() << std::endl;
    std::cout << "Darkes Secret :" << person[select - 1].getDarkestSecret() << std::endl;
    std::cin.ignore();
}
