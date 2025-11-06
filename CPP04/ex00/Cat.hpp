#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
    Cat();
    Cat(const Cat& other);
    Cat &operator=(const Cat& content);
    ~Cat();
    void makeSound() const;
    std::string getType( void ) const;
    void        setType( std::string const &type );
};

#endif