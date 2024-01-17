#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal {
    private:
        Brain *_brain;
    public:
        Dog();
        ~Dog();
        Dog(const Dog&);
        Dog& operator=(const Dog&);

        void makeSound(void)const;

        void setIdea(size_t , std::string);
        void getIdeas(void)const;
};