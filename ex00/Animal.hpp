#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    std::string type_;
public:
    Animal();
    Animal(std::string type);
    ~Animal();
    Animal(const Animal &animal);
    Animal &operator=(const Animal &animal);
    virtual void makeSound() const;
    std::string getType() const;
};

#endif
