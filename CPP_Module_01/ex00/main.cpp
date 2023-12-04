#include "Zombie.hpp"

int main() {

    Zombie* newZ = newZombie("Zed");
    newZ->announce();

    randomChump("Ted");

    delete newZ;

    return 0;
}

/*
    gerekli kontroller yapıldı +++
    header eklenecek
    leaks kontrolu yapılacak
*/