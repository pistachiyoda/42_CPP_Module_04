#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

// __attribute__((destructor))
// static void destructor() {
//     system("leaks -q brain");
// }

int main()
{
std::cout << "///////////// Brain test /////////////" << std::endl;
Brain *brain = new Brain();
delete brain;
std::cout << std::endl;

std::cout << "///////////// Leak test /////////////" << std::endl;
const Animal* dog = new Dog();
const Animal* cat = new Cat();
delete dog;//should not create a leak
delete cat;
std::cout << std::endl;

std::cout << "///////////// Create 10 animals and delete /////////////" << std::endl;
Animal* animals[10];
for (int i = 0; i < 5; i++)
{
    std::cout << "[Create Cat No." << i << "]" << std::endl;
    animals[i] = new Cat();
}
for (int i = 5; i < 10; i++)
{
    std::cout << "[Create Dog No." << i - 4 << "]" << std::endl;
    animals[i] = new Dog();
}
for (int i = 0; i < 10; i++)
{
    std::cout << "[Delete Animal No." << i << "]" << std::endl;
    std::cout << "type:" << animals[i]->getType() << std::endl;
    delete animals[i];
}
std::cout << std::endl;

std::cout << "///////////// Deep copy test 1/////////////" << std::endl;
Cat cat_1;
Cat cat_2;
cat_1.setIdea(0, "idea_0");
cat_1.getIdea(0);
cat_2 = cat_1;
cat_2.getIdea(0);
cat_1.setIdea(1, "idea_XXXX");
cat_2.setIdea(1, "idea_####");
cat_1.getIdea(1);
cat_2.getIdea(1);
std::cout << std::endl;

std::cout << "///////////// Deep copy test 2 /////////////" << std::endl;
Dog *dog_1 = new Dog();
dog_1->setIdea(10, "idea_hoge");
dog_1->setIdea(90, "idea_fuga");
Dog *dog_2 = new Dog(*dog_1);
dog_2->getIdea(10);
dog_2->getIdea(90);
dog_2->setIdea(10, "idea_piyo");
dog_1->getIdea(10);

delete dog_1;
delete dog_2;
std::cout << std::endl;

std::cout << "///////////// Deep copy test 3/////////////" << std::endl;
Cat cat_e;
cat_e.getIdea(0);
cat_e.setIdea(101, "idea_0");
cat_e.setIdea(-1, "idea_0");
return 0;
}
