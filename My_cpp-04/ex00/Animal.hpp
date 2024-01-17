#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

// virtual ile tanımlanan fonksiyonlar, sanal fonksiyonlardır
// turemiş sınıflar tarafında ovverride edilebilirler
class Animal
{
    // alt sınıflarda tanımladıgımız type ile baglantılı mı !!!
    protected:
        std::string type;

    public:
        Animal();
        virtual ~Animal();
        Animal( Animal & tmp );
        Animal & operator=( Animal const & tmp );

        virtual std::string getType( void ) const;
        virtual void makeSound() const;
};

#endif