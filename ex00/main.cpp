#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound();
j->makeSound();
meta->makeSound();

const WrongAnimal* wrong_meta = new WrongAnimal();
const WrongAnimal* wrong_i = new WrongCat();
std::cout << wrong_i->getType() << " " << std::endl;
wrong_i->makeSound();
wrong_meta->makeSound();
return 0;
}
