#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "=== Cat default constructor called. ===" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
    std::cout << "=== Cat constructor with arg called. ===" << std::endl;
}

Cat::~Cat()
{
    std::cout << "=== Cat destructor called. ===" << std::endl;
}

Cat::Cat(const Cat &cat)
{
    std::cout << "=== Cat copy constructor called. ===" << std::endl;
    *this = cat;
}

Cat &Cat::operator=(const Cat &cat)
{
    std::cout << "=== Cat Copy assignment operator called ===" << std::endl;
    type_ = cat.getType(); 
    return *this;

}

void Cat::makeSound() const
{
    std::cout << "NyanNyanNyan!" << std::endl;
}
