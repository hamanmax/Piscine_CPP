#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
#include <iostream>

class RobotomyRequestForm : virtual public Form
{
	private:
		RobotomyRequestForm();
	protected:
		/*Arg*/
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & copy);
		RobotomyRequestForm & operator=(RobotomyRequestForm const & op);
		~RobotomyRequestForm();
		void execute(Bureaucrat const& executor) const;
};

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form(target,"RobotomyRequest",72,45){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy):Form(copy.getTarget(),copy.getName(),copy.getSign(),copy.getExe()){*this = copy;}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & op){
	(void)op;
	return *this;
}


RobotomyRequestForm::~RobotomyRequestForm(){}

void RobotomyRequestForm::execute(Bureaucrat const & target) const
{
	srand(time(NULL));
	try
	{
		if (this->getStatus() == true && target.getGrade() <= this->getExe())
		{
			if (rand() % 2 == 0)
			{
				std::cout << "*Drills noises*\n<" << target.getName() << "> has been robotomized successfully" << "\n"; 
			}
			else
			{
				std::cout << "It's a Failure" << "\n";
			}
		}
		else if (this->getStatus() == false)
			throw Form::FormIsNotSigned();
		else
			throw Form::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cout << "<" << target.getName() << "> can't execute <"<< this->getName() << "> because " << e.what() << '\n';
	}
}

#endif