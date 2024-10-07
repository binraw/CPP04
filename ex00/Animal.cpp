#include "Animal.hpp"

Animal::Animal()
{
    std::cout  << GREEN "Constructor Animal default called" RESET << std::endl;
    this->type = "mammal";
}

Animal::~Animal()
{
    std::cout << RED "Destructor called" RESET << std::endl;
}



Animal::Animal(std::string type)
{
    std::cout << YELLOW "Constructor Animal called" RESET << std::endl;
    this->type = type;
}
Animal::Animal(Animal &other)
{
    std::cout << MAGENTA "Copy Constructor Animal called" RESET << std::endl;
    *this = other;

}
Animal &Animal::operator=(const Animal &other)
{
    std::cout << BLUE "Copy assignment operator called" RESET << std::endl;
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
    std::cout << CYAN "Wesh la zone" RESET << std::endl;
}