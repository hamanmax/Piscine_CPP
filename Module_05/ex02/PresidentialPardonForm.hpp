#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"
#include <iostream>
class PresidentialPardonForm : virtual public Form
{
	private:
		/*Arg*/
		PresidentialPardonForm();
	protected:
		/*Arg*/
	public:
		PresidentialPardonForm(PresidentialPardonForm const & copy);
		PresidentialPardonForm & operator=(PresidentialPardonForm const & op);
		~PresidentialPardonForm();

		PresidentialPardonForm(std::string target);

		void execute(Bureaucrat const & executor)const ;
};

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
#endif