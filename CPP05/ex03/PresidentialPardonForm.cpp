#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm(25, 5, "PresidentialPardonForm")
{
	std::cout << "\033[33mPresidentialPardonForm created\033[37m" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "\033[33mPresidentialPardonForm destroyed\033[37m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &in) : AForm(25, 5, "PresidentialPardonForm")
{
	std::cout << "\033[33mPresidentialPardonForm created\033[37m" << std::endl;
	*this = in;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &in)
{
	this->_target = in.getTarget();
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(std:: string target) : AForm(25, 5, "PresidentialPardonForm")
{
	_target = target;
	std::cout << "\033[33mPresidentialPardonForm created with target " << target << "\033[37m" << std::endl;
}


void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	AForm::execute(executor);
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

std::string PresidentialPardonForm::getTarget()
{
	return _target;
}