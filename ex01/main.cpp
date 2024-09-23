#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* a = new Dog();
const Animal* b = new Cat();
std::cout << a->getType() << " " << std::endl;
std::cout << b->getType() << " " << std::endl;
a->makeSound(); 
b->makeSound();
delete a;
delete b;
const Animal* j = new Dog();
const Animal* i = new Cat();
Dog bobby;
bobby.getBrain()->setIdea(0, "la vie est dure");
std::cout << bobby.getBrain()->getIdea(0) << std::endl;
Dog ours;
ours = bobby;
std::cout << ours.getBrain()->getIdea(0) << std::endl;
delete j;
delete i;
return 0;
}