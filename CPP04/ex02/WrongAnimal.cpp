#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Default WrongAnimal")
{
    std::cout << "WrongAnimal Default Constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "WrongAnimal Copy Constructor Called!" << std::endl;
    *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& content)
{
    std::cout << "WrongAnimal Copy assignment operator Called!" << std::endl;
    if (this != &content)
        type = content.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor Called!" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal Sound!" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return type;
}

void WrongAnimal::setType(std::string const& type)
{
    this->type = type;
}
