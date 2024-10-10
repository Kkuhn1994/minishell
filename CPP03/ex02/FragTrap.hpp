#ifndef FragTrap_H
#define FragTrap_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(std::string newName);
	FragTrap();
	~FragTrap();
	FragTrap(const FragTrap &toCopy);
	FragTrap &operator=(const FragTrap &toCopy);
	void highFivesGuys(void);

	void attack(const std::string &target);
};

#endif
