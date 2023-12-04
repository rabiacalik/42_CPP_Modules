#include "Fixed.hpp"

// Default counstructer
Fixed::Fixed(void)
{
    std::cout << "Default counstructer called." << std::endl;
    this->value = 0;
}

// Copy Counstructer
Fixed::Fixed(const Fixed& old)
{
    std::cout << "Copy Counstructer called." << std::endl;
    this->setRawBits(old.getRawBits());
}

// Int Counstructer
Fixed::Fixed(const int n)
{
    std::cout << "int counstructer called." << std::endl;
    this->setRawBits(n << this->bits);// sola kaydiriyor neden
}

// Float Counstructer
Fixed::Fixed(const float n)
{
    std::cout << "Float Counstructer called." << std::endl;
    this->setRawBits( roundf(n * (1 << this->bits)));
}

// Destroy Counstructer - Destructer
Fixed::~Fixed(void)
{
    std::cout << "Destructer called." << std::endl;
}

// assigment(=) operator copy
Fixed& Fixed::operator=(const Fixed& t)
{
    std::cout << "Copy assigment operator called." << std::endl;
    if (this != &t)
        this->value = t.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called." << std::endl;
    return (this->value);
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

float Fixed::toFloat(void) const
{
    return (this->getRawBits() >> this->bits);;
}

int Fixed::toInt( void ) const
{
        return ( this->getRawBits() >> this->bits );
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
    o << i.toFloat();
    return o;
}