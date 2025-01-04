#include "Bureaucrat.hpp"

int main(void)
{

	
		//std::cout << a.getGrade() << std::endl;
	try
	{
		Bureaucrat a(1);
		Form toSign(1, 1, "Formular");
		a.signForm(toSign);
		a.signForm(toSign);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	
			//std::cout << a.getGrade() << std::endl;
	try
	{
		Bureaucrat a(2);
		Form toSign(1, 1, "Formular");
		a.signForm(toSign);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form toSign(152, 2, "Formular");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	try
	{
		Form toSign(2, 152, "Formular");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	try
	{
		Form toSign(0, 2, "Formular");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	try
	{
		Form toSign(2, 0, "Formular");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	// Bureaucrat b(0);
	// Bureaucrat c(151);

	

}