#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main(void)
{
	WrongAnimal randomAnimal;

	randomAnimal.makeSound();

	std::cout << std::endl;

	WrongCat randomCat;

	randomCat.makeSound();

	std::cout << std::endl;

	Dog randomDog;

	randomDog.makeSound();

	std::cout << std::endl;
}