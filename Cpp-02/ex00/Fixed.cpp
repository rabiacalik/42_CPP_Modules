#include "Fixed.hpp"

int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits called" << std::endl;
    return (this->fixed_point_value);
}

void Fixed::setRawBits( int const raw ){
    this->fixed_point_value = raw;
    std::cout << "setRawBits called" << std::endl;
}

Fixed::Fixed(){
    this->fixed_point_value = 0;
    std::cout << "Default counstructer called" << std::endl;
}

Fixed::~Fixed(){
    std::cout << "Destructer called" << std::endl;
}

Fixed::Fixed( Fixed const & fixed){
    std::cout << "Copy counstructer called" << std::endl;
    *this = fixed;
}

Fixed & Fixed::operator=(Fixed const & fixed){
    setRawBits(fixed.getRawBits());
    std::cout << "Assignation operator called" << std::endl;
    return( *this );
}
