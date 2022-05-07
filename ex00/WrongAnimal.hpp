#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#define RESET "\033[0m"
#define RED "\033[31m"   /* Red */
#define GREEN "\033[32m" /* Green */
#define YELLOW "\033[33m" /* Yellow */
#include <iostream>

class WrongAnimal
{
protected:
    std::string type_;
public:
    WrongAnimal();
    WrongAnimal(std::string type);
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal &animal);
    WrongAnimal &operator=(const WrongAnimal &animal);
    void makeSound() const;
    std::string getType() const;
};

#endif
