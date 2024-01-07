#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
// unsigned eksili bir deger alamadıgı anlamında
class ClapTrap
{
    private:
        std::string _name;
        unsigned int _hit_points;
        unsigned int _energy_points;
        unsigned int _attack_damage;

        ClapTrap();
    
    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& tmp);
        ClapTrap& operator=(const ClapTrap& tmp);
        ~ClapTrap();

        void attack( const std::string& target_name);
        void takeDamage( unsigned int amound );
        void beRepaired( unsigned int amount );
};

#endif