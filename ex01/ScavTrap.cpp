#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default ScavTrap opened its eyes!" << std::endl << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_damagePoints = 20;

	std::cout << "ScavTrap " << this->_name << " started" << std::endl << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src)
{
	std::cout << "ScavTrap " << this->_name << " copied" << std::endl << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_damagePoints = src._damagePoints;
	std::cout << "ScavTrap " << this->_name << " assigned" << std::endl << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap died" << std::endl << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0)
	{
		std::cout << "Mr. ScavTrap "<< this->_name << " procceded to attack " << target << " provoking his victim " << this->_damagePoints << " points of damage!" << std::endl;
		this->_energyPoints--;
		std::cout << "Mr. ScavTrap " << this->_name << " Energy: " << this->_energyPoints << std::endl << std::endl;
	}
	else
		std::cout << "Mr .ScavTrap " << this->_name << " is exhausted" << std::endl << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << this->_name << " is guarding a gate." << std::endl << std::endl;
}