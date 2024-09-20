#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{   
public:
    Cat();
    Cat(Cat &other);
    Cat &operator=(const Cat &other);
    void makeSound(void) const;
    ~Cat();
};

#endif