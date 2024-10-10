#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
public:
	~ClapTrap();
	ClapTrap();
	ClapTrap(std::string passedName);
	ClapTrap(const ClapTrap &toCopy);
	ClapTrap &operator=(const ClapTrap &toCopy);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void setName(const std::string name);
	void setHitPoint(int newValue);
	void setAttackPoint(int newValue);
	void setEnergyPoints(int newValue);
	unsigned int getHitPoints(void) const;
	unsigned int getEnergyPoints(void) const;
	unsigned int getAttackDamage(void) const;
	const std::string &getName(void) const;

private:
	std::string name;
	int hitPoints;
	int attackPoints;
	int energyPoints;
};

#endif