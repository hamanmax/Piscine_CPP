#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(std::string name,unsigned int signgrade):_name(name),_signgrade(signgrade),_executegrade(signgrade),_issigned(false){
	try
	{
		if (this->_signgrade < 1 || this->_executegrade < 1)
			throw Form::GradeTooLowException();
		else if (this->_signgrade > 150 || this->_executegrade > 150)
			throw Form::GradeTooHightException();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}

std::ostream&	operator<<(std::ostream& os, Form const& f){
		os <<"Form name : "<< f.getName() << " Form grade required : "<< f.getSign()<< " Form is signed : "<< f.getStatus()<< "\n";
	return(os);
}
Form::Form(Form const & copy):_name(copy._name), _signgrade(copy.getSign()), _executegrade(0){*this = copy;}

Form & Form::operator=(Form const & op){
	this->_issigned = op._issigned;
	return *this;
}

Form::~Form(){}

std::string const Form::getName()const {
	return(this->_name);
}
unsigned int Form::getSign()const {
	return(this->_signgrade);
}
unsigned int Form::getExe()const {
	return(this->_executegrade);
}
bool Form::getStatus()const {
	return(this->_issigned);
}

void Form::beSigned(Bureaucrat const & b){
	try
	{
		if (b.getGrade() <= this->_signgrade)
			this->_issigned = true;
		else
			throw Form::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}

const char * Form::GradeTooHightException::what() const throw(){
	
	return("Grade to high");
}

const char * Form::GradeTooLowException::what() const throw(){
	return("Grade to low");
}