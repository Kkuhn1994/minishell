#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm &in);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm &in);
		ShrubberyCreationForm(std:: string target);

		void execute(Bureaucrat const &executor)  const override;
		std::string getTarget();

	private:
		std::string _target;
		std::string asciTree() const;
};