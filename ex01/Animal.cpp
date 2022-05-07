#include "Animal.hpp"

Animal::Animal() : type_("Animal")
{
    std::cout << GREEN << "=== Animal default constructor called. ===" << RESET << std::endl;
}

Animal::Animal(std::string type) : type_(type)
{
    std::cout << GREEN << "=== Animal constructor with arg called. ===" << RESET << std::endl;
}

Animal::~Animal()
{
    std::cout << RED << "=== Animal destructor called. ===" << RESET << std::endl;
}

Animal::Animal(const Animal &animal)
{
    std::cout << YELLOW << "=== Animal copy constructor called. ===" << RESET  << std::endl;
    *this = animal;
}

Animal &Animal::operator=(const Animal &animal)
{
    std::cout << YELLOW << "=== Animal Copy assignment operator called ===" << RESET  << std::endl;
    type_ = animal.getType(); 
    return *this;

}

void Animal::makeSound() const
{
    std::cout << "Animal!Animal!!" << std::endl;
}

std::string Animal::getType() const
{
    return type_;
}
