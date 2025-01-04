#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	ShrubberyCreationForm a("A");
	RobotomyRequestForm b("B");
	PresidentialPardonForm c("C");

	Bureaucrat A(1);
	Bureaucrat B(150);
	Bureaucrat C(80);

	B.executeForm(a);
	B.executeForm(b);
	B.executeForm(c);
	std::cout << std::endl;
	A.executeForm(a);
	A.executeForm(b);
	A.executeForm(c);
	std::cout << std::endl;
	C.signForm(a);
	C.signForm(b);
	C.signForm(c);
	std::cout << std::endl;
	A.executeForm(a);
	A.executeForm(b);
	A.executeForm(c);
	std::cout << std::endl;
	A.signForm(a);
	A.signForm(b);
	A.signForm(c);
	std::cout << std::endl;
	A.executeForm(a);
	A.executeForm(b);
	A.executeForm(c);
	std::cout << std::endl;
	A.executeForm(a);
	A.executeForm(b);
	A.executeForm(c);
}