#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed const & src);
        Fixed & operator=( Fixed const & rhs);

        int getRawBits( void ) const;
        void setRawBits( int const raw );

        //----ex01----//
        Fixed( int const int_arg);
        Fixed( float const float_arg);
        float toFloat( void ) const;
        int toInt( void ) const;
        //------------//

    private:
        int fixed_point_value;
        static const int n_frac_bits = 8;
};
// ostream sınıfı girdi/çıktı işlemleri için kullanılır
// ve çağrının ardışık << operatörleri ile devam edebilmesini sağlar (chaining).
// ostream turuunde bir ref alır parametre olarak
// Fixed turunden bir ref laır parametre olarak
std::ostream & operator<<( std::ostream & o, Fixed const & rhs);

# endif