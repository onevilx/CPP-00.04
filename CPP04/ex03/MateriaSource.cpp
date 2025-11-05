#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource Default Constructor Called!" << std::endl;
    int i = 0;
    while (i < 4)
    {
        learned[i] = NULL;
        i++;
    }
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    std::cout << "MateriaSource Copy Constructor Called!" << std::endl;
    int i = 0;
    while (i < 4)
    {
        if (other.learned[i])
            learned[i] = other.learned[i]->clone();
        else
            learned[i] = NULL;
        i++;
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    std::cout << "MateriaSource Copy Assignment Operator Called!" << std::endl;
    if (this != &other)
    {
        int i = 0;
        while (i < 4)
        {
            if (learned[i])
            {
                delete learned[i];
                learned[i] = NULL;
            }
            i++;
        }
        int j = 0;
        while (j < 4)
        {
            if (other.learned[j])
                learned[j] = other.learned[j]->clone();
            else
                learned[j] = NULL;
            j++;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource Destructor Called!" << std::endl;
    int i = 0;
    while (i < 4)
    {
        if (learned[i])
        {
            delete learned[i];
            learned[i] = NULL;
        }
        i++;
    }
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
        return ;
    int i = 0;
    while (i < 4)
    {
        if (!learned[i])
        {
            learned[i] = m;
            std::cout << "MateriaSource learned " << m->getType() << std::endl;
            return;
        }
        i++;
    }
    std::cout << "MateriaSource is full!" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    int i = 0;
    while (i < 4)
    {
        if (learned[i] && learned[i]->getType() == type)
            return learned[i]->clone();
        i++;
    }
    std::cout << "Materia of type " << type << " not found!" << std::endl;
    return NULL;
}
