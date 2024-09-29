#include <iostream>
#include "Zombie.hpp"

void randomChump(std::string name);
Zombie *newZombie(std::string name);

int main(void)
{
	randomChump("Quentin");
	std::cout << std::endl;
	randomChump("Kevin");
	std::cout << std::endl;
	std::cout << std::endl;
	Zombie a = *newZombie("Tarek");
	a.announce();
	a.announce();
}
