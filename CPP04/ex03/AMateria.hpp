#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria 
{
    protected:
    std::string name;
    
    public:
    AMateria();
    AMateria(std::string const &type);
    AMateria(const AMateria& obj);
    AMateria &operator=(const AMateria &content);
    ~AMateria();

    std::string const & getType() const;

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif