#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
Animal meta;
const Animal* met = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
Dog ko;
Cat fusee;
std::cout << j->getType() << " " << std::endl;
std::cout << ko.getType() << " " << std::endl;
std::cout << fusee.getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); 
j->makeSound();
ko.makeSound();
meta.makeSound();
met->getType();
fusee.makeSound();

delete j;
delete i;
delete met;
return 0;
}