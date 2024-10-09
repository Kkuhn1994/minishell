#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:	
		Cat();
		~Cat();
		Cat(Cat& other);

		using Animal::operator=;
		void makeSound(void);
		Brain &getBrainAdress();
	

	private:
		Brain* ptrToBrain;
};