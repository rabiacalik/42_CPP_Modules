#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal : constructed.\n";
    this->type = "animal";
}

Animal::~Animal(){
    std::cout << "Animal : destroyed.\n";
}

Animal::Animal( Animal & tmp ){
    this->type = tmp.type;
    std::cout << "Animal : constructed from copy.\n";
}

// burada copy coustructer la aralarındaki fark nedir !!!
Animal & Animal::operator=( Animal const & tmp ){
    this->type = tmp.type;
    return (*this);
}

void Animal::makeSound() const{
    std::cout << "... generic animal sound ...\n";
}

std::string Animal::getType( void ) const{
    return (this->type);
}
