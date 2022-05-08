#ifndef BRAIN_HPP
#define BRAIN_HPP

#define RESET "\033[0m"
#define RED "\033[31m"   /* Red */
#define GREEN "\033[32m" /* Green */
#define YELLOW "\033[33m" /* Yellow */

#include <iostream>

class Brain
{
private:
    std::string ideas_[100];
public:
    Brain();
    ~Brain();
    Brain(const Brain &brain);
    Brain &operator=(const Brain &brain);
    std::string getIdea(int i) const;
    void setIdea(int i, std::string idea);
};

#endif
