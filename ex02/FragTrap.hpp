#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:

	FragTrap();
	FragTrap(std::string _name);
	FragTrap(const FragTrap& src);
	FragTrap& operator=(const FragTrap& src);
	~FragTrap();

	void highFivesGuys(void);

	private:

};

#endif