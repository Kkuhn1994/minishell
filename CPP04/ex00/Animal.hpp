#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<iostream>

class Animal
{
	public:
		Animal();
		Animal(std::string type);
		~Animal();
		Animal(Animal& toCopy);
		Animal& operator=(Animal &other);

		void makeSound();
		std::string getType();
		void setType(std::string type);

	protected:
		std::string type;
};

#endif 