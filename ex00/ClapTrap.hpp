#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public:

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& src);
	ClapTrap& operator=(const ClapTrap& src);
	~ClapTrap();


	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void setName(std::string& name);

	private:

	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _damagePoints;

};

#endif