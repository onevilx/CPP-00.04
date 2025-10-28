#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
    std::string     name;
    unsigned int    hitPoints;
    unsigned int    energyPoints;
    unsigned int    attackdamage;

    public:
    ClapTrap(std::string user);
    ClapTrap(const ClapTrap& other);
    ClapTrap &operator=(const ClapTrap& other);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string getter_att(void) const;
    void setter_att(std::string const &att);

};

#endif