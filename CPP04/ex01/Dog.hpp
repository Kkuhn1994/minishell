#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(Dog& other);

		using Animal::operator=;
		void makeSound();
		Brain &getBrainAdress();


	private:
		Brain* ptrToBrain;
};