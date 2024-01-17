#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
    private:
        Brain* _brain;
    
    public:
        Cat();
        ~Cat();
        Cat( const Cat& );
        Cat& operator=( const Cat& );

        void makeSound( void ) const;

        void setIdeas( size_t, std::string );
        void getIdeas( void ) const;
};