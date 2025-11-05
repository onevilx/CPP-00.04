#include "AMateria.hpp"

AMateria::AMateria() : _type("Default")
{
    std::cout << "AMateria Default Constructor Called!" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << "AMateria constructed with type: " << type << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
    std::cout << "AMateria Copy Constructor Called!" << std::endl;
    *this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
    std::cout << "AMateria Copy assignment operator Called!" << std::endl;
    (void) other;
    return *this;
}

AMateria::~AMateria()
{
    std::cout << "AMateria Destructor destroyed!" << std::endl;
}

std::string const &AMateria::getType() const 
{
    return _type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* uses " << _type << " on " << target.getName() << " *" << std::endl;
}
