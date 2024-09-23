#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << " Wrong Constructor Animal default called" << std::endl;
    this->type = "Wrong mammal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << " Wrong Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "Wrong Constructor Animal called" << std::endl;
    this->type = type;
}

WrongAnimal::WrongAnimal(WrongAnimal &other)
{
    std::cout << "Copy Wrong Constructor Animal called" << std::endl;
    *this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
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
    std::cout << "Pouloulou" << std::endl;
}