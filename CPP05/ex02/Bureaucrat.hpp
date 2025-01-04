#pragma once
#include <iostream>
#include <stdexcept>
#include <string>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(int grade);
		Bureaucrat(const Bureaucrat &in);
		Bureaucrat &operator=(const Bureaucrat &in);


		int getGrade()  const;
		std::string getName()  const;
		void signForm(AForm &a);
		void executeForm(AForm const&form);

		class GradeTooHighException : public std::exception {
		public:
		
			const char* what() const noexcept override  {
				return "Grade of Bureaucrat is too high!";
			}
		};

		class GradeTooLowException : public std::exception {
		public:
			const char* what() const noexcept override {
				return "Grade of Bureaucrat is too low!";
			}
		};


	private:
		const std::string name;
		int grade;

};

	std::ostream &operator<<(std::ostream &o, const Bureaucrat &a);
