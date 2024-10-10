#include "FragTrap.hpp"

FragTrap::~FragTrap()
{
	std::cout << "destructor of FragTrap " << this->getName() << " called" << std::endl;
}

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "default constructor of FragTrap called" << std::endl;
	this->setAttackPoint(30);
	this->setEnergyPoints(100);
	this->setHitPoint(100);
}

FragTrap::FragTrap(std::string passedName) : ClapTrap()
{
	std::cout << "constructor of FragTrap " << passedName << " called" << std::endl;
	this->setName(passedName);
	this->setAttackPoint(30);
	this->setEnergyPoints(100);
	this->setHitPoint(100);
}

FragTrap::FragTrap(const FragTrap &toCopy)
{
	std::cout << "Copyconstructor of FragTrap  called" << std::endl;
	*this = toCopy;
}

FragTrap &FragTrap::operator=(const FragTrap &toCopy)
{
	this->setHitPoint(toCopy.getHitPoints());
	this->setName(toCopy.getName());
	this->setEnergyPoints(toCopy.getEnergyPoints());
	this->setAttackPoint(toCopy.getAttackDamage());
	return *this;
}

void FragTrap::attack(const std::string &target)
{
	if (getEnergyPoints() < 1)
	{
		std::cout << "FragTrap " << getName() << " has not enough energy to repair" << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << getName() << " attacks " << target;
		std::cout << " and causes " << getAttackDamage() << " damage" << std::endl;
	}
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << getName() << " says: HIGH FIVE GUYS" << std::endl;
}