#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap A("Robocop");

	A.attack("criminal");
	A.takeDamage(13);
	A.beRepaired(12);
	A.attack("terrorist");
	A.takeDamage(19);
}