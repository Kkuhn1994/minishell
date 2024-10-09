#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}
		
Brain::Brain(Brain &other)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = other;
}
	
Brain& Brain::operator=(Brain& other)
{
	this->setIdeas(other.getIdeas());
	return *this;
}

std::string *Brain::getIdeas()
{
	return ideas;
}

void Brain::setIdeas(std::string *newIdeas)
{
	int i = 0;

	while(i < 100)
	{
		ideas[i] = newIdeas[i];
		i ++;
	}
}