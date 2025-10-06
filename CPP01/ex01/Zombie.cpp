#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << name << "has just born" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << name << " Died" << std::endl;
}
