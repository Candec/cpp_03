#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	ClapTrap def;
	ClapTrap john("John");
	ScavTrap Juan("Juan");
	FragTrap tnt("TNT");
	

	def.attack("Lemur");
	def.beRepaired(100);
	def.takeDamage(10);
	def.takeDamage(1);

	john.attack("Chimpance");
	john.takeDamage(5);
	john.takeDamage(3);
	john.beRepaired(4);

	Juan.attack("Gorilla");
	Juan.takeDamage(5);
	Juan.takeDamage(3);
	Juan.beRepaired(4);
	Juan.guardGate();

	tnt.attack("Anaconda");
	tnt.takeDamage(5);
	tnt.takeDamage(3);
	tnt.beRepaired(4);
	tnt.highFivesGuys();
	
	return (0);
}