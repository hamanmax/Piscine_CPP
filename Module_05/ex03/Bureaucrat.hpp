#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <stdexcept>
#include <iostream>

class Form;
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
		void signForm(Form & f);
		void executeForm(Form const & f);
};
std::ostream& operator<<(std::ostream& os,Bureaucrat const & dt);
#endif
