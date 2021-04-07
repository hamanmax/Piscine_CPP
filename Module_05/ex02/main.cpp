#include <iostream>
#include <stdexcept>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	RobotomyRequestForm T_042("Thomas");
	Bureaucrat POTUS("Barack Obama",50);

	POTUS.signForm(T_042);
	POTUS.executeForm(T_042);
}