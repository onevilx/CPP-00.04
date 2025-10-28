#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string user) : name(user) 
{
    std::cout << "Default paramitrized Constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;    
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Copy assignement operator called!" << std::endl;
    if (this != &other)
        this->name = other.getter_att();
    return *this;
}

ClapTrap::~ClapTrap() 
{
    std::cout << "Destructor called" << std::endl;
}

std::string ClapTrap::getter_att(void) const
{
    return (this->name);
}

void ClapTrap::setter_att(std::string const &att)
{
    this->name = att;
}

void ClapTrap::attack(const std::string& target) {}
void ClapTrap::takeDamage(unsigned int amount) {}
void ClapTrap::beRepaired(unsigned int amount) {}

