#include "Form.hpp"
	
Form::Form() : requiredGradeToExecute(1), requiredGradeToSign(1)
{
	isSigned = false;
	std::cout << "\033[33mForm created\033[37m" << std::endl;
}

Form::Form(int gradeToSign, int gradeToExecute, std::string formName)  
: name(formName),requiredGradeToExecute(gradeToExecute), requiredGradeToSign(gradeToSign)
{
	if (requiredGradeToSign > 150 || requiredGradeToExecute > 150)
		throw GradeTooHighException();
	if (requiredGradeToSign < 1 || requiredGradeToExecute < 1)
		throw GradeTooLowException();
	isSigned = false;
	std::cout << "\033[33m" << name << " created . Grade to Sign: " << gradeToSign << " and Grade to Execute:" << gradeToExecute << "\033[37m" <<  std::endl;
}
Form::~Form()
{
	std::cout << "\033[31mForm destroyed\033[37m" << std::endl;
}
Form::Form(const Form &in) 
: name(in.getName()), requiredGradeToExecute(in.getGradeToExecute()), requiredGradeToSign(in.getGradeToSign())	 
{
	isSigned = in.getStatus();
	*this = in;
}


Form &Form::operator=(const Form &in)
{
	this->isSigned = in.getStatus();
	return *this;
}



int Form::getGradeToExecute() const
{
	return requiredGradeToExecute;
}

int Form::getGradeToSign() const
{
	return requiredGradeToSign;
}

std::string Form::getName() const
{
	return name;
}
		
bool Form::getStatus() const
{
	return isSigned;
}


std::ostream &operator<<(std::ostream &o, const Form &a)
{
	o << "Form " << a.getName() <<  " is signed:" << a.getStatus() << std::endl;
	std::cout << "required grade for Signing:" << a.getGradeToSign() << std::endl;
	std::cout << "required grade for Executing:" << a.getGradeToExecute() << std::endl;
	return o;
}

void Form::beSigned(Bureaucrat &a)
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