#include "ClapTrap.hpp"

int main()
{
	ClapTrap def;
	ClapTrap john("John");
	ClapTrap copyJuan("Copy of Juan");
	ClapTrap Juan;

	Juan = copyJuan;

	def.attack("Lemur");
	def.beRepaired(100);
	def.takeDamage(10);
	def.takeDamage(1);

	john.attack("chimpance");
	john.takeDamage(5);
	john.takeDamage(3);
	john.beRepaired(4);

	Juan.attack("a chimpance");
	Juan.beRepaired(5);
	Juan.attack("you");
	Juan.attack("me");
	Juan.attack("he");
	Juan.attack("that one over there");
	Juan.attack("the cousin of that one");
	Juan.attack("some other people");
	Juan.attack("the police");
	Juan.attack("a pidegeon");
	Juan.attack("himself");
	Juan.attack("the evaluator");

	return (0);
}