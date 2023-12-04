#include "Zombie.hpp"

// ikinci bir counstructer oluşturduk ama kullanmadık
// gereksiz bir şey mi diğer yapanlarla karşılaştır.
int main()
{
    Zombie *zombie = ZombieHorde(20, "rabia");

    int i = 0;
    while (i < 20)
    {
        zombie[i].announce();
        i++;
    }

    delete [] zombie;
}