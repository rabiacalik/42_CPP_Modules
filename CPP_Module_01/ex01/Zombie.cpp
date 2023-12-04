#include "Zombie.hpp"

Zombie::Zombie(){
    std::cout << "A Zombie is created" << std::endl;
}

Zombie::Zombie(std::string name){
    this->_name = name;
    std::cout << this->_name << " has been sreated" << std::endl;
}

Zombie::~Zombie(){
    std::cout << this->_name << " has been destroyed" << std::endl;
}

void Zombie::announce( void ){
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}

void Zombie::setName( std::string name ){
    this->_name = name;
}

std::string Zombie::getName( void ) {
    return this->_name;
}
