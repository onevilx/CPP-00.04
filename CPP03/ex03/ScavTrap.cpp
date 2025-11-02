#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default!")
{
    hitPoints = 100;
    energyPoints = 50;
    attackdamage = 20;
    std::cout << "Default Constructor Called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 50;
    attackdamage = 20;
    std::cout << "Parameterized Constructor Called for: " << name << "!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "Copy Constructor Called!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
    std::cout << "Copy assignment operator called!" << std::endl;
    if (this != &obj)
    {

        name = obj.name;
        hitPoints = obj.hitPoints;
        energyPoints = obj.energyPoints;
        attackdamage = obj.attackdamage;
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (hitPoints > 0 && energyPoints > 0)
    {
        std::cout << "ScavTrap " << name << " attacks " << target 
        << " causing: " << attackdamage << " Points of damage" << std::endl;
    }
    else
        std::cout << "ScavTrap " << name << " has no energy or Hit Points left!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode!" << std::endl;
}
