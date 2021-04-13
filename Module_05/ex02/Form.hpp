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
std::ostream&	operator<<(std::ostream& os, Form const& f);

#endif