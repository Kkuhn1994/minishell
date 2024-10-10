#include "ScavTrap.hpp"

ScavTrap::~ScavTrap()
{
	std::cout << "destructor of ScavTrap " << this->getName() << " called" << std::endl;
}

ScavTrap::ScavTrap(std::string passedName) : ClapTrap()
{
	std::cout << "constructor of ScavTrap " << passedName << " called" << std::endl;
	this->setName(passedName);
	this->setAttackPoint(20);
	this->setEnergyPoints(50);
	this->setHitPoint(100);
}

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "default constructor of ScavTrap called" << std::endl;
	this->setAttackPoint(20);
	this->setEnergyPoints(50);
	this->setHitPoint(100);
}

ScavTrap::ScavTrap(const ScavTrap &toCopy)
{
	std::cout << "Copyconstructor of ScavTrap  called" << std::endl;
	*this = toCopy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &toCopy)
{
	this->setHitPoint(toCopy.getHitPoints());
	this->setName(toCopy.getName());
	this->setEnergyPoints(toCopy.getEnergyPoints());
	this->setAttackPoint(toCopy.getAttackDamage());
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << getName() << " is in guard keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string target)
{
	if (getEnergyPoints() < 1)
	{
		std::cout << "ScavTrap " << getName() << " has not enough energy to repair" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << getName() << " attacks " << target;
		std::cout << " and causes " << getAttackDamage() << " damage" << std::endl;
	}
}