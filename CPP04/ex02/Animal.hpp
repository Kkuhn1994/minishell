#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<iostream>

class Animal
{
	public:
		Animal(std::string type);
		virtual ~Animal();
		Animal(Animal& toCopy);
		Animal& operator=(Animal &other);

		virtual void makeSound() = 0;
		std::string getType();
		void setType(std::string type);

	protected:
		std::string type;
};

#endif 