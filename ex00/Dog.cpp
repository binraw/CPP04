#include "Dog.hpp"

Dog::Dog()
{
    std::cout << YELLOW "Constructor Dog called" RESET << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << YELLOW "Destructor Dog called" RESET << std::endl;
}

Dog::Dog(Dog &other)
{
    std::cout << YELLOW "Copy constructor Dog called" RESET << std::endl;
    *this = other;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << YELLOW "Wouuuaff Wouaaff Woaf" RESET << std::endl;
}