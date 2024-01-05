#include "Fixed.hpp"

int Fixed::getRawBits( void ) const{
    return (this->fixed_point_value);
    std::cout << "getRawBits member function called" << std::endl;
}

void Fixed::setRawBits( int const raw ){
    this->fixed_point_value = raw;
    std::cout << "setRawBits member function called" << std::endl;
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
//-----------------ex01----------------

// int constructor
Fixed::Fixed( int int_arg ){
    std::cout << "Int counstructer called" << std::endl;
    setRawBits( int_arg << this->n_frac_bits );
}

// float constructor
Fixed::Fixed( float float_arg ){
    std::cout << "Float constructor called" << std::endl;
    this->setRawBits((int)roundf(float_arg *  (1 << this->n_frac_bits)));
}

float Fixed::toFloat( void ) const{
    float f;

    f = (float)this->getRawBits() / (1 << this->n_frac_bits);
    return (f);
}

int Fixed::toInt( void ) const{
    return (this->getRawBits() >> this->n_frac_bits);
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs)
{ // tofloat yaptıgımız ıcın sayı farklı cıktı
	o << rhs.toFloat();
	return (o);
}

