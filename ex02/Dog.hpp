#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *brain_;
public:
    Dog();
    Dog(std::string type);
    ~Dog();
    Dog(const Dog &dog);
    Dog &operator=(const Dog &dog);
    void makeSound() const;
    void getIdea(int i) const;
    void setIdea(int i, std::string idea);
};

#endif
