#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    private:
    Brain   *brainxx;

    public:
    Cat();
    Cat(const Cat& other);
    Cat &operator=(const Cat& content);
    virtual ~Cat();
    
    void makeSound() const;
    
    std::string getType( void ) const;
    void        setType( std::string const &type );
};

#endif