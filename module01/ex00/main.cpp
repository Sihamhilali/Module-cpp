#include "Zombie.hpp"

int main()
{
    randomChump("ana");
    Zombie *zombie2 = newZombie("Foo");
    zombie2->announce();
    delete zombie2;
    return (0);
}
