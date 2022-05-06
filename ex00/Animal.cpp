#include "Animal.hpp"

Animal::Animal() : type_("Animal")
{
    std::cout << "=== Animal default constructor called. ===" << std::endl;
}

Animal::Animal(std::string type) : type_(type)
{
    std::cout << "=== Animal constructor with arg called. ===" << std::endl;
}

Animal::~Animal()
{
    std::cout << "=== Animal destructor called. ===" << std::endl;
}

Animal::Animal(const Animal &animal)
{
    std::cout << "=== Animal copy constructor called. ===" << std::endl;
    *this = animal;
}

Animal &Animal::operator=(const Animal &animal)
{
    std::cout << "=== Animal Copy assignment operator called ===" << std::endl;
    type_ = animal.getType(); 
    return *this;

}

void Animal::makeSound() const
{
    std::cout << "sound" << std::endl;
}

std::string Animal::getType() const
{
    return type_;
}
