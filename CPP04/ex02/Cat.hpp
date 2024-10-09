#include "Animal.hpp"

class Cat : Animal
{
	public:	
		Cat();
		~Cat();
		Cat(Cat& other);

		using Animal::operator=;
		void makeSound(void);
};