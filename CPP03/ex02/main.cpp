#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap A("Robocop");
	FragTrap B("FragTrap");

	B.attack("criminal");
	B.takeDamage(13);

	B.beRepaired(12);
	B.attack("terrorist");
	B.takeDamage(19);
	B.highFivesGuys();
}