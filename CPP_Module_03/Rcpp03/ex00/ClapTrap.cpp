#include "ClapTrap.hpp"
//default counstructer nasıl tanımlanmalı, tanımlanmalı mı !!!

ClapTrap::ClapTrap( std::string name ) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0){
    std::cout << "ClapTrap 2nd counstructor called\n";
    std::cout << "- hitpoints    : " << this->_hit_points << std::endl;
    std::cout << "- energypoints : " << this->_energy_points << std::endl;
    std::cout << "- attackdamage : " << this->_attack_damage << std::endl << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& tmp ){
    std::cout << "ClapTrap copy counstructor called\n";
    *this = tmp;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& tmp ){
    std::cout << "ClapTrap assigment(=) operator called\n";
    if (this != &tmp)
    {
        _name = tmp._name;
        _hit_points = tmp._hit_points;
        _energy_points = tmp._energy_points;
    }
    return *this;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap destructor called\n";
}

// atack yapılırsa energy point degeri bir azalır
// burada neden ikinci if içerisinde return kullanmadık !!!
void ClapTrap::attack( const std::string& target){
    if (!this->_energy_points){
        std::cout << this->_name << " : you have no enough energy point to attack.\n";
        return;
    }
    if (this->_hit_points < this->_attack_damage){
        std::cout << this->_name << " : you have no enough hit point to attack.\n";
    }
    else{
        std::cout << this->_name << " : attacks << " << target << " >> causing << " << _attack_damage << " >> point of damege.\n";
        this->_energy_points--;
    }
}

// hit points degerini girilen sayı kadar azaltıyoruz
// ama enerjisi dusmuyor
void ClapTrap::takeDamage( unsigned int amount ){
    if ( _hit_points < amount ){
        std::cout << _name << " : you have no enough hitpoint to attack.\n";
        std::cout << "- hitpoints    : " << this->_hit_points << std::endl;
        std::cout << "- amount       : " << amount << std::endl;
    }
    else{
        std::cout << _name << " : takes << " << amount << " >> points of damage.\n";
        _hit_points -= amount;
        std::cout << "- hitpoints    : " << this->_hit_points << std::endl;
    }
    std::cout << "- energypoints : " << this->_energy_points << std::endl << std::endl;

}

// energy bir azalıyor
// hit point degeri girilen sayıya
void ClapTrap::beRepaired( unsigned int amount ){
    if (!_energy_points)
        std::cout << _name << " : you have no enough energy point to repair.\n";
    else{
        std::cout << _name << " : is repairing.\n";
        _energy_points--;
        _hit_points = amount;
        std::cout << "- hitpoints    : " << this->_hit_points << std::endl;
        std::cout << "- energypoints : " << this->_energy_points << std::endl << std::endl;

    }
}

