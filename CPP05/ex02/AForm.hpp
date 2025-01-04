#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm();
		~AForm();
		AForm(int gradeToSign, int gradeToExecute, std::string formName);
		AForm(const AForm &in);
		AForm &operator=(const AForm &in);

		int getGradeToExecute() const;
		int getGradeToSign() const;
		std::string getName() const;
		bool getStatus() const;

		void beSigned(Bureaucrat &a);
		virtual void execute(Bureaucrat const &executor) const;
	

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

		class GradeTooLowToExecuteException : public std::exception {
		public:
			const char* what() const noexcept override {
				return "grade to low to execute";
			}
		};

		class AlreadySignedException : public std::exception {
		public:
			const char* what() const noexcept override {
				return "Form is already signed";
			}
		};

		class NotSignedException : public std::exception {
		public:
			const char* what() const noexcept override {
				return "Form is not signed and cannot be executed";
			}
		};

	private:
		const std::string	name;
		bool				isSigned;
		const int			requiredGradeToExecute;
		const int			requiredGradeToSign;

};

	std::ostream &operator<<(std::ostream &o, const Bureaucrat &a);

