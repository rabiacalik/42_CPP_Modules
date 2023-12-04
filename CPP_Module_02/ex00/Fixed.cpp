#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default counstructer called." << std::endl;
    this->value = 0;
}

Fixed::Fixed(const Fixed& old)
{
    std::cout << "Copy counstructer called." << std::endl;
    this->setRawBits(old.getRawBits());
}

Fixed::~Fixed(void)
{
    std::cout << "Destructer called." << std::endl;
}

Fixed& Fixed::operator=(const Fixed& t)
{
    std::cout << "Copy assigment operator called." << std::endl;

    /*
        atama yapılan nesnenin (this),
        atama yapılmak istenen nesne ile (t) 
        aynı olup olmadığını kontrol eder.
    */
    if (this != &t)
        this->value = t.getRawBits();
    return *this;
}

/*
    private olan value degişkenini doner
*/
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called." << std::endl;
    return (this->value);
}

/*
    verilen parametreyi(raw) 
    sınıf içerisindeki private degişken olan
    value ya atıyor
*/
void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}