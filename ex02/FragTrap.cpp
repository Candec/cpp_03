#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Welcome default FragTrap" << std::endl << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_damagePoints = 30;
	std::cout << "FragTrap " << this->_name << ", I chose you" << std::endl << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src)
{
	std::cout << "You are not unique anymore " << this->_name << std::endl << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src)
{
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_damagePoints = src._damagePoints;
	std::cout << "FragTrap " << this->_name << " was cloned" << std::endl << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "BOOM, FragTrap exploded " << std::endl; 
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " presented you the hihgest of fives" << std::endl;
}