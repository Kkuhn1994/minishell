#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon type)
{
	name = name;
	A = type;
}

void HumanA::attack()
{
	std::cout << name + "attacks with " + A.getType() << std::endl;
}