#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<iostream>
#include "Brain.hpp"

class Animal
{
	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		Animal(Animal& toCopy);
		Animal& operator=(Animal &other);

		virtual void makeSound() = 0;
		std::string getType();
		void setType(std::string type);
		void getIdeas(std::string *ideas);
		std::string *copyIdeas();
		void printIdeas();
		Brain &getBrainContent();

	protected:
		std::string type;

	private: 
		Brain *brain;
};

#endif 