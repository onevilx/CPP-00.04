#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Default Animal")
{
    std::cout << "Animal Default Constructor called!" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
    std::cout << "Animal Copy Constructor Called" << std::endl;
    *this = other;
}

AAnimal& AAnimal::operator=(const AAnimal& content)
{
    std::cout << "Animal Copy assignment operator Called!" << std::endl;
    if (this != &content)
        type = content.type;
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "Animal Destructor Called!" << std::endl;
}

void AAnimal::makeSound() const
{
    std::cout << "Animal Sound!" << std::endl;
}

std::string AAnimal::getType( void ) const { return type; }

void AAnimal::setType( std::string const &type )
{
    this->type = type;
}