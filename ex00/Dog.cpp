#include "Dog.hpp"

Dog::Dog()
{
    std::cout << BOLD "Constructor Dog called" RESET << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Destructor Dog called" << std::endl;
}

Dog::Dog(Dog &other)
{
    std::cout << "Copy constructor Dog called" << std::endl;
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
    std::cout << BLUE "Wouuuaff Wouaaff Woaf" RESET << std::endl;
}