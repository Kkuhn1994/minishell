#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap B("Kevin");

	B.attack("criminal");
	B.takeDamage(13);

	B.beRepaired(12);
	B.attack("terrorist");
	B.takeDamage(19);
	B.highFivesGuys();
	B.whoAmI();
}