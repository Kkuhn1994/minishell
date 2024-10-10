#include "Materiasource.hpp"

Materiasource::Materiasource()
{
	nrMaterialsLearned = 0;

	std::cout << "Constructor of Materiasource called" << std::endl;
}
Materiasource::~Materiasource()
{
	std::cout << "Destructor of Materiasource called" << std::endl;
}

Materiasource::Materiasource(Materiasource &other)
{
	*this = other;
	std::cout << "Copy Constructor of Materiasource called" << std::endl;
}

Materiasource &Materiasource::operator=(Materiasource &other)
{
	int i = 0;

	while (i < 4)
	{
		memory[i] = other.memory[i];
		i++;
	}
	nrMaterialsLearned = other.nrMaterialsLearned;
	return *this;
}

void Materiasource::learnMateria(AMateria *other)
{
	memory[nrMaterialsLearned] = other;
	nrMaterialsLearned++;
}
AMateria *Materiasource::createMateria(std::string const &type)
{
	int i = 0;

	while (i < 4)
	{
		if (memory[i]->getType() == type)
			return memory[i]->clone();
		i++;
	}
	return 0;
}