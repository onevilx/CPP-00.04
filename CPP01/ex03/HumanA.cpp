#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon) : name(_name), weapon(_weapon) {}

HumanA:: ~HumanA(void) {}

void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
