#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap( std::string _name );
        ScavTrap( const ScavTrap& t );
        ~ScavTrap();
        ScavTrap& operator=( const ScavTrap& t);

        void guardGate();
        void attack( const std::string& target);
};

#endif
