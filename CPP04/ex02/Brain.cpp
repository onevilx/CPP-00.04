#include "Brain.hpp"

Brain::Brain()
{
    int i = 0;
    while (i < 100)
    {
        ideas[i] = "Default idea";
        i++;
    }
    std::cout << "Brain Default Constructor Called!" << std::endl;
}

Brain::Brain(const Brain& obj)
{
    std::cout << "Brain Copy Constructor Called!" << std::endl;
    int i = 0;
    while (i < 100)
    {
        ideas[i] = obj.ideas[i];
        i++;
    }
}

Brain& Brain::operator=(const Brain& content)
{
    std::cout << "Brain Copy assignment operator Called!" << std::endl;
    if (this != &content)
    {
        int i = 0;
        while (i < 100)
        {
            ideas[i] = content.ideas[i];
            i++;
        }
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor Called!" << std::endl;
}

