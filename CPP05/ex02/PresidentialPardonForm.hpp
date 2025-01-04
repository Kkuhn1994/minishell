#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm();
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm &in);
		PresidentialPardonForm &operator=(PresidentialPardonForm &in);
		PresidentialPardonForm(std:: string target);

		void execute(Bureaucrat const &executor)  const override;
		std::string getTarget();

	private:
		std::string _target;
};