#include "PhoneBook.hpp"

void Contact::setName(std::string name)
{
    _name = name;
}
std::string Contact::getName(void)
{
    return _name;
}

void Contact::setSurname(std::string name)
{
    _surname = name;
}
std::string Contact::getSurname(void)
{
    return _surname;
}

void Contact::setNickName(std::string name)
{
    _nickname = name;
}
std::string Contact::getNickName(void)
{
    return _nickname;
}

void Contact::setPhoneNumber(std::string name)
{
    _phoneNumber = name;
}
std::string Contact::getPhoneNumber(void)
{
    return _phoneNumber;
}

void Contact::setDarkestSecret(std::string name)
{
    _darkestSecret = name;
}
std::string Contact::getDarkestSecret(void)
{
    return _darkestSecret;
}