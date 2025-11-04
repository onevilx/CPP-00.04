#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    system("leaks AbstractClass");
    
    std::cout << "\n-----Dynamic Polymorphism Test Subject-----\n" << std::endl;
    {
        const AAnimal* j = new Dog();
        const AAnimal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        j->makeSound();
        delete i;
        delete j;
    }
    std::cout << "\n-----Dynamic Polymorphism Test-----\n" << std::endl;
    {
        AAnimal *obouftou = new Cat();
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
    
    std::cout << "\n-----Brain Deep Copy Test-----\n" << std::endl;
    {
        std::cout << "--- Dog Deep Copy ---" << std::endl;
        {
            Dog dog1;
            dog1.setType("Dog1");

            Dog dog2 = dog1;
            dog2.setType("Dog2");

            std::cout << "dog1 type: " << dog1.getType() << std::endl;
            std::cout << "dog2 type: " << dog2.getType() << std::endl;

            dog1.makeSound();
            dog2.makeSound();
        }

        std::cout << "--- Cat Deep Copy ---" << std::endl;
        {
            Cat cat1;
            cat1.setType("Cat1");

            Cat cat2 = cat1;
            cat2.setType("Cat2");

            std::cout << "cat1 type: " << cat1.getType() << std::endl;
            std::cout << "cat2 type: " << cat2.getType() << std::endl;

            cat1.makeSound();
            cat2.makeSound();
        }
    }

    std::cout << "\n-----> End of Tests <-----\n" << std::endl;
    return 0;
}