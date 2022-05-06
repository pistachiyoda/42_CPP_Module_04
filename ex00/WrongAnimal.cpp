#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type_("WrongAnimal")
{
    std::cout << "=== WrongAnimal default constructor called. ===" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type_(type)
{
    std::cout << "=== WrongAnimal constructor with arg called. ===" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "=== WrongAnimal destructor called. ===" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
    std::cout << "=== WrongAnimal copy constructor called. ===" << std::endl;
    *this = animal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal)
{
    std::cout << "=== WrongAnimal Copy assignment operator called ===" << std::endl;
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
