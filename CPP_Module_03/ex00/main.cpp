#include "ClapTrap.hpp" // ClapTrap sınıfının bulunduğu başlık dosyası

int main() {
    ClapTrap clap("Clap1"); // ClapTrap objesi oluşturulur, ismi "Clap1" olarak atanır

    clap.attack("Target1"); // ClapTrap hedefe saldırır
    clap.takeDamage(5); // ClapTrap hasar alır
    clap.beRepaired(3); // ClapTrap onarılır

    return 0;
}
/*
Counstructer 2 called.
ClapTrap Clap1(1132860136) attacks Target1, causing 1135360768 points of damage!
ClapTrap Clap1(1132860136) takes 5 points of damage!!
ClapTrap Clap1(1132860131) is repaird 3 hitpoints points!
Destructer called.
*/
