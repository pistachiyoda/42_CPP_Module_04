#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "=== WrongCat default constructor called. ===" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
    std::cout << "=== WrongCat constructor with arg called. ===" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "=== WrongCat destructor called. ===" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat)
{
    std::cout << "=== WrongCat copy constructor called. ===" << std::endl;
    *this = cat;
}

WrongCat &WrongCat::operator=(const WrongCat &cat)
{
    std::cout << "=== WrongCat Copy assignment operator called ===" << std::endl;
    type_ = cat.getType(); 
    return *this;

}

void WrongCat::makeSound() const
{
    std::cout << "Wrong NyanNyanNyan!" << std::endl;
}
