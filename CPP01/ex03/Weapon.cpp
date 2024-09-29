#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;

	std::cout << "takes Weapon" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon released" << std::endl;
}

void Weapon::setType(std::string type)
{
	_type = type;
}

const std::string &Weapon::getType(void)
{
	return _type;
}