#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
    this->Weaponn = NULL;
    this->name = _name;
    std::cout << "Human B" << name << "created with no weapon wiw" << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << "Human B" << this->name << "has been destroyed" << std::endl;
}

void    HumanB::attack(void)
{
    std::cout << this->name << "attacked by this weapon" << this->Weaponn->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &_weapon)
{
    this->Weaponn = &_weapon;
}