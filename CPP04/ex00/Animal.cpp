#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "ANIMAL Constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "ANIMAL Destructor called" << std::endl;
}

Animal::Animal(std::string newType)
{
	std::cout << "ANIMAL Constructor called" << std::endl;
	type = newType;
}

Animal::Animal(Animal& toCopy)
{
	std::cout << "ANIMAL Copy Constructor called" << std::endl;
	*this = toCopy;
}
Animal& Animal::operator=(Animal &other)
{
	this->type = other.getType();
	return *this;
}

void Animal::makeSound()
{
	std::cout << "ANIMAL SOUND" << std::endl;
}

std::string Animal::getType()
{
	return type;
}

void Animal::setType(std::string newType)
{
	type = newType;
}