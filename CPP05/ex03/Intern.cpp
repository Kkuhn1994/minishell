#include "Intern.hpp"

       Intern::Intern()
       {
            std::cout << "\033[33mIntern created\033[37m" << std::endl;
       }
        
        Intern::~Intern()
        {
            std::cout << "\033[33mIntern created\033[37m" << std::endl;
        }

        Intern::Intern(Intern &in)
        {
            *this = in;
            std::cout << "\033[33mIntern created\033[37m" << std::endl;
        }

        Intern &Intern::operator=(Intern &in)
        {
            *this = in;
            return this;
        }

        Intern *Intern::makeForm(std::string nameForm, std::string target)
        {
                switch (nameForm) 
                {
                    case "shrubbery creation":
                        return new ShrubberyCreationForm(target);
                    
                    case "robotomy request":
                        return new RobotomyRequestForm(target);
                    
                    case "presidential pardon":
                        return new PresidentialPardonForm(target);
                    
                    default:
                        std::cout << "Form not recognized!" << std::endl;
                        return nullptr;
                }
        }