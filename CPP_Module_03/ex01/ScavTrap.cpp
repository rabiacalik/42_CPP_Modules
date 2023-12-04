#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "< ClapTrap > default counstructer called." << std::endl;
}

ScavTrap::ScavTrap( std::string _name): ClapTrap(_name)
{
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;

    std::cout << "< ScavTrap > - " << this->name << " counstructed." << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& t ): ClapTrap(t)
{
    std::cout << "< ScavTrap > - " << this->name << " copied." << std::endl;
    *this = t;
}

ScavTrap::~ScavTrap()
{
    std::cout << "< ScavTrap > - " << this->name << " destructed called." << std::endl;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& old )
{
    this->name = old.name;
    this->HitPoints = old.HitPoints;
    this->EnergyPoints = old.EnergyPoints;
    this->AttackDamage = old.AttackDamage;
    return *this;
}

void ScavTrap::attack( const std::string& target )
{
    if (this->HitPoints == 0)
        return;
    if ( this->EnergyPoints <= 0)
    {
        std::cout << this->name << "'s endergy point run out!" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->name << " Hitpoints -> [ " << this->HitPoints << " ] attacks" << target << ", causing AttackDamage -> [ " << this->AttackDamage << " ] points of damage!" << std::endl;

    this->EnergyPoints--;
    std::cout << "EnergyPoints = " << this->EnergyPoints << std::endl;

    std::cout << "-----------------------\n";  
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " Hitpoints -> [ " << this->HitPoints << " ] is now in Gate Keeper mode." << std::endl; 
}



