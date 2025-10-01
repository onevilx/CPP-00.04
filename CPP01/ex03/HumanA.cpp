#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon) : name(_name), weapon(_weapon)
{
    std::cout << "HumanA " << name << "created with ";
    std::cout << weapon.getType() << std::endl;
}
HumanA:: ~HumanA(void)
{
    std::cout << "Human A disconnected hhhhhh" << this->name << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << this->name << "attacked by this weapon" << this->weapon.getType() << std::endl;
}

void    HumanA::setWeapon(Weapon _weapon)
{
    this->weapon = _weapon;
}