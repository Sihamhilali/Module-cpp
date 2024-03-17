
#include"Zombie.hpp"

int main()
{
    int N = 7;
    Zombie *Zombie1 = zombieHorde(N, "school");
    for (int i = 0; i < N; i++)
        Zombie1[i].announce();
    delete [] Zombie1;
}