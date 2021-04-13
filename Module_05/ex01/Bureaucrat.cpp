#include"Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(Bureaucrat const & copy){*this = copy;}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & op){
	if (this != &op)
	{
		this->_grade = op._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat(){}

const char * Bureaucrat::GradeTooHightException::what() const throw(){
	
	return("Le Grade que vous voulez attribuer est trop Eleve max 150");
}

const char * Bureaucrat::GradeTooLowException::what() const throw(){
	return("Le Grade que vous voulez attribuer est trop Faible min 1");
}
Bureaucrat::Bureaucrat(std::string const name,unsigned int grade):_name(name),_grade(grade){
	try
	{
		if (this->_grade < 1)
			throw Bureaucrat::GradeTooLowException();
		else if (this->_grade > 150)
			throw Bureaucrat::GradeTooHightException();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}

std::ostream& operator<<(std::ostream& os,Bureaucrat const & dt)
{
	os <<"<" << dt.getName() <<">, bureaucrat grade <" << dt.getGrade() << ">." << "\n";
	return (os);
}

std::string const Bureaucrat::getName() const{
	return(this->_name);
}


unsigned int Bureaucrat::getGrade() const{
	return(this->_grade);
}

void Bureaucrat::doPromote(){
	try
	{
		this->_grade--;
		if (this->_grade < 1)
		{
			this->_grade++;
			throw GradeTooLowException();
		}
	}
	catch(const std::exception& GradeTooLowException)
	{
		std::cout << GradeTooLowException.what() << '\n';
	}
}

void Bureaucrat::doDemote(){
	try
	{
		this->_grade++;
		if (this->_grade > 150)
		{
			this->_grade--;
			throw GradeTooHightException();
		}
	}
	catch(const std::exception& GradeTooHightException)
	{
		std::cout << GradeTooHightException.what() << '\n';
	}
}

void Bureaucrat::signForm(Form & f){
	if (this->_grade <= f.getSign())
	{
		f.beSigned(*this);
		std::cout << "<" << this->_name << "> signs <" << f.getName() << ">"<< "\n";
	}
	else
		std::cout << "<" << this->_name << "> cant sign <" << f.getName() << "> because <"<< "grade is to hight" << ">" << "\n";
}