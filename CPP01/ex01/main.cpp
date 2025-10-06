#include "Zombie.hpp"

int main(void)
{
    Zombie *_hordeZombie;
    int N = 5;

    _hordeZombie = zombieHorde(N, "HordeZombie");
    int i = 0;
    while (i < N)
    {
        _hordeZombie[i].announce();
        i++;
    }
    delete[] _hordeZombie;
    return 0;
}