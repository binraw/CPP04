#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Constructor Animal default called" << std::endl;
    this->type = "mammal";
}

Animal::~Animal()
{
    std::cout << "Destructor called" << std::endl;
}



Animal::Animal(std::string type)
{
    std::cout << "Constructor Animal called" << std::endl;
    this->type = type;
}
Animal::Animal(const Animal &other)
{
    std::cout << "Copy Constructor Animal called" << std::endl;
    *this = other;

}

Animal &Animal::operator=(const Animal &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

std::string Animal::getType(void) const
{
    return this->type;
}

void Animal::makeSound(void) const
{
    std::cout << "Wesh la zone" << std::endl;
}