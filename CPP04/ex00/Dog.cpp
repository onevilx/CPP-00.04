#include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "Dog";
    std::cout << "Dog Default Constructor Called!" << std::endl;
}

Dog::Dog(const Dog& other)
{
    std::cout << "Dog Copy Constructor Called!" << std::endl;
    *this = other;
}

Dog& Dog::operator=(const Dog& content)
{
    std::cout << "Dog Copy assignment operator Called!" << std::endl;
    if (this != &content)
        type = content.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog Desctructor Called!" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof Woof!" << std::endl;
}

std::string Dog::getType( void ) const { return type; }

void Dog::setType( std::string const &type )
{
    this->type = type;
}