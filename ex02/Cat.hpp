#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *brain_;
public:
    Cat();
    Cat(std::string type);
    ~Cat();
    Cat(const Cat &cat);
    Cat &operator=(const Cat &cat);
    void makeSound() const;
    void getIdea(int i) const;
    void setIdea(int i, std::string idea);
};

#endif
