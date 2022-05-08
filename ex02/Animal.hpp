#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#define RESET "\033[0m"
#define RED "\033[31m"   /* Red */
#define GREEN "\033[32m" /* Green */
#define YELLOW "\033[33m" /* Yellow */

#include <iostream>

class Animal
{
protected:
    std::string type_;
public:
    Animal();
    Animal(std::string type);
    virtual ~Animal();
    Animal(const Animal &animal);
    Animal &operator=(const Animal &animal);
    virtual void makeSound() const = 0;
    std::string getType() const;
};

#endif
