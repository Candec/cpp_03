#include "ClapTrap.hpp"

//Constructors
ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _damagePoints(0)
{
	std::cout << "Default ClapTrap is alive!" << std::endl << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _damagePoints(0)
{
	this->_name = name;
	std::cout << "A ClapTrap named " << this->_name << " is alive!" << std::endl << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	*this = src;
	std::cout << "A ClapTrap name " << this->_name << " was copied?" << std::endl << std::endl;
}

//Operator
ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
	if (this != &src)
	{
		_name = src._name;
		_hitPoints = src._hitPoints;
		_energyPoints = src._energyPoints;
		_damagePoints = src._damagePoints;
	}
	std::cout << "Clap = " << this->_name << " assigned" << std::endl << std::endl;
	return (*this);
}

//Destructors
ClapTrap::~ClapTrap()
{
	std::cout << "A ClapTrap "<< this->_name << " was dismanteled" << std::endl << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0)
	{
		std::cout << "ClapTrap "<< this->_name << " attacked " << target << " causing " << this->_damagePoints << " points of damage!" << std::endl;
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " Energy: " << this->_energyPoints << std::endl << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is out of juice D:" << std::endl << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		std::cout << "ClapTrap "<< this->_name << " took " << amount << " points of damage!" << std::endl;
		this->_hitPoints -= amount;
		if (this->_hitPoints <= 0)
		{
			this->_hitPoints = 0;
			std::cout << "ClapTrap " << this->_name << " perished" << std::endl;
		}
		std::cout << "ClapTrap " << this->_name << " health: " << this->_hitPoints << std::endl << std::endl;
	}
	else
		std::cout << "ClapTrap "<< this->_name << " is already dead, you monster!" << std::endl << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints < 10)
	{
		std::cout << "ClapTrap"<< this->_name << " repaired himself for " << amount << " of health" << std::endl;
		this->_energyPoints--;
		this->_hitPoints += amount;
		if (this->_hitPoints >= 10)
			this->_hitPoints = 10;
		std::cout << "ClapTrap " << this->_name << " health: " << this->_hitPoints << std::endl;
		std::cout << "ClapTrap " << this->_name << " Energy: " << this->_energyPoints << std::endl << std::endl;
	}
	else if (this->_energyPoints > 0 && this->_hitPoints >= 10)
	{
		std::cout << "ClapTrap " << this->_name << " is already at max health" << std::endl;
		std::cout << "ClapTrap " << this->_name << " health: " << this->_hitPoints << std::endl << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is out of juice D:" << std::endl << std::endl;
}