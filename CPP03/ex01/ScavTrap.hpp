#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string newName);
	ScavTrap();
	~ScavTrap();
	ScavTrap(const ScavTrap &toCopy);
	ScavTrap &operator=(const ScavTrap &toCopy);
	void guardGate();

	void attack(const std::string &target);
};

#endif
