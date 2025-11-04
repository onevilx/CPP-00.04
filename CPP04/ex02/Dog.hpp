#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    private:
    Brain   *brainy;

    public:
    Dog();
    Dog(const Dog& other);
    Dog &operator=(const Dog& content);
    virtual ~Dog();
    
    void makeSound() const;
    
    std::string getType( void ) const;
    void        setType( std::string const &type );
};

#endif