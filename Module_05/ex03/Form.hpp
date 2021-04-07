#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <stdexcept>

class Bureaucrat;

class Form
{
	private:
		std::string const _target;
		std::string const _name;
		unsigned int const _signgrade;
		unsigned int const _executegrade;
		bool _issigned;
		Form();
	protected:
		/*Arg*/
	public:
		Form(Form const & copy);
		Form & operator=(Form const & op);
		virtual ~Form();

		Form(std::string target, std::string name,unsigned int signgrade,unsigned int execgrade);

		virtual std::string const getName()const ;
		virtual std::string const getTarget()const ;
		virtual unsigned int getSign()const ;
		virtual bool getStatus()const ;
		virtual void setStatus(bool x);
		virtual unsigned int getExe()const ;
		virtual void beSigned(Bureaucrat const & b);
		virtual void execute(Bureaucrat const& executor) const = 0;

		class GradeTooHightException: public std::exception
		{
			public:
			virtual const char * what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
			virtual const char * what() const throw();
		};
		class FormIsNotSigned: public std::exception
		{
			public:
			virtual const char * what() const throw();
		};
};

Form::Form(std::string target, std::string name,unsigned int signgrade,unsigned int execgrade):_target(target),_name(name),_signgrade(signgrade),_executegrade(execgrade),_issigned(false){
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

#include "Bureaucrat.hpp"
Form::Form(Form const & copy):_name(copy._name), _signgrade(copy.getSign()), _executegrade(0){*this = copy;}

Form & Form::operator=(Form const & op){
	this->_issigned = op._issigned;
	return *this;
}

Form::~Form(){}

std::string const Form::getName()const {
	return(this->_name);
}
std::string const Form::getTarget()const {
	return(this->_target);
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
void Form::setStatus(bool x){
	this->_issigned = x;
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
const char * Form::FormIsNotSigned::what() const throw(){
	return("Form is not signed");
}
#endif