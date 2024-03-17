#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap siham("siham");
	ScavTrap lina("lina");
	siham.attack("lina");
	lina.takeDamage(0);
	siham.attack("lina");
	lina.takeDamage(6);
	siham.attack("lina");
	lina.takeDamage(0);
	lina.beRepaired(6);
	siham.guardGate();
	lina.guardGate();
	return 0;
}