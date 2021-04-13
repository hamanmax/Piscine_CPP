#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy):Form(copy.getTarget(),copy.getName(),copy.getSign(),copy.getExe()){*this = copy;}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & op){
	(void)op;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){}


PresidentialPardonForm::PresidentialPardonForm(std::string target):Form(target,"Presidential Pardon",25,5){
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (executor.getGrade() > this->getExe())
			throw Form::GradeTooLowException();
		else if (this->getStatus() == false)
			throw Form::FormIsNotSigned();
		else
			std::cout << "<" << this->getTarget() << "> has been pardoned by Zafod Beeblebox." << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
}