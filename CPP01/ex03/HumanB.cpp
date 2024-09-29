#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	name = name;
}

void HumanB::attack()
{
	std::cout << name + "attacks with " + A.getType() << std::endl;
}

void HumanB::setWeapon(Weapon Weapon)
{
	A = Weapon;
}