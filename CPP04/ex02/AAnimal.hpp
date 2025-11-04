#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal 
{
    protected:
    std::string type;

    public:
    AAnimal();
    AAnimal(const AAnimal& other);
    AAnimal &operator=(const AAnimal& content);
    virtual ~AAnimal();
    
    virtual void makeSound() const = 0;
    
    std::string getType( void ) const;
    void        setType( std::string const &type );
};

#endif