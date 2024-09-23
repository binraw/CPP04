#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include "Brain.hpp"

class Cat : public Animal
{   
public:
    Cat();
    Cat(const Cat &other);
    Cat &operator=(const Cat &other);
    void makeSound(void) const;
    ~Cat();
    Brain* getBrain(void);
private:
    Brain *brain;
};

#endif