#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    
    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal ( WrongAnimal & tmp );
        WrongAnimal & operator=( WrongAnimal const & tmp );

        void makeSound() const;
        std::string getType( void ) const;
};

#endif