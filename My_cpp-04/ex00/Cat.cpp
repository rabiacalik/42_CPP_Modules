#include "Cat.hpp"

Cat::Cat(){
    this->type = "cat";
    std::cout << "Cat : constructed.\n";
}

Cat::~Cat(){
    std::cout << "Cat : destroyed.\n";
}

Cat::Cat( Cat & tmp ):Animal(tmp){
    this->type = tmp.getType();
    std::cout << "Cat : constructed from copy.\n";
}

Cat & Cat::operator=( Cat const & tmp ){
    this->type = tmp.type;
    return (*this);
}

void Cat::makeSound() const{
    std::cout << "... Meow meow ...\n";
}

std::string Cat::getType( void ) const{
    return (this->type);
}