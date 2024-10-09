#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string newType)
{
	type = newType;
	std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}



WrongAnimal::WrongAnimal(WrongAnimal& toCopy)
{
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
	*this = toCopy;
}
WrongAnimal& WrongAnimal::operator=(WrongAnimal &other)
{
	this->type = other.getType();
	return *this;
}

void WrongAnimal::makeSound()
{
	std::cout << "WrongAnimal SOUND" << std::endl;
}

std::string WrongAnimal::getType()
{
	return type;
}

void WrongAnimal::setType(std::string newType)
{
	type = newType;
}