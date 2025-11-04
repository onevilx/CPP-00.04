#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
    std::cout << "Dog Default Constructor Called!" << std::endl;
    brainy = new Brain();
    type = "Dog";
}

Dog::Dog(const Dog& other) : AAnimal(other)
{
    std::cout << "Dog Copy Constructor Called!" << std::endl;
    brainy = new Brain(*other.brainy);
}

Dog& Dog::operator=(const Dog& content)
{
    std::cout << "Dog Copy assignment operator Called!" << std::endl;
    if (this != &content)
    {
        AAnimal::operator=(content);
        if(brainy)
            delete brainy;
        brainy = new Brain(*content.brainy);
    }
    return *this;
}

Dog::~Dog()
{
    delete brainy;
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