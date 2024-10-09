#include "Animal.hpp"

Animal::Animal()
{
	brain = new Brain;
	std::cout << "ANIMAL Constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "ANIMAL Destructor called" << std::endl;
}

Animal::Animal(std::string newType)
{
	std::cout << "ANIMAL Constructor called" << std::endl;
	brain = new Brain;
	type = newType;
}

Animal::Animal(Animal& toCopy)
{
	std::cout << "ANIMAL Copy Constructor called" << std::endl;
	*this = toCopy;
}

void Animal::getIdeas(std::string *ideas)
{
	brain->setIdeas(ideas);
}


Animal& Animal::operator=(Animal &other)
{
	*brain = other.getBrainContent();
	this->type = other.getType();
	return *this;
}


std::string Animal::getType()
{
	return type;
}

void Animal::setType(std::string newType)
{
	type = newType;
}



void Animal::printIdeas()
{
	int i = 0;
	std::string *printIdeas = brain->getIdeas();

	while(i < 100)
	{
		std::cout << printIdeas[i] << std::endl;
		i ++;
	}
}

std::string *Animal::copyIdeas()
{
	return brain->getIdeas();
}

Brain &Animal::getBrainContent()
{
	return *brain;
}