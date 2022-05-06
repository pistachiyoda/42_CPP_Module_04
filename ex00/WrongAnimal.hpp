#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

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
