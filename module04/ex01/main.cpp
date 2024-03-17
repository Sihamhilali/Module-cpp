#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"
int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* WA = new  WrongCat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << WA->getType() << " " <<std::endl;
std::cout << std::endl;
meta->makeSound();
j->makeSound();
i->makeSound();
std::cout << std::endl;
WA->makeSound();
std::cout << std::endl;
delete meta;
delete j;
delete i;
delete WA;
return 0;
//Cat basic;
//Dog hi;
//{
//Cat tmp = basic;
//Dog H = hi;
//}
}