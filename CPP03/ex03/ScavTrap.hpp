#ifndef SCAVTRAP_H
#define SCAVTRAP_H
#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(std::string newName);
	ScavTrap();
	~ScavTrap();
	ScavTrap(const ScavTrap &toCopy);
	ScavTrap &operator=(const ScavTrap &toCopy);

	void guardGate();
	void attack(const std::string target);
};

#endif
