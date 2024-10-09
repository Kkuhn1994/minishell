#include "AMateria.hpp"

class Cure : AMateria
{
	public:
		Cure();
		~Cure();
		Cure(const Cure& other);

	private:
		AMateria* clone() const;
		void use(ICharacter& target);

};