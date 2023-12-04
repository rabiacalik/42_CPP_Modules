#include "ScavTrap.hpp"

int main()
{
    ClapTrap rabia("Rabia");
    ClapTrap calik("Calik");
    ScavTrap scav_calik("ScavCalik");

    rabia.attack("Calik");
    calik.takeDamage(3);
    rabia.beRepaired(3);

    scav_calik.attack("Rabia");
    scav_calik.takeDamage(45);
    scav_calik.beRepaired(10);

    scav_calik.attack("Rabia");
    scav_calik.takeDamage(25);
    scav_calik.guardGate();
    
}