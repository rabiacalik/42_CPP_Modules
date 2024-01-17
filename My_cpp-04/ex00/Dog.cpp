#include "Dog.hpp"

Dog::Dog(){
    this->type = "dog";
    std::cout << "Dog : constructed.\n";
}

Dog::~Dog(){
    std::cout << "Dog : destroyed.\n";
}

Dog::Dog( Dog & tmp ):Animal(tmp){
    this->type = tmp.getType();
    std::cout << "Dog : constructed from copy.\n";
}

Dog & Dog::operator=( Dog const & tmp ){
    this->type = tmp.type;
    return (*this);
}

// havlasa olmazmı !!!
void Dog::makeSound() const{
    std::cout << "... Woof  woof ...\n";
}

std::string Dog::getType( void ) const{
    return (this->type);
}