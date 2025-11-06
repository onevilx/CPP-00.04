#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
    std::cout << "\n-----main test from subject-----\n" << std::endl;
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
    }
    std::cout << "\n-----other test of mine-----\n" << std::endl;
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());

        ICharacter* hero = new Character("Hero");
        ICharacter* enemy = new Character("Enemy");

        AMateria* ice1 = src->createMateria("ice");
        AMateria* cure1 = src->createMateria("cure");
        AMateria* ice2 = src->createMateria("ice");
        AMateria* cure2 = src->createMateria("cure");

        hero->equip(ice1);
        hero->equip(cure1);
        hero->equip(ice2);
        hero->equip(cure2);

        std::cout << "\n--- Trying to equip 5th materia ---" << std::endl;
        AMateria* extra = src->createMateria("ice");
        hero->equip(extra);
        delete extra;          

        std::cout << "\n--- Using all equipped materias ---" << std::endl;
        hero->use(0, *enemy);
        hero->use(1, *enemy);
        hero->use(2, *enemy);
        hero->use(3, *enemy);

        std::cout << "\n--- Trying invalid indexes ---" << std::endl;
        hero->use(-1, *enemy);
        hero->use(4, *enemy);

        std::cout << "\n--- Unequip slot 2 and test again ---" << std::endl;
        hero->unequip(2);
        hero->use(2, *enemy);

        std::cout << "\n--- Deep copy test ---" << std::endl;
        Character copyHero = *(Character*)hero;
        copyHero.use(0, *enemy);
        copyHero.use(1, *enemy);

        delete enemy;
        delete hero;
        delete src;

        std::cout << "\n--- Checking if copyHero still works after original deleted ---" << std::endl;
        ICharacter* dummyEnemy = new Character("Dummy");
        copyHero.use(0, *dummyEnemy);
        copyHero.use(1, *dummyEnemy);
        delete dummyEnemy; 
    }
    return 0;
}