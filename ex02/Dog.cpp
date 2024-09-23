#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Constructor Dog called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Destructor Dog called" << std::endl;
    delete brain;
}

Dog::Dog(const Dog &other)
{
    std::cout << "Copy constructor Dog called" << std::endl;
    this->type = other.type;
    this->brain = new Brain(*other.brain);
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        delete brain;
        this->type = other.type;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "Wouuuaff Wouaaff Woaf" << std::endl;
}

Brain* Dog::getBrain(void) const
{
    return this->brain;
}