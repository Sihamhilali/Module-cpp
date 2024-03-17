#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap siham("siham");
	ScavTrap lina("lina");
	siham.attack("lina");
	lina.takeDamage(5);

	siham.attack("lina");
	lina.takeDamage(1);
	siham.attack("lina");
	lina.takeDamage(1);
	siham.beRepaired (5);
	lina.beRepaired(7);
	siham.highFivesGuys();
	lina.guardGate();

	return 0;
}