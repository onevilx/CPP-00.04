#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : virtual public Animal
{
    public:
    Dog();
    Dog(const Dog& other);
    Dog &operator=(const Dog& content);
    ~Dog();
    void makeSound() const;
    std::string getType( void ) const;
    void        setType( std::string const &type );
};

#endif