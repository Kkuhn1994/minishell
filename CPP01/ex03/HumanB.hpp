#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	std::string name;
	Weapon A;

public:
	HumanB(std::string name);
	~HumanB();

	void attack();
	void setWeapon(Weapon Weapon);
}