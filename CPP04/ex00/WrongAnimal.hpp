#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& other);
    WrongAnimal& operator=(const WrongAnimal& content);
    ~WrongAnimal();

    void makeSound() const;
    std::string getType(void) const;
    void setType(std::string const& type);
};

#endif
