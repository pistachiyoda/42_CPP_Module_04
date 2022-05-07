#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
std::cout << "///////////// Animal Class test /////////////" << std::endl;
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << "[type: " << j->getType() << "]" << std::endl;
i->makeSound();
std::cout << "[type: " << i->getType() << "]" << std::endl;
j->makeSound();
std::cout << "[type: " << meta->getType() << "]" << std::endl;
meta->makeSound();

delete meta;
delete j;
delete i;
std::cout << std::endl;

std::cout << "///////////// WrongAnimal Class test /////////////" << std::endl;
const WrongAnimal* wrong_meta = new WrongAnimal();
const WrongAnimal* wrong_i = new WrongCat();
std::cout << "[type: " << wrong_i->getType() << "]" << std::endl;
wrong_i->makeSound();
std::cout << "[type: " << wrong_meta->getType() << "]" << std::endl;
wrong_meta->makeSound();

delete wrong_meta;
delete wrong_i;

return 0;
}
