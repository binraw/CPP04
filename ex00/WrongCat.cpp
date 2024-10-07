#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << GREEEN "Constructor Wrong Cat called" RESET << std::endl;
    this->type = "Wrong Cat";
}

WrongCat::~WrongCat()
{
     std::cout << GREEEN "Destructor Wrong Cat called" RESET << std::endl;
}

WrongCat::WrongCat(WrongCat &other)
{
    std::cout << GREEEN "Copy constructor Wrong Cat called" RESET << std::endl;
    *this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
     std::cout << GREEEN "Copy Wrong Cat assignment operator called" RESET << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

void WrongCat::makeSound(void)
{
    std::cout << GREEEN "Wrong sound cat!" RESET << std::endl;
}