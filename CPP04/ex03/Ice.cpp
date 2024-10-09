#include "Ice.hpp"


Ice::Ice() : AMateria("ice")
{
 	std::cout << "Constructor of ice called" << std::endl;
}
		
Ice::~Ice()
{
	std::cout << "Destructor of ice called" << std::endl;
}
		
Ice::Ice(Ice &other) : AMateria("ice")
{
	*this = other;
	std::cout << "Copy Constructor of ice called" << std::endl;
}


Ice* Ice::clone() const
{
	
	return new Ice(*this);
}
		
void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

