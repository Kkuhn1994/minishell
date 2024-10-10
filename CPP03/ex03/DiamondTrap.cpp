#include "DiamondTrap.hpp"



DiamondTrap::DiamondTrap(const std::string newName) : ClapTrap(newName + "_clap_name"), FragTrap(), ScavTrap()
{
	name = newName;
	hitPoints = FragTrap::getHitPoints();
	attackPoints = FragTrap::getAttackDamage();
	energyPoints = ScavTrap::getEnergyPoints();
}

void DiamondTrap::attack(std::string target)
{
	ScavTrap::attack(target);
}

DiamondTrap::DiamondTrap(const DiamondTrap &toCopy)
{
	*this = toCopy;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor of DiamondTrap called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &toCopy)
{

	if (this == &toCopy)
	{
		return *this;
	}
	ScavTrap::operator=(toCopy);
	FragTrap::operator=(toCopy);
	this->name = toCopy.name;
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "Hello my names are " << this->name << " and " << ClapTrap::name << std::endl;
}
