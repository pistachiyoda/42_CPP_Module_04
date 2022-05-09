#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << GREEN << "=== Dog default constructor called. ===" << RESET << std::endl;
    brain_ = new Brain;
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout << GREEN << "=== Dog constructor with arg called. ===" << RESET << std::endl;
    brain_ = new Brain;
}

Dog::~Dog()
{
    std::cout << RED << "=== Dog destructor called. ===" << RESET << std::endl;
    delete brain_;
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
    std::cout << YELLOW << "=== Dog copy constructor called. ===" << RESET << std::endl;
    brain_ = new Brain;
    *this = dog;
}

Dog &Dog::operator=(const Dog &dog)
{
    std::cout << YELLOW << "=== Dog Copy assignment operator called ===" << RESET << std::endl;
    type_ = dog.getType();
    *brain_ = *dog.brain_;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "WanWanWan!" << std::endl;
}

void Dog::getIdea(int i) const 
{
    std::cout << "index " << i << ":" << brain_->getIdea(i) << std::endl;
}

void Dog::setIdea(int i, std::string idea)
{
    brain_->setIdea(i, idea);
}
