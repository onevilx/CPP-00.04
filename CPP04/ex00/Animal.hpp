#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal 
{
    protected:
    std::string type;

    public:
    Animal();
    Animal(const Animal& other);
    Animal &operator=(const Animal& content);
    virtual ~Animal();
    
    virtual void makeSound() const;
    std::string getType( void ) const;
    void        setType( std::string const &type );
};

#endif