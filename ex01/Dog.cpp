#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << GREEN << "=== Dog default constructor called. ===" << RESET << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout << GREEN << "=== Dog constructor with arg called. ===" << RESET << std::endl;
}

Dog::~Dog()
{
    std::cout << RED << "=== Dog destructor called. ===" << RESET << std::endl;
}

Dog::Dog(const Dog &dog)
{
    std::cout << YELLOW << "=== Dog copy constructor called. ===" << RESET << std::endl;
    *this = dog;
}

Dog &Dog::operator=(const Dog &dog)
{
    std::cout << YELLOW << "=== Dog Copy assignment operator called ===" << RESET << std::endl;
    type_ = dog.getType(); 
    return *this;

}

void Dog::makeSound() const
{
    std::cout << "WanWanWan!" << std::endl;
}
