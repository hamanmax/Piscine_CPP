#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <stdexcept>

class Bureaucrat;

class Form
{
	private:
		std::string const _name;
		unsigned int const _signgrade;
		unsigned int const _executegrade;
		bool _issigned;
	protected:
		/*Arg*/
	public:
		Form();
		Form(Form const & copy);
		Form & operator=(Form const & op);
		~Form();

		Form(std::string name,unsigned int signgrade);

		std::string const getName()const ;
		unsigned int getSign()const ;
		bool getStatus()const ;
		unsigned int getExe()const ;
		void beSigned(Bureaucrat const & b);

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
};

std::ostream&	operator<<(std::ostream& os, Form const& f);

#endif