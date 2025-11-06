#include "Character.hpp"

Character::Character() : name("Default"), DroppedCount(0)
{
    std::cout << "Character Default Constructor Called!" << std::endl;
    int i = 0;
    while (i < 4)
    {
        inventory[i] = NULL;
        Dropped[i] = NULL;
        i++;
    }
}

Character::Character(std::string const &name) : name(name), DroppedCount(0)
{
    std::cout << "Character Constructor Called for " << name << std::endl;
    int i = 0;
    while (i < 4)
    {
        inventory[i] = NULL;
        Dropped[i] = NULL;
        i++;
    }
}

Character::Character(const Character &other)
{
    std::cout << "Character Copy Constructor Called!" << std::endl;
    name = other.name;
    DroppedCount = other.DroppedCount;

    int i = 0;
    while (i < 4)
    {
        if (other.inventory[i])
            inventory[i] = other.inventory[i]->clone();
        else
            inventory[i] = NULL;
        i++;
    }

    int j = 0;
    while (j < 4)
    {
        if (j < other.DroppedCount && other.Dropped[j])
            Dropped[j] = other.Dropped[j]->clone();
        else
            Dropped[j] = NULL;
        j++;
    }
}

Character &Character::operator=(const Character &other)
{
    std::cout << "Character Copy Assignment Operator Called!" << std::endl;
    if (this != &other)
    {
        name = other.name;

        int i = 0;
        while (i < 4)
        {
            if (inventory[i])
            {
                delete inventory[i];
                inventory[i] = NULL;
            }
            if (other.inventory[i])
                inventory[i] = other.inventory[i]->clone();
            i++;
        }

        int j = 0;
        while (j < DroppedCount)
        {
            if (Dropped[j])
            {
                delete Dropped[j];
                Dropped[j] = NULL;
            }
            j++;
        }

        DroppedCount = other.DroppedCount;
        j = 0;
        while (j < 4)
        {
            if (j < other.DroppedCount && other.Dropped[j])
                Dropped[j] = other.Dropped[j]->clone();
            else
                Dropped[j] = NULL;
            j++;
        }
    }
    return *this;
}

Character::~Character()
{
    std::cout << "Character Destructor Called for " << name << std::endl;
    int i = 0;
    while (i < 4)
    {
        if (inventory[i])
        {
            delete inventory[i];
            inventory[i] = NULL;
        }
        i++;
    }

    int j = 0;
    while (j < DroppedCount)
    {
        if (Dropped[j])
        {
            delete Dropped[j];
            Dropped[j] = NULL;
        }
        j++;
    }
}

std::string const &Character::getName() const
{
    return name;
}

void Character::equip(AMateria *m)
{
    if (!m)
        return;

    int i = 0;
    while (i < 4)
    {
        if (!inventory[i])
        {
            inventory[i] = m;
            std::cout << name << " equipped " << m->getType()
                      << " in slot " << i << std::endl;
            return;
        }
        i++;
    }
    std::cout << name << "'s inventory is full!" << std::endl;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4)
        return;

    if (inventory[idx])
    {
        if (DroppedCount < 4)
        {
            Dropped[DroppedCount] = inventory[idx];
            DroppedCount++;
            std::cout << name << " unequipped " << inventory[idx]->getType()
                      << " from slot " << idx
                      << " (saved in Dropped[" << DroppedCount - 1 << "])"
                      << std::endl;
        }
        else
        {
            std::cout << name << " unequipped " << inventory[idx]->getType()
                      << " from slot " << idx
                      << " but Dropped is full"
                      << std::endl;
        }
        inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx >= 4)
        return;
    if (inventory[idx])
        inventory[idx]->use(target);
}
