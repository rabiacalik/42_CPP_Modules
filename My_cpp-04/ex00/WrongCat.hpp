#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

// public tureme : sınıfın public ve protectedlarına erişir
class WrongCat: public WrongAnimal
{
    // bunu neden protected yaaptık !!!
    protected:
        std::string type;

    public:
        WrongCat();
        ~WrongCat();
        WrongCat( WrongCat & tmp );
        WrongCat & operator=( WrongCat const & tmp );

        void makeSound() const;
};

#endif