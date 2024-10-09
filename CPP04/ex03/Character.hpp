#include "ICharacter.hpp"

class Character : ICharacter
{
	public:
		Character(std::string name);
		~Character();
		Character(Character &other);
		Character &operator=(Character &other);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		void deleteInventory();
	
	private:
		AMateria *inventory[4];
		int size;
		std::string _name;


};