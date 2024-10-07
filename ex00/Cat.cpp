#include "Cat.hpp"

Cat::Cat()
{
    std::cout << BOLD "Constructor Cat called" RESET << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout <<  BOLD "Destructor Cat called" RESET << std::endl;
}

Cat::Cat(Cat &other)
{
    std::cout << BOLD "Copy constructor Cat called" RESET << std::endl;
    *this = other;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << BOLD "Copy assignment operator called" RESET << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << BOLD REV "Miaaaaaaooooowwwwww" RESET << std::endl;
}


