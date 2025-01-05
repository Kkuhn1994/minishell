#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	Intern someRandomIntern;
	Form* form;
	form = someRandomIntern.makeForm("robotomy request", "Bender");

	Bureaucrat A(1);

	A.signForm(form);
	A.execute(form);
