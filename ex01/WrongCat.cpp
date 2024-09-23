#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Constructor Wrong Cat called" << std::endl;
    this->type = "Wrong Cat";
}

WrongCat::~WrongCat()
{
     std::cout << "Destructor Wrong Cat called" << std::endl;
}

WrongCat::WrongCat(WrongCat &other)
{
    std::cout << "Copy constructor Wrong Cat called" << std::endl;
    *this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

void WrongCat::makeSound(void)
{
    std::cout << "Wrong sound cat!" << std::endl;
}