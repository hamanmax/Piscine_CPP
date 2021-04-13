#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form(target,"RobotomyRequest",72,45){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy):Form(copy.getTarget(),copy.getName(),copy.getSign(),copy.getExe()){*this = copy;}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & op){
	(void)op;
	return *this;
}


RobotomyRequestForm::~RobotomyRequestForm(){}

void RobotomyRequestForm::execute(Bureaucrat const & target) const
{
	try
	{
		if (this->getStatus() == true && target.getGrade() <= this->getExe())
		{
			if (rand() % 2 == 0)
			{
				std::cout << "*Drills noises*\n<" << this->getTarget() << "> has been robotomized successfully" << "\n"; 
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