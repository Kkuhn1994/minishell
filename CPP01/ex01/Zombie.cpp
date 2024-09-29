#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;

	std::cout << _name + " created" << std::endl;
}

Zombie::Zombie()
{
	std::cout << "Zombie was created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name + " destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	std::cout << name + "  initialized" << std::endl;
	_name = name;
}