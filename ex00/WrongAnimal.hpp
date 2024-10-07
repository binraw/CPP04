#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#define RED "\033[41m"
#define GREEEN "\033[92m"
#define YELLOW "\033[43m"
#define BLUE "\033[44m"
#define MAGENTA "\033[45m"
#define CYAN "\033[46m"
#define WHITE "\033[37m"
#define BOLD "\033[1m"
#define BLINK "\033[6m"
#define REV "\033[7m"
#define RESET "\033[0m"

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
