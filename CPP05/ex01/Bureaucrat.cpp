#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "\033[33mBureaucrat created\033[37m" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "\033[31mBureaucrat destroyed\033[37m" << std::endl;
}

Bureaucrat::Bureaucrat(int grade) : name("default")
{
	if(grade < 1)
		throw GradeTooLowException();
	else if(grade > 150)
		throw GradeTooHighException();
	else
		this->grade = grade;
	std::cout << "\033[33m" << name <<" Bureaucrat created\033[37m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &in) : name("default")
{
	std::cout << "\033[33mBureaucrat created with copy constructor\033[37m" << std::endl;
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

void Bureaucrat::signForm(Form &a)
{
	try
	{
		a.beSigned(*this);
		std::cout << this->getName() << " Bureaucrat signed " << a.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << name << " couldn't sign " << a.getName() << " because " << e.what() << '\n';
	}
}