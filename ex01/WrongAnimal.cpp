#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type_("WrongAnimal")
{
    std::cout << GREEN << "=== WrongAnimal default constructor called. ===" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type_(type)
{
    std::cout << GREEN << "=== WrongAnimal constructor with arg called. ===" << RESET << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << RED << "=== WrongAnimal destructor called. ===" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
    std::cout << YELLOW << "=== WrongAnimal copy constructor called. ===" << RESET << std::endl;
    *this = animal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal)
{
    std::cout << YELLOW  << "=== WrongAnimal Copy assignment operator called ===" << RESET  << std::endl;
    type_ = animal.getType(); 
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Hogeeee..." << std::endl;
}

std::string WrongAnimal::getType() const
{
    return type_;
}
