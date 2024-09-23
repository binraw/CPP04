#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Constructor Cat called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Destructor Cat called" << std::endl;
    delete brain;
}

Cat::Cat(const Cat &other)
{
    std::cout << "Copy constructor Cat called" << std::endl;
    this->type = other.type;
    this->brain = new Brain(*other.brain);
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        delete this->brain;
        this->type = other.type;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "Miaaaaaaooooowwwwww" << std::endl;
}

Brain* Cat::getBrain(void)
{
    return this->brain;
}


