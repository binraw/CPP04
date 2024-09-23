#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

//Animal a; class not instantiable
Dog bobby;
bobby.getBrain()->setIdea(0, "la vie est dure");
std::cout << bobby.getBrain()->getIdea(0) << std::endl;
Dog ours;
ours = bobby;
std::cout << ours.getBrain()->getIdea(0) << std::endl;

return 0;
}