#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	std::string name;
	Weapon A;

public:
	HumanA(std::string name, Weapon type);
	~HumanA();

	void attack();
}