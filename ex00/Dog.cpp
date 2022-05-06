#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "=== Dog default constructor called. ===" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout << "=== Dog constructor with arg called. ===" << std::endl;
}

Dog::~Dog()
{
    std::cout << "=== Dog destructor called. ===" << std::endl;
}

Dog::Dog(const Dog &dog)
{
    std::cout << "=== Dog copy constructor called. ===" << std::endl;
    *this = dog;
}

Dog &Dog::operator=(const Dog &dog)
{
    std::cout << "=== Dog Copy assignment operator called ===" << std::endl;
    type_ = dog.getType(); 
    return *this;

}

void Dog::makeSound() const
{
    std::cout << "WanWanWan!" << std::endl;
}
