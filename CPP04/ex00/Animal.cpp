#include "Animal.hpp"

Animal::Animal() : type("Default Animal")
{
    std::cout << "Animal Default Constructor called!" << std::endl;
}

Animal::Animal(const Animal& other)
{
    std::cout << "Animal Copy Constructor Called" << std::endl;
    *this = other;
}

Animal& Animal::operator=(const Animal& content)
{
    std::cout << "Animal Copy assignment operator Called!" << std::endl;
    if (this != &content)
        type = content.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor Called!" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal Sound!" << std::endl;
}

std::string Animal::getType( void ) const { return type; }

void Animal::setType( std::string const &type )
{
    this->type = type;
}