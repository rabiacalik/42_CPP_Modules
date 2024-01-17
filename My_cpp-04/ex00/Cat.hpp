#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
    private:
        std::string type;

    public:
        Cat();
        ~Cat();
        Cat( Cat & tmp );
        Cat & operator=( Cat const & tmp );

        void makeSound() const;
        std::string getType( void ) const;
};

#endif