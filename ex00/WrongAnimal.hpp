#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
private:
    /* data */
public:
    WrongAnimal(/* args */);
    ~WrongAnimal();
    WrongAnimal(WrongAnimal &other);
    WrongAnimal &operator=(const WrongAnimal &other);
    void getType(void);
    void makeSound(void);
};

