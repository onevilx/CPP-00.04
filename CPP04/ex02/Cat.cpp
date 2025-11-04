#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
    std::cout << "Cat Default Constructor Called!" << std::endl;
    brainxx = new Brain();
    type = "Cat";
}

Cat::Cat(const Cat& other) : AAnimal(other)
{
    std::cout << "Cat Copy Constructor Called!" << std::endl;
    brainxx = new Brain(*other.brainxx);
}

Cat& Cat::operator=(const Cat& content)
{
    std::cout << "Cat Copy assignment operator Called!" << std::endl;
    if (this != &content)
    {
        AAnimal::operator=(content);
        if (brainxx)
            delete brainxx;
        brainxx = new Brain(*content.brainxx);
    }
    return *this;
}

Cat::~Cat()
{
    delete brainxx;
    std::cout << "Cat Desctructor Called!" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow !" << std::endl;
}

std::string Cat::getType( void ) const { return type; }

void Cat::setType( std::string const &type )
{
    this->type = type;
}