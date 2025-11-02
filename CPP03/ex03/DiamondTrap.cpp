#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("_clap_name"), ScavTrap(), FragTrap()
{
    name = "Default!";
    hitPoints = FragTrap::hitPoints;
    energyPoints = ScavTrap::energyPoints;
    attackdamage = FragTrap::attackdamage;

    std::cout << "DiamondTrap Default Constructor called for " << name << "!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string user) : ClapTrap(user + "_clap_name"), ScavTrap(user), FragTrap(user)
{
    name = user;
    hitPoints = FragTrap::hitPoints;
    energyPoints = ScavTrap::energyPoints;
    attackdamage = FragTrap::attackdamage;

    std::cout << "DiamondTrap Parameterized Constructor called for " << name << "!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) : ClapTrap(obj), ScavTrap(obj), FragTrap(obj)
{
    std::cout << "DiamondTrap Copy Constructor Called!" << std::endl;
    *this = obj;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    std::cout << "Copy assignment operator called!" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackdamage = other.attackdamage;
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called!" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am DiamondTrap " << name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}
