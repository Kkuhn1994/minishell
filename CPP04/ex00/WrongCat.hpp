#include "WrongAnimal.hpp"

class WrongCat : WrongAnimal
{
	public:	
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat& other);

		using WrongAnimal::operator=;
		void makeSound(void);
};