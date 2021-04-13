#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"
#include <iostream>
class PresidentialPardonForm : virtual public Form
{
	private:
		/*Arg*/
		PresidentialPardonForm();
	protected:
		/*Arg*/
	public:
		PresidentialPardonForm(PresidentialPardonForm const & copy);
		PresidentialPardonForm & operator=(PresidentialPardonForm const & op);
		~PresidentialPardonForm();

		PresidentialPardonForm(std::string target);

		void execute(Bureaucrat const & executor)const ;
};

#endif