#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name), Weaponn(NULL) {}

HumanB::~HumanB(void) {}

void HumanB::attack(void)
{
    if (this->Weaponn)
        std::cout << this->name << " attacks with their " << this->Weaponn->getType() << std::endl;
    else
        std::cout << this->name << " has no weapon to attack with!" << std::endl;
}

void    HumanB::setWeapon(Weapon &_weapon)
{
    this->Weaponn = &_weapon;
}