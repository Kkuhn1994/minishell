#include "ClapTrap.hpp"

ClapTrap::~ClapTrap()
{
	std::cout << "destructor of ClapTrap" << name << " called" << std::endl;
}

ClapTrap::ClapTrap(std::string passedName)
{
	std::cout << "constructor of CLapTrap" << name << " called" << std::endl;
	name = passedName;
	hitPoints = 10;
	energyPoints = 10;
	attackPoints = 0;
}

ClapTrap::ClapTrap()
{
	std::cout << "default constructor of ClapTrap" << name << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &toCopy)
{
	std::cout << "Copyconstructor of ClapTrap" << name << " called" << std::endl;
	*this = toCopy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &toCopy)
{
	this->setHitPoint(toCopy.getHitPoints());
	this->setName(toCopy.getName());
	this->setEnergyPoints(toCopy.getEnergyPoints());
	this->setAttackPoint(toCopy.getAttackDamage());
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (energyPoints < 1)
	{
		std::cout << "ClapTrap " << name <<" has not enough energy to repair" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << name << " attacks " << target;
		std::cout << " and causes " << attackPoints << " damage" << std::endl;
	}
}
void ClapTrap::takeDamage(unsigned int amount)
{
	hitPoints -= amount;
	if (hitPoints < 1)
	{
		std::cout << "ClapTrap " << name << " died" << std::endl;
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{

	if (energyPoints < 1)
	{
		std::cout << "ClapTrap " << name << " has not enough energy to repair" << std::endl;
	}
	else
	{
		hitPoints += amount;
	}
}

void ClapTrap::setName(const std::string newName)
{
	name = newName;
}

void ClapTrap::setHitPoint(int newValue)
{
	hitPoints = newValue;
}

void ClapTrap::setEnergyPoints(int newValue)
{
	energyPoints = newValue;
}

void ClapTrap::setAttackPoint(int newValue)
{
	attackPoints = newValue;
}

unsigned int ClapTrap::getHitPoints(void) const
{
	return hitPoints;
}

unsigned int ClapTrap::getEnergyPoints(void) const
{
	return energyPoints;
}

unsigned int ClapTrap::getAttackDamage(void) const
{
	return attackPoints;
}

const std::string &ClapTrap::getName(void) const
{
	return name;
}
