#include <iostream>
#include <stdexcept>
#include "Form.hpp"

int main()
{

		try
	{
		Bureaucrat tmp1("tups", 2);
		Bureaucrat tmp("tups1", 7);
		Bureaucrat tmp2("tups2", 149);
		Bureaucrat tmp3("tups3", 140);
		Form        forming("contrat", 15);
		Form        fromat("test", 25);
		tmp.doPromote();
		tmp3.doDemote();
		std::cout<<tmp;
		tmp.doDemote();
		std::cout<<tmp;
		tmp1.signForm(fromat);
		tmp.signForm(fromat);
		tmp.signForm(fromat);
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cout<< e.what() << "\n";
		return (1);
	}catch(const Bureaucrat::GradeTooHightException& e)
	{
		std::cout<< e.what() << "\n";
		return (1);
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cout<< e.what() << "\n";
		return (1);
	}
	catch(const Form::GradeTooHightException& e)
	{
		std::cout<< e.what() << "\n";
		return (1);
	}
}