#include "Character.hpp"

Character::Character(std::string name)
{
	deleteInventory();
	size = 0;
	_name = name;
	std::cout << "Constructor of Character called" << std::endl;
}

Character::~Character()
{
	std::cout << "Destructor of Character called" << std::endl;
}
	
Character::Character(Character &other)
{
	*this = other;
	std::cout << "Copy Constructor of Character called" << std::endl;
}
		
Character &Character::operator=(Character &other)
{
		deleteInventory();
		*inventory = *other.inventory;
		size = other.size;
		_name = other.getName();
}
		
		
std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	inventory[size] = m;
	size ++;
}
	
void Character::unequip(int idx)
{
	inventory[size] = 0;
	size --;
}

void Character::use(int idx, ICharacter& target)
{
	inventory[idx]->use(target);
}

void Character::deleteInventory()
{
	int i = 0;

	while(i < 4)
	{
		inventory[i] = 0;
		i ++;
	}
}