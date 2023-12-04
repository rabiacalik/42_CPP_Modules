#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int value;
        static const int store = 0;
    
    public:
        Fixed(void);
        Fixed(const Fixed& old_fix);
        Fixed& operator=(const Fixed& t);
        ~Fixed(void);

        // const ifadesi bu fonksiyon hiç bir değeri değiştiremez anlamında 
        int getRawBits(void) const;

        void setRawBits(int const raw); 
};

#endif