#include "Zombie.hpp"

int main(void)
{
    Zombie *_Zombie;
    
    _Zombie = newZombie("hello there! i am allocated in heap.");
    _Zombie->announce();
    delete _Zombie;
    randomChump("hello there! i am allocated in stack.");
    return 0;
}