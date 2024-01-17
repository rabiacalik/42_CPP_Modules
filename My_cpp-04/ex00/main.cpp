#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// Makefile a bi bak !!!
int main()
{
    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "--------------" << std::endl;
    std::cout << "animal getType = " << animal->getType() << std::endl;
    std::cout << "cat getType = " << cat->getType() << std::endl;
    std::cout << "dog getType = " << dog->getType() << std::endl;

    std::cout << "--------------" << std::endl;
    animal->makeSound();
    cat->makeSound();
    dog->makeSound();

    std::cout << "--------------" << std::endl;
    const WrongAnimal* wrong_animal = new WrongAnimal();
    const WrongAnimal* wrong_cat = new WrongCat();

    std::cout << "--------------" << std::endl;
    wrong_animal->makeSound();
    wrong_cat->makeSound();
    
    std::cout << "--------------" << std::endl;
    delete animal;
	delete dog;
	delete cat;
	delete wrong_cat;
	delete wrong_animal;

// neden destroy ederken tureyen ve turetilmiş sınıfların destructerları 
// calısıyor !!!

}