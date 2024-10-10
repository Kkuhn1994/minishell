#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	~Ice();
	Ice(const Ice &other);

private:
	Ice *clone() const;
	void use(ICharacter &target);
};