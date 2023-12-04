#include "Zombie.hpp"

Zombie::Zombie(){
    std::cout << "Counstructer called." << std::endl;
}

Zombie::~Zombie(){
    std::cout << "Destructer called." << std::endl;
}

void Zombie::announce( void ){
    std::cout << this->getName() << ":  BraiiiiiiinnnzzzZ..." << std::endl; 
}

// setter
void Zombie::setName(std::string _name){
    this->_name = _name;
}

// getter
std::string Zombie::getName(void){
    return this->_name;
}
