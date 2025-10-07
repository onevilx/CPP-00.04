#include "Zombie.hpp"

int main(void)
{
    Zombie *_hordeZombie;
    int N = 0;

    _hordeZombie = zombieHorde(N, "HordeZombie");
    if (!_hordeZombie)
        return (1);
    int i = 0;
    while (i < N)
    {
        _hordeZombie[i].announce();
        i++;
    }
    delete[] _hordeZombie;
    return 0;
}