#include "ShrubberyCreationForm.hpp"
#include <fstream> 
#include <iostream>


ShrubberyCreationForm::ShrubberyCreationForm() : AForm(145, 137, "ShrubberyCreationForm")
{
	std::cout << "\033[33mShrubberyCreationForm created\033[37m" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\033[33mShrubberyCreationForm destroyed\033[37m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &in) : AForm(145, 137, "ShrubberyCreationForm")
{
	std::cout << "\033[33mShrubberyCreationForm created\033[37m" << std::endl;
	*this = in;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &in)
{
	this->_target = in.getTarget();
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(std:: string target) : AForm(145, 137, "ShrubberyCreationForm")
{
	_target = target;
	std::cout << "\033[33mShrubberyCreationForm created with target " << target << "\033[37m" << std::endl;
}


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	AForm::execute(executor);
	std::string result;
	int i = 0;
	int j = 0;

	while(i < 8)
	{
		while(j < 15)
		{
			if((j == 7 || (j >= 7 - i && j <= 7 + i)) && i < 7)
			{
				result = result + "*";
			}
			else if (i == 7 && j == 7)
			{
				result = result + "|";
			}
			else
			{
				result = result + " ";
			}
			j ++;
		}
		result = result + "\n";
		j = 0;
		i ++;
	}

	std::string fileName = _target + "_shrubbery";
	std::ofstream outfile(fileName);
	outfile << result << std::endl;
}

std::string ShrubberyCreationForm::getTarget()
{
	return _target;
}

