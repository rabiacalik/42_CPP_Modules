 #include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():_type("Wrong_Default"){
    std::cout << "WrongAnimal : constructed." << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal : destroyed.\n" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &copy){
    *this = copy;
    std::cout << "WrongAnimal : copy Constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src){
    std::cout << "WrongAnimal : assignation operator called" << std::endl;
    this->_type = src._type;
    return(*this);
}

void WrongAnimal::makeSound(void)const{
    std::cout << this->getType() << " says : WrongAnimal sounds" << std::endl;
}

std::string WrongAnimal::getType(void)const{
    return(this->_type);
}