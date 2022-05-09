#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << GREEN << "=== Cat default constructor called. ===" << RESET << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
    std::cout << GREEN << "=== Cat constructor with arg called. ===" << RESET << std::endl;
}

Cat::~Cat()
{
    std::cout << RED << "=== Cat destructor called. ===" << RESET << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat)
{
    std::cout << YELLOW << "=== Cat copy constructor called. ===" << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
    std::cout << YELLOW << "=== Cat Copy assignment operator called ===" << RESET << std::endl;
    type_ = cat.getType(); 
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "NyanNyanNyan!" << std::endl;
}
