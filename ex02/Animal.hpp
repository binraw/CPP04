#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "iostream"

class Animal
{
protected:
    std::string type;
    Animal();
    Animal(std::string type);
public:
    Animal(const Animal &other);
    Animal &operator=(const Animal &other);
    virtual ~Animal();
    std::string getType(void) const;
    virtual void makeSound(void) const;
};




#endif