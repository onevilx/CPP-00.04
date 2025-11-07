#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default!"), hitPoints(10), energyPoints(10), attackdamage(0)
{
    std::cout << "Default Constructor Called!" << std::endl;
}

ClapTrap::ClapTrap(std::string user) : name(user), hitPoints(10), energyPoints(10), attackdamage(0)
{
    std::cout << "Parameterized Constructor called for " << name << "!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "Copy constructor called!" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Copy assignment operator called!" << std::endl;
    if (this != &other)
    {

        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackdamage = other.attackdamage;
    }
    return *this;
}

ClapTrap::~ClapTrap() 
{
    std::cout << "Destructor called!" << std::endl;
}

std::string ClapTrap::getter_name(void) const
{
    return name;
}

void ClapTrap::setter_name(std::string const &att)
{
    name = att;
}

void ClapTrap::attack(const std::string& target) 
{
    if (hitPoints > 0 && energyPoints > 0)
    {
        std::cout << "ClapTrap " << name << " attacks " << target 
        << " causing: " << attackdamage << " Points of damage" << std::endl;
        energyPoints--;
    }
    else
        std::cout << "ClapTrap " << name << " has no energy or Hit Points left!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints == 0)
    {
        std::cout << name << " is Already dead!" << std::endl;
        return ;
    }
    if (amount > hitPoints)
        amount = hitPoints;
        
    hitPoints -= amount;

    std::cout << name << " takes " << amount << " points of damage, remains is: " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energyPoints == 0 || hitPoints == 0)
    {
        std::cout << name << " cannot repair, (no energy or already dead!)." << std::endl;
        return ;
    }
    hitPoints += amount;
    energyPoints--;
    std::cout << name << " is repaired by: " << amount << " points, current hp is: " << hitPoints << std::endl;
}
