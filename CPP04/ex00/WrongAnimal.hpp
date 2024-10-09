#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal
{
	public:	
		WrongAnimal();
		WrongAnimal(std::string type);
		~WrongAnimal();
		WrongAnimal(WrongAnimal& other);
		WrongAnimal& operator=(WrongAnimal &other);

		void makeSound(void);
		std::string getType();
		void setType(std::string type);

	protected:
		std::string type;
};

#endif