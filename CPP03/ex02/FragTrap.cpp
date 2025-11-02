#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default")
{
    hitPoints = 100;
    energyPoints = 100;
    attackdamage = 30;
    std::cout << "Default Constructor Called!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 100;
    attackdamage = 30;
    std::cout << "Parameterized Constructor Called for: " << name << "!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
    std::cout << "Copy Constructor Called!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& content)
{
    std::cout << "Copy assignment operator called!" << std::endl;
    if (this != &content)
    {

        name = content.name;
        hitPoints = content.hitPoints;
        energyPoints = content.energyPoints;
        attackdamage = content.attackdamage;
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor called!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
     std::cout << "FragTrap " << name << " requests a high five!" << std::endl;
}