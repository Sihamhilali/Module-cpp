
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if(N > 0)
    {
        Zombie *Table = new Zombie[N];
        for(int i = 0; i < N; i++)
            Table[i].setName(name);
        return(Table);
    }
        return(NULL);
}