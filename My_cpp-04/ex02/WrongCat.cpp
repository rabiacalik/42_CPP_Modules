#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal(){
    this->_type = "WrongCat";
    std::cout << "WrongCat : Constructed." << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy):WrongAnimal(){
    *this = copy;
    std::cout << "WrongCat : Copy Constructor called" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat : destroyed.\n" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& src){
    std::cout << "WrongCat : Assignation operator called" << std::endl;
    this->_type = src._type;
    return(*this);
}

void WrongCat::makeSound(void)const{
    std::cout << this->getType() << " says: WrongCat sounds" << std::endl;
}
