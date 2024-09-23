#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Constructor Brain default called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Destructor Brain called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    std::cout << "Copy Brain called" << std::endl;
    *this = other;
}
Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        for(int i = 0; i < 100; i++)
        {
            this->ideas[i] = other.ideas[i];
        }
    }
     return *this;
}

void Brain::setIdea(int nb, std::string value)
{
    if (nb >= 0 && nb <= 100)
        this->ideas[nb] = value;
    else
        std::cout << "bad index idea." << std::endl;
    
}

std::string Brain::getIdea(int nb)
{
    return this->ideas[nb];
}