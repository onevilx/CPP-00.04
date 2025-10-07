#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name), Weaponn(NULL) {}

HumanB::~HumanB(void) {}

void HumanB::attack(void)
{
    if (this->Weaponn)
        std::cout << name << " attacks with their " << Weaponn->getType() << std::endl;
    else
        std::cout << name << " has no weapon to attack with!" << std::endl;
}

void    HumanB::setWeapon(Weapon &_weapon)
{
    Weaponn = &_weapon;
}