#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
    {
        ideas_[i] = "";   
    }
    std::cout << GREEN << "=== Brain default constructor called. ===" << RESET << std::endl;
}

Brain::~Brain()
{
    std::cout << RED << "=== Brain destructor called. ===" << RESET << std::endl;
}

Brain::Brain(const Brain &brain)
{
    std::cout << YELLOW << "=== Brain copy constructor called. ===" << RESET  << std::endl;
    *this = brain;
}

Brain &Brain::operator=(const Brain &brain)
{
    std::cout << YELLOW << "=== Brain Copy assignment operator called ===" << RESET  << std::endl;
    for (int i = 0; i < 100; i++)
    {
        ideas_[i] = brain.getIdea(i);   
    }
    return *this;
}

std::string Brain::getIdea(int i) const
{
    return ideas_[i];
}

void Brain::setIdea(int i, std::string idea)
{
    if (i >= 100 || i < 0)
    {
        std::cerr << RED << "!!! Idea index should be 0 ~ 99 !!!" << RESET << std::endl; 
        return ;
    }
    ideas_[i] = idea;
}
