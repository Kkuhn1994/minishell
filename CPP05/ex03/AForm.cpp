#include "AForm.hpp"
	
AForm::AForm() : requiredGradeToExecute(1), requiredGradeToSign(1)
{
	isSigned = false;
	std::cout << "\033[33mForm created\033[37m" << std::endl;
}

AForm::AForm(int gradeToSign, int gradeToExecute, std::string formName)  
: name(formName),requiredGradeToExecute(gradeToExecute), requiredGradeToSign(gradeToSign)
{
	if (requiredGradeToSign > 150 || requiredGradeToExecute > 150)
		throw GradeTooHighException();
	if (requiredGradeToSign < 1 || requiredGradeToExecute < 1)
		throw GradeTooLowException();
	isSigned = false;
	std::cout << "\033[33m" << name << " created . Grade to Sign: " << gradeToSign << " and Grade to Execute:" << gradeToExecute << "\033[37m" <<  std::endl;
}
AForm::~AForm()
{
	std::cout << "\033[31mForm destroyed\033[37m" << std::endl;
}
AForm::AForm(const AForm &in) 
: name(in.getName()), requiredGradeToExecute(in.getGradeToExecute()), requiredGradeToSign(in.getGradeToSign())	 
{
	isSigned = in.getStatus();
	*this = in;
}


AForm &AForm::operator=(const AForm &in)
{
	this->isSigned = in.getStatus();
	return *this;
}

void AForm::execute(Bureaucrat const & executor) const
{
	if(executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowToExecuteException();
	if(!getStatus())
		throw NotSignedException();
}

int AForm::getGradeToExecute() const
{
	return requiredGradeToExecute;
}

int AForm::getGradeToSign() const
{
	return requiredGradeToSign;
}

std::string AForm::getName() const
{
	return name;
}
		
bool AForm::getStatus() const
{
	return isSigned;
}


std::ostream &operator<<(std::ostream &o, const AForm &a)
{
	o << "Form " << a.getName() <<  " is signed:" << a.getStatus() << std::endl;
	std::cout << "required grade for Signing:" << a.getGradeToSign() << std::endl;
	std::cout << "required grade for Executing:" << a.getGradeToExecute() << std::endl;
	return o;
}

void AForm::beSigned(Bureaucrat &a)
{
	if(this->isSigned == true)
	{
		throw AlreadySignedException();
	}
	if(this->getGradeToSign() < a.getGrade())
		throw GradeTooLowToSignException();
	else
		isSigned = true;
}