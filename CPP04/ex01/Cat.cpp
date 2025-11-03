#include "Cat.hpp"

Cat::Cat() : Animal()
{
    type = "Cat";
    std::cout << "Cat Default Constructor Called!" << std::endl;
}

Cat::Cat(const Cat& other)
{
    std::cout << "Cat Copy Constructor Called!" << std::endl;
    *this = other;
}

Cat& Cat::operator=(const Cat& content)
{
    std::cout << "Cat Copy assignment operator Called!" << std::endl;
    if (this != &content)
        type = content.type;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat Desctructor Called!" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow, NIG..!" << std::endl;
}

std::string Cat::getType( void ) const { return type; }

void Cat::setType( std::string const &type )
{
    this->type = type;
}