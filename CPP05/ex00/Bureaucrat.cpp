#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat created" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destroyed" << std::endl;
}

Bureaucrat::Bureaucrat(int grade) : name("default")
{
	if(grade < 1)
		throw GradeTooLowException();
	else if(grade > 150)
		throw GradeTooHighException();
	else
		this->grade = grade;
	std::cout << name << " Bureaucrat created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &in) : name("default")
{
	std::cout << "Bureaucrat created with copy constructor" << std::endl;
	*this = in;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &in)
{
	this->grade = in.getGrade();
	return *this;
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &a)
{
	o << a.getName() << " Bureaucrat with grade " << a.getGrade() << std::endl;
	return o;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

std::string Bureaucrat::getName() const
{
	return name;
}