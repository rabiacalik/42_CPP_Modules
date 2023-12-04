#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string     name;
        unsigned int    HitPoints;
        unsigned int    EnergyPoints;
        unsigned int    AttackDamage;

    public:
        ClapTrap();
        ClapTrap( const ClapTrap& old );
        ClapTrap( std::string _name );
        ~ClapTrap();
        ClapTrap& operator=( const ClapTrap& old );

        void attack( const std::string& target );
        void takeDamage( unsigned int amount );
        void beRepaired( unsigned int amount );
};

#endif

/*
    !!!!!!!
    baslangıç degerlerini ekrana ilk basta yadırmayı dene
*/