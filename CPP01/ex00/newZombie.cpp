#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *N;

    N = new Zombie(name);
    return (N);
}