#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "DOG Constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "DOG Destructor called" << std::endl;
}

Dog::Dog(Dog& other) : Animal("Dog")
{
	std::cout << "DOG Copy Constructor called" << std::endl;
	*this = other;
}

void Dog::makeSound(void)
{
	std::cout << "WOOF WOOF" << std::endl;
}

Brain &Dog::getBrainAdress()
{
	return *ptrToBrain;
}

