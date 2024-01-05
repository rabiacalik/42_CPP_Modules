#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

// CANONİC FORM
// 1- counstructer default
// 2- copy counstructer
// 3- = operator overload
// 4- destructer (virtual!)

class Fixed
{
    public:
        // default counstructer
        Fixed();

        // destructer
        ~Fixed();

        // copy counstructer
        Fixed(Fixed const & src);

        // Operator = overload
        // Fixed sınıfından bir referansı dondurur
        // rhs sag taraf - aşdıgı parametredir
        Fixed & operator=( Fixed const & rhs);
 
        int getRawBits( void ) const;
        void setRawBits( int const raw );

        // const kullanımı
        // get de bu fonksiyon kendi sınıfının durumunu degiştiremez
        // set de raw parametresi set fonksiyonu içerisinde degiştirilemez

    private:
        int fixed_point_value;
        static const int n_frac_bits = 8;

};

#endif