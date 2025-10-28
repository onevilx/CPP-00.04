#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
    std::string name;
    int     hitPoints;
    int     energyPoints;
    int     damage;

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