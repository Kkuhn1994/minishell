#include "Cat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"

int main(void)
{	
	std::cout << std::endl;

	Cat randomCat;

	randomCat.makeSound();

	std::cout << std::endl;

	Dog randomDog;

	randomDog.makeSound();

	std::cout << std::endl;
}