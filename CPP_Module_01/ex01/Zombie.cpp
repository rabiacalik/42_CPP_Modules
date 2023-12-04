#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << this->_name << ":Brainnnzzz...\n"; 
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}

Zombie::Zombie()
{
    std::cout << "Counstructer-1 : A Zombie is created" << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << this->_name << "Counstructer-2 : has been sreated" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->_name << "Destructer : has been destroyed" << std::endl;
}