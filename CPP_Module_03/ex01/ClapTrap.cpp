#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "< ClapTrap > default counstructer called." << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& old)
{
    *this = old;
    std::cout << "< ClapTrap > - " << this->name << " copied." << std::endl;
}

ClapTrap::ClapTrap( std::string _name): name(_name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
    std::cout << "< ClapTrap > - " << this->name << " counstructer." << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "< ClapTrap > - " << this->name << " destructed." << std::endl;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& old )
{
    this->name = old.name;
    this->HitPoints = old.HitPoints;
    this->EnergyPoints = old.EnergyPoints;
    this->AttackDamage = old.AttackDamage;
    return *this;
}

void ClapTrap::attack( const std::string& target)
{
    if (this->HitPoints == 0)
        return;
    if (this->EnergyPoints <= 0)
    {
        std::cout << this->name << "' energy point run out!!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name <<  " hitpoint -> [ " <<  this->HitPoints << " ] attacks " << target << ", causing attackdamage -> [ " << this->AttackDamage << " ] points of damage!" << std::endl;
    
    this->EnergyPoints--;
    std::cout << "EnergyPoints = " << this->EnergyPoints << std::endl;

    std::cout << "-----------------------\n";
}

void ClapTrap::takeDamage( unsigned int amount)
{
    if (this->HitPoints == 0)
        return;
    if (this->HitPoints <= 0)
    {
        std::cout << this->name << "'s energy point run out!!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name << " hitpoints -> [ " << this->HitPoints << " ] takes " << amount << " points of damage!" << std::endl;
    
    this->HitPoints -= amount;
    std::cout << "HitPoints = " << this->HitPoints << std::endl;

    std::cout << "-----------------------\n";
}

void ClapTrap::beRepaired( unsigned int amount )
{
    if (this->HitPoints == 0)
        return;
    if (this->EnergyPoints <= 0)
    {
        std::cout << this->name << "'s energy point run out!!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name << "hitpoint -> [ " << this->HitPoints << " ] is repaird " << amount << " hitpoints points!" << std::endl;
    
    this->HitPoints += amount;
    std::cout << "HitPoints = " << this->HitPoints << std::endl;

    this->EnergyPoints--;
    std::cout << "EnergyPoints = " << this->EnergyPoints << std::endl;

    std::cout << "-----------------------\n";
}

