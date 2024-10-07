#include "Cat.hpp"

Cat::Cat()
{
    std::cout << BOLD "Constructor Cat called" RESET << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Destructor Cat called" << std::endl;
}

Cat::Cat(Cat &other)
{
    std::cout << "Copy constructor Cat called" << std::endl;
    *this = other;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << REV "Miaaaaaaooooowwwwww" RESET << std::endl;
}


