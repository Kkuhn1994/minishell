#include <iostream>
#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main(void)
{
	Zombie *horde;
	int number = 8;
	int i = 0;

	horde = zombieHorde(number, "Tarek");
	std::cout << std::endl;
	while (i < number)
	{
		horde[i].announce();

		i++;
	}

	i = 0;
	delete[] horde;
}