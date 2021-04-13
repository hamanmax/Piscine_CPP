#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
#include <iostream>

class RobotomyRequestForm : virtual public Form
{
	private:
		RobotomyRequestForm();
	protected:
		/*Arg*/
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & copy);
		RobotomyRequestForm & operator=(RobotomyRequestForm const & op);
		~RobotomyRequestForm();
		void execute(Bureaucrat const& executor) const;
};

#endif