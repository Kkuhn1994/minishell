#include "AMateria.hpp"

class Ice : AMateria
{
	public:
		Ice();
		~Ice();
		Ice(Ice &other);

	private:
		Ice* clone() const;
		void use(ICharacter& target);

};