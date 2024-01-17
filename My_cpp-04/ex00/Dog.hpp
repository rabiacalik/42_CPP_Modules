#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

// Cat ile aynılar bir farkları yok
class Dog: public Animal
{
    private:
        std::string type;
    
    public:
        Dog();
        ~Dog();
        Dog( Dog & tmp );
        Dog & operator=( Dog const & tmp );

        void makeSound() const;
        std::string getType( void ) const;
};

#endif