#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"
int main()
{
//const AAnimal* meta = new AAnimal();
const AAnimal* j = new Dog();
const AAnimal* i = new Cat();
const WrongAnimal* WA = new  WrongCat();

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << WA->getType() << " " <<std::endl;
std::cout << std::endl;

//meta->makeSound();
j->makeSound();
i->makeSound();

std::cout << std::endl;
WA->makeSound();

std::cout << std::endl;
delete j;
delete i;
delete WA;
return 0;
}