#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		Brain();
		~Brain();
		Brain(Brain &other);
		Brain& operator=(Brain& other);

		std::string *getIdeas();
		void setIdeas(std::string *ideas);

	private:
		std::string ideas[100];
};

#endif