#include "ClapTrap.hpp"

int main()
{
    ClapTrap Simo("Simo");
    ClapTrap abdo("abdo");

    std::cout << "\n-----|Testing attack|-----\n";
    Simo.attack("Bob");
    abdo.attack("abdo");

    std::cout << "\n-----|Testing takeDamage|-----\n";
    abdo.takeDamage(5);
    Simo.takeDamage(3);

    std::cout << "\n-----|Testing beRepaired|-----\n";
    abdo.beRepaired(4);
    Simo.beRepaired(2);

    std::cout << "\n-----|Testing copy constructor|-----\n";
    ClapTrap CopyOfSimo(Simo);
    CopyOfSimo.attack("abdo");

    std::cout << "\n-----|Testing assignment operator|-----\n";
    ClapTrap Assigned("Temp");
    Assigned = abdo;
    Assigned.attack("Simo");

    return 0;
}
