#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << GREEN  << "=== WrongCat default constructor called. ===" << RESET << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
    std::cout << GREEN  << "=== WrongCat constructor with arg called. ===" << RESET << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << RED << "=== WrongCat destructor called. ===" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat)
{
    std::cout << YELLOW << "=== WrongCat copy constructor called. ===" << RESET << std::endl;
    *this = cat;
}

WrongCat &WrongCat::operator=(const WrongCat &cat)
{
    std::cout << YELLOW << "=== WrongCat Copy assignment operator called ===" << RESET << std::endl;
    type_ = cat.getType(); 
    return *this;

}

void WrongCat::makeSound() const
{
    std::cout << "Wrong NyanNyanNyan!" << std::endl;
}
