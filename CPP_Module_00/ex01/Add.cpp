#include "PhoneBook.hpp"

void Phonebook::ADD()
{
    person[i].flag = 0;
    std::string temp;

    std::cout << "Name: ";
    getline(std::cin, temp);
    while(temp.empty())
    {
        std::cout << "Input cannot be empty." << std::endl << "Name: ";
        getline(std::cin, temp);
    }
    person[i].setName(temp);

    std::cout << "Surname: ";
    getline(std::cin, temp);
    while(temp.empty())
    {
        std::cout << "Input cannot be empty." << std::endl << "Surname: ";
        getline(std::cin, temp);
    }
    person[i].setSurname(temp);

    std::cout << "Nickname: ";
    getline(std::cin, temp);
    while(temp.empty())
    {
        std::cout << "Input cannot be empty." << std::endl << "Nickname: ";
        getline(std::cin, temp);
    }
    person[i].setNickName(temp);

    std::cout << "Phone Number: ";
    getline(std::cin, temp);
    while(temp.empty())
    {
        std::cout << "Input cannot be empty." << std::endl << "Phone Number: ";
        getline(std::cin, temp);
    }
    person[i].setPhoneNumber(temp);

    std::cout << "Darkest Secret: ";
    getline(std::cin, temp);
    while(temp.empty())
    {
        std::cout << "Input cannot be empty." << std::endl << "Darkest Secret: ";
        getline(std::cin, temp);
    }
    person[i].setDarkestSecret(temp);

    person[i].flag = 1;
    i++;
    i%=8;
    if(add < 8)
        add++;
}
