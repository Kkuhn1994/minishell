#include <iostream>
#include <stdexcept>
#include <string>

class Bureaucrat
{
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(int grade);
		Bureaucrat(const Bureaucrat &in);
		Bureaucrat &operator=(const Bureaucrat &in);

		std::ostream &operator<<(std::ostream &o, const Bureaucrat &a);
		int getGrade()  const;
		std::string getName()  const;

		class GradeTooHighException : public std::exception {
		public:
		
			const char* what() const noexcept override  {
				return "Grade is too high!";
			}
		};

		class GradeTooLowException : public std::exception {
		public:
			const char* what() const noexcept override {
				return "Grade is too low!";
			}
		};

	private:
		const std::string name;
		int grade;

};

	

