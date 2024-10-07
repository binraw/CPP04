#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << MAGENTA "Wrong Constructor Animal default called" RESET << std::endl;
    this->type = "Wrong mammal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << MAGENTA "Wrong Destructor called" RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << MAGENTA "Wrong Constructor Animal called" RESET << std::endl;
    this->type = type;
}

WrongAnimal::WrongAnimal(WrongAnimal &other)
{
    std::cout << MAGENTA "Copy Wrong Constructor Animal called" RESET << std::endl;
    *this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << MAGENTA "Copy assignment operator called" RESET << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}
std::string WrongAnimal::getType(void)
{
    return this->type;
}
void WrongAnimal::makeSound(void)
{
    std::cout << MAGENTA "Pouloulou" RESET << std::endl;
}