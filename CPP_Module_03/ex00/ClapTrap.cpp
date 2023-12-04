#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default counstructer called." << std::endl;
}

ClapTrap::ClapTrap(std::string _name)
{
    std::cout << "Counstructer 2 called." << std::endl;
    this->name = _name;
}

ClapTrap::ClapTrap(const ClapTrap& old)
{
    std::cout << "Copy counstructer called." << std::endl;
    *this = old;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructer called." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& old)
{
    this->name = old.name;
    this->HitPoints = old.HitPoints;
    this->EnergyPoints = old.EnergyPoints;
    this->AttackDamage = old.AttackDamage;
    return *this;
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->HitPoints == 0)
        return ;
    if (this->EnergyPoints <= 0)
    {
        std::cout << this->name << "'s energy point run out!!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << "(" << this->HitPoints << ") attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
    this->EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->HitPoints == 0)
        return;
    if (this->HitPoints <= amount)
    {
        std::cout << this->name << " is Dead :(" << std::endl;
        this->HitPoints = 0;
        return;
    }
    std::cout << "ClapTrap " << this->name << "(" << this->HitPoints << ") takes " << amount << " points of damage!!" << std::endl;
    this->HitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->HitPoints == 0)
        return;
    if (this->EnergyPoints <= 0)
    {
        std::cout << this->name << "'s energy point run out!!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name << "(" << this->HitPoints << ") is repaird " << amount << " hitpoints points!" << std::endl;
    this->HitPoints += amount;
    this->EnergyPoints--;
}
