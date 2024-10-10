
#pragma once
#include "IMateriasource.hpp"

class Materiasource : IMateriaSource
{
public:
	Materiasource();
	virtual ~Materiasource();
	Materiasource(Materiasource &other);
	Materiasource &operator=(Materiasource &other);

	void learnMateria(AMateria *);
	AMateria *createMateria(std::string const &type);

private:
	AMateria *memory[4];
	int nrMaterialsLearned;
};