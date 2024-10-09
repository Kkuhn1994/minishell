#include "Animal.hpp"

class Dog : Animal
{
	public:
		Dog();
		~Dog();
		Dog(Dog& other);

		using Animal::operator=;
		void makeSound(void);
};