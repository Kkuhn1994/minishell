#include "RobotomyRequestForm.hpp"
#include <random>

RobotomyRequestForm::RobotomyRequestForm() : AForm(72, 45, "RobotomyRequestForm")
{
	std::cout << "\033[33mRobotomyRequestForm created\033[37m" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\033[33mRobotomyRequestForm destroyed\033[37m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &in) : AForm(72, 45, "RobotomyRequestForm")
{
	std::cout << "\033[33mRobotomyRequestForm created\033[37m" << std::endl;
	*this = in;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &in)
{
	this->_target = in.getTarget();
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(std:: string target) : AForm(72, 45, "RobotomyRequestForm")
{
	_target = target;
	std::cout << "\033[33mRobotomyRequestForm created with target " << target << "\033[37m" << std::endl;
}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	AForm::execute(executor);
	std::cout << "VROOOM KRZZZ" << std::endl;
	std::srand(static_cast<unsigned int>(std::time(0)));
	std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<> distrib(0, 100);

    int random_number = distrib(gen);

	if(random_number % 2 == 0)
	{
		std::cout << _target <<" has been robotomized successfully" << std::endl;
	}
	else
	{
		std::cout << "Robotomy of " << _target << " has failed" << std::endl; 
	}
}

std::string RobotomyRequestForm::getTarget()
{
	return _target;
}