#include "Cure.hpp"


Cure::Cure() : AMateria("Cure")
{
 	std::cout << "Constructor of Cure called" << std::endl;
}
		
Cure::~Cure()
{
	std::cout << "Destructor of Cure called" << std::endl;
}
		
Cure::Cure(const Cure& other) : AMateria("cure") 
{
	*this = other;
    std::cout << "Copy Constructor of Cure called" << std::endl;
}


AMateria* Cure::clone() const
{
    return (new Cure(*this)); // Use copy constructor
}
		
void Cure::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at <name> *" << std::endl;
}