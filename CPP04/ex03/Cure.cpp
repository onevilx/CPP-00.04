#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure Default Constructor Called!" << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other)
{
    std::cout << "Cure Copy Constructor Called!" << std::endl;
}

Cure &Cure::operator=(const Cure& other)
{
    std::cout << "Cure Copy assignment operator Called!" << std::endl;
    (void)other;
    return *this;
}

Cure::~Cure()
{
    std::cout << "Cure Destructor Called!" << std::endl;
}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
