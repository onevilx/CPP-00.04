#include "AMateria.hpp"

AMateria::AMateria() : name("Default")
{
    std::cout << "AMateria Default Constructor Called!" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
    std::cout << "AMateria Parameterized Constructor Called for: " << type << std::endl;
}

AMateria::AMateria(const AMateria& obj)
{
    std::cout << "AMateria Copy Constructor Called!" << std::endl;
    *this = obj;
}

AMateria& AMateria::operator=(const AMateria &content)
{
    std::cout << "AMateria Copy assignment Constructor Called!" << std::endl;
    if (this != &content)
        name = content.name;
    return *this;
}

AMateria::~AMateria()
{
    std::cout << "AMateria Destructor Called!" << std::endl;
}