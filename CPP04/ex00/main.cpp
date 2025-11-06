#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "\n-----Dynamic Polymorphism Test Subject-----\n" << std::endl;
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        j->makeSound();
        meta->makeSound();
        delete meta;
        delete i;
        delete j;
    }
    std::cout << "\n-----Dynamic Polymorphism Test-----\n" << std::endl;
    {
        Animal *obouftou = new Cat();
        obouftou->makeSound();
        delete obouftou;
        obouftou = new Dog();
        obouftou->makeSound();
        delete obouftou;
    }
    std::cout << "\n-----Stack Object Test-----\n" << std::endl;
    {
        Dog dazai;
        dazai.makeSound();
        Cat ot7man;
        ot7man.makeSound();
    }
    std::cout << "\n-----WrongAnimal Test-----\n" << std::endl;
    {
        WrongAnimal* a = new WrongCat();
        a->makeSound();
        delete a;
    }
    return 0;
}