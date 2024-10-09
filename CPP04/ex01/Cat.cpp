#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "CAT Constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "CAT Destructor called" << std::endl;
}

Cat::Cat(Cat& other) : Animal("Cat")
{
	std::cout << "CAT Copy Constructor called" << std::endl;
	*this = other;
}

void Cat::makeSound(void)
{
	std::cout << "MIAO, MIEW, MEW" << std::endl;
}

Brain &Cat::getBrainAdress()
{
	return *ptrToBrain;
}
