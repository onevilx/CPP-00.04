#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
    std::string name;
    Weapon      *Weaponn;

    public:
    HumanB(std::string _name);
    ~HumanB(void);
    void    attack(void);
    void    setWeapon(Weapon &_weapon);
};

#endif