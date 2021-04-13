#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <stdexcept>
#include <iostream>

class Bureaucrat
{
	private:
		std::string const _name;
		unsigned int _grade;
		Bureaucrat();
	protected:
		/*Arg*/
	public:
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
		Bureaucrat(Bureaucrat const & copy);
		Bureaucrat & operator=(Bureaucrat const & op);
		~Bureaucrat();

		Bureaucrat(std::string const name,unsigned int grade);

		std::string const getName() const;
		unsigned int getGrade() const;
		void doPromote();
		void doDemote();
};

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(Bureaucrat const & copy){*this = copy;}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & op){
	if (this != &op)
	{
		this->_grade = op._grade;
	}
	return *this;
}
#endif