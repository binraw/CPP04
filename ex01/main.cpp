#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
Animal meta;
const Animal* met = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
WrongAnimal* wrong = new WrongCat();
Dog ko;
Cat fusee;
WrongCat boss;
std::cout << j->getType() << " " << std::endl;
std::cout << ko.getType() << " " << std::endl;
std::cout << fusee.getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << boss.getType() << " " << std::endl;
std::cout << wrong->getType() << " " << std::endl;
i->makeSound(); 
j->makeSound();
ko.makeSound();
meta.makeSound();
met->getType();
fusee.makeSound();
boss.makeSound();
wrong->makeSound();

delete j;
delete i;
delete met;
delete wrong;
return 0;
}