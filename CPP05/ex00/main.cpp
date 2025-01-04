#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		const Bureaucrat a(1);
		//std::cout << a.getGrade() << std::endl;
		Bureaucrat b(a);
		std::cout << a;
		std::cout << b;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	try
	{
		Bureaucrat b(0);
		std::cout << b.getGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat c(151);
		std::cout << c.getGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	// Bureaucrat b(0);
	// Bureaucrat c(151);

	

}