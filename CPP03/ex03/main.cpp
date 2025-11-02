#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "--- Creating ClapTraps ---" << std::endl;
    ClapTrap simo("Simo");
    ClapTrap abdo("Abdo");

    std::cout << "\n--- Testing ClapTrap attack ---" << std::endl;
    simo.attack("Bob");
    abdo.attack("Simo");

    std::cout << "\n--- Testing ClapTrap takeDamage ---" << std::endl;
    abdo.takeDamage(4);
    simo.takeDamage(2);

    std::cout << "\n--- Testing ClapTrap beRepaired ---" << std::endl;
    abdo.beRepaired(4);
    simo.beRepaired(2);

    std::cout << "\n--- Testing ClapTrap copy constructor ---" << std::endl;
    ClapTrap copySimo(simo);
    copySimo.attack("Abdo");

    std::cout << "\n--- Testing ClapTrap assignment operator ---" << std::endl;
    ClapTrap assigned("Temp");
    assigned = abdo;
    assigned.attack("Simo");

    std::cout << "\n--- Creating ScavTraps ---" << std::endl;
    ScavTrap scav("Scavy");
    ScavTrap defaultScav;

    std::cout << "\n--- Testing ScavTrap attack (overridden) ---" << std::endl;
    scav.attack("Intruder");
    defaultScav.attack("Intruder");

    std::cout << "\n--- Testing ScavTrap guardGate ---" << std::endl;
    scav.guardGate();
    defaultScav.guardGate();

    std::cout << "\n--- Testing ScavTrap copy constructor ---" << std::endl;
    ScavTrap copyScav(scav);
    copyScav.attack("Enemy");

    std::cout << "\n--- Testing ScavTrap assignment operator ---" << std::endl;
    ScavTrap assignedScav;
    assignedScav = scav;
    assignedScav.attack("Enemy");

    std::cout << "\n--- Creating FragTraps ---" << std::endl;
    FragTrap frag("Fraggyyy");
    FragTrap defaultFrag;

    std::cout << "\n--- Testing FragTrap highFivesGuys ---" << std::endl;
    frag.highFivesGuys();
    defaultFrag.highFivesGuys();

    std::cout << "\n--- Testing FragTrap copy constructor ---" << std::endl;
    FragTrap copyFrag(frag);
    copyFrag.attack("Enemy");

    std::cout << "\n--- Testing FragTrap assignment operator ---" << std::endl;
    FragTrap assignedFrag;
    assignedFrag = frag;
    assignedFrag.attack("Enemy");

    std::cout << "\n--- End of program ---" << std::endl;
    return 0;
}
