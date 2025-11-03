#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat Default Constructor Called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
    std::cout << "WrongCat Copy Constructor Called!" << std::endl;
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& content)
{
    std::cout << "WrongCat Copy assignment operator Called!" << std::endl;
    if (this != &content)
        type = content.type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor Called!" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow Meow! (WrongCat Sound!)" << std::endl;
}
