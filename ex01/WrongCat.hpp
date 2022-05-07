#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(std::string type);
    ~WrongCat();
    WrongCat(const WrongCat &cat);
    WrongCat &operator=(const WrongCat &cat);
    void makeSound() const;
};

#endif
