#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << GREEN << "=== Cat default constructor called. ===" << RESET << std::endl;
    brain_ = new Brain;
}

Cat::Cat(std::string type) : Animal(type)
{
    std::cout << GREEN << "=== Cat constructor with arg called. ===" << RESET << std::endl;
    brain_ = new Brain;
}

Cat::~Cat()
{
    std::cout << RED << "=== Cat destructor called. ===" << RESET << std::endl;
    delete brain_;
}

Cat::Cat(const Cat &cat)
{
    std::cout << YELLOW << "=== Cat copy constructor called. ===" << RESET << std::endl;
    *this = cat;
}

Cat &Cat::operator=(const Cat &cat)
{
    std::cout << YELLOW << "=== Cat Copy assignment operator called ===" << RESET << std::endl;
    type_ = cat.getType();
    // brain_ = cat.brain_; これだとポインタのコピーになる
    *brain_ = *cat.brain_;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "NyanNyanNyan!" << std::endl;
}

void Cat::getIdea(int i) const 
{
    std::cout << "index " << i << ":" << brain_->getIdea(i) << std::endl;
}

void Cat::setIdea(int i, std::string idea)
{
    brain_->setIdea(i, idea);
}
