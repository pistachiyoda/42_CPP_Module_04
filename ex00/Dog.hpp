#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(std::string type);
    ~Dog();
    Dog(const Dog &dog);
    Dog &operator=(const Dog &dog);
    void makeSound() const;
};

#endif
