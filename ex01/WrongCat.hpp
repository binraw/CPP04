#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
private:
    /* data */
public:
    WrongCat();
    WrongCat(WrongCat &other);
    WrongCat &operator=(const WrongCat &other);
    void makeSound(void);
    ~WrongCat();
};



#endif