#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form(target,"ShrubberyCreation",145,137){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy):Form(copy.getTarget(),copy.getName(),copy.getSign(),copy.getExe()){*this = copy;}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & op){
	(void)op;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}


void ShrubberyCreationForm::execute(Bureaucrat const & target) const
{
	try
	{
		if (this->getStatus() == true && target.getGrade() <= this->getExe())
		{
			std::string berry = this->getTarget() + "_shrubbery";
			std::ofstream shruberry(berry.c_str());
			shruberry << "\n       _-_\n    /~~   ~~\\\n /~~         ~~\\\n{               }\n \\  _-     -_  /\n   ~  \\ //  ~\n_- -   | | _- _\n  _ -  | |   -_\n      // \\\n" << "\n";
			shruberry << "       ###\n      #o###\n    #####o###\n   #o#\\#|#/###\n    ###\\|/#o#\n     # }|{  #\n       }|{\n" << "\n";
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