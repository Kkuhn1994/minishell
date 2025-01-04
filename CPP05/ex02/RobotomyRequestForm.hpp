#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm();
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm &in);
		RobotomyRequestForm &operator=(RobotomyRequestForm &in);
		RobotomyRequestForm(std:: string target);

		void execute(Bureaucrat const &executor)  const override;
		std::string getTarget();

	private:
		std::string _target;
};