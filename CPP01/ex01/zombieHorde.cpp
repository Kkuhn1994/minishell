#include <iostream>
#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	int i = 0;

	Zombie *horde = new Zombie[N];
	std::cout << std::endl;
	while (i < N)
	{
		horde[i].setName(name);
		i++;
	}
	return horde;
}