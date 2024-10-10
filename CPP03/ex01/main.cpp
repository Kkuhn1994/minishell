#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap A("Robocop");
	ScavTrap B("Super Robocop");

	A.attack("criminal");
	A.takeDamage(13);
	A.beRepaired(12);
	A.attack("terrorist");
	A.takeDamage(19);

	B.attack("supercriminal");
	B.takeDamage(25);
	B.guardGate();
	B.attack("superterrorist");
	B.takeDamage(50);
	B.beRepaired(80);
}