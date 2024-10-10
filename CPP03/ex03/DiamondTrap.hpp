#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, ScavTrap
{
public:
	DiamondTrap(std::string newName);
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(const DiamondTrap &toCopy);
	DiamondTrap &operator=(const DiamondTrap &toCopy);

	void whoAmI();
	void attack(std::string target);

private:
	std::string name;
};