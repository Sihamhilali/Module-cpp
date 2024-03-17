#include <iostream>
#include "ClapTrap.hpp"


int main(void)
{
	ClapTrap siham("siham");
	ClapTrap lina("lina");

	std::cout << std::endl;
	siham.attack("siham");
	lina.takeDamage(5);
	siham.beRepaired(6);
	return 0;
}
