#include "Animal.hpp"

Animal::Animal(): _type("animal"){
    std::cout << "Animal : constructed.\n";
}

Animal::~Animal(){
    std::cout << "Animal : destroyed.\n";
}

// ex00 da const dememıstık !!!
Animal::Animal( const Animal & tmp ){
    this->_type = tmp._type;
    std::cout << "Animal : constructed from copy.\n";
}

Animal & Animal::operator=( Animal const & tmp ){
    std::cout << "Animal : assignation operaator called.\n"; // ex00 a da ekleyalim !!!
    this->_type = tmp._type;
    return (*this);
}

void Animal::makeSound() const{
    std::cout << "... generic animal sound ...\n";
}

std::string Animal::getType( void ) const{
    return (this->_type);
}