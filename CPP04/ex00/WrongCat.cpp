#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat& other) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Copy Constructor called" << std::endl;
	*this = other;
}

void WrongCat::makeSound(void)
{
	std::cout << "WRONGCAT MIAO, MIEW, MEW" << std::endl;
}