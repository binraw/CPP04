#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(std::string type);
    WrongAnimal(WrongAnimal &other);
    WrongAnimal &operator=(const WrongAnimal &other);
    std::string getType(void);
    void makeSound(void);
};
#endif
