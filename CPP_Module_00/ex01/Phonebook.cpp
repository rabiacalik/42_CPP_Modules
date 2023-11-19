#include "PhoneBook.hpp"

int main()
{
    Phonebook book;

    book.add = 0;
    book.i = 0;
    std::string tmp;

    while(1)
    {
        std::cout << "PHONEBOOK" << std::endl;
        getline(std::cin, tmp);
        if(!tmp.compare("ADD"))
            book.ADD();
        else if(!tmp.compare("SEARCH"))
            book.SEARCH();
        else if(!tmp.compare("EXIT"))
            exit(0);
    }
}

