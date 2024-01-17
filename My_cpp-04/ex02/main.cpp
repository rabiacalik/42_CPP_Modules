#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <cstdlib>

int main()
{
    const AAnimal* karabas = new Dog();
    const AAnimal* pamuk = new Cat();

    std::cout << std::endl;

    delete karabas;
    delete pamuk;

    std::cout << "-------------------" << std::endl;

    const AAnimal* animals[10];
    for( int i = 0; i < 10; i++){
        if(i % 2)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
        std::cout << "----\n"; 
    }

    std::cout << std::endl;

    for( int i = 0; i < 10; i++){
        std::cout << std::endl;
        std::cout << "Animal _type : " << animals[i]->getType() << std::endl;
        animals[i]->makeSound();
        std::cout << std::endl; 
    }
    
    for(int i = 0; i < 10; i++){
        delete(animals[i]);
    }

    std::cout << "-----------cesur created--------------" << std::endl;

    Dog* cesur = new Dog();

    std::cout << "---------cesur add ideas--------------" << std::endl;

    cesur->setIdea(0, "I'm hungry");
    cesur->setIdea(1, "I am thirsty");
    cesur->setIdea(101, "to go to the park"); // 100 gecer Brain hata mesajı yazar
    cesur->setIdea(70, "I am a good dog");

    std::cout << "---------gofret created---------------" << std::endl;

    Dog* gofret = new Dog(*cesur);
    std::cout << std::endl;


    std::cout << "Cesur " << cesur->getType() << " a has the following ideas : \n";
    cesur->getIdeas();
    delete(cesur);

    std::cout << "Gofret " << gofret->getType() << " a has the following ideas : \n";
    gofret->getIdeas();
    delete(gofret);

    //macde bakılabiliyormu denenecek !!!
    //system("leaks ex01");

    //WrongAnimallar için de testler yaz !!!

    return (0);
}