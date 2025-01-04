#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		~Form();
		Form(int gradeToSign, int gradeToExecute, std::string formName);
		Form(const Form &in);
		Form &operator=(const Form &in);

		int getGradeToExecute() const;
		int getGradeToSign() const;
		std::string getName() const;
		bool getStatus() const;

		void beSigned(Bureaucrat &a);
	

		class GradeTooHighException : public std::exception {
		public:
			const char* what() const noexcept override  {
				return "Grade of Form is too high!";
			}
		};

		class GradeTooLowException : public std::exception {
		public:
			const char* what() const noexcept override {
				return "Grade of Form is too low!";
			}
		};

		class GradeTooLowToSignException : public std::exception {
		public:
			const char* what() const noexcept override {
				return "grade to low to sign";
			}
		};

		class AlreadySignedException : public std::exception {
		public:
			const char* what() const noexcept override {
				return "Form is already signed";
			}
		};
	private:
		const std::string	name;
		bool				isSigned;
		const int			requiredGradeToExecute;
		const int			requiredGradeToSign;

};

	std::ostream &operator<<(std::ostream &o, const Bureaucrat &a);

