#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "iostream"
#define RED "\033[41m"
#define GREEN "\033[42m"
#define YELLOW "\033[43m"
#define BLUE "\033[44m"
#define MAGENTA "\033[45m"
#define CYAN "\033[46m"
#define WHITE "\033[37m"
#define BOLD "\033[1m"
#define BLINK "\033[6m"
#define REV "\033[7m"
#define RESET "\033[0m"
class Animal
{
protected:
    std::string type;

public:
    Animal();
    Animal(std::string type);
    Animal(Animal &other);
    Animal &operator=(const Animal &other);
    virtual ~Animal();
    std::string getType(void) const;
    virtual void makeSound(void) const;
};




#endif