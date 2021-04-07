#include "Bureaucrat.hpp"

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "Form.hpp"
int main()
{
	srand (time(NULL));
		Intern     akerdeka;
		Bureaucrat tmp("tulipe", 1);
		Bureaucrat tmp1("tups", 125);
		ShrubberyCreationForm form("asciiart");
		RobotomyRequestForm form1("testing");
		PresidentialPardonForm form2("yessir");
		Form * tester;
		tester = akerdeka.makeForm("robotomy request", "Yo");
		if (tester != NULL)
		{
			tmp.executeForm(*tester);
			tmp.signForm(*tester);
			tmp.executeForm(*tester);
			std::cout << *tester;
		}
		std::cout << tmp;
		tmp1.signForm(form);
		tmp.signForm(form);
		tmp1.executeForm(form);
		tmp.executeForm(form);
		tmp.executeForm(form);
		tmp1.signForm(form1);
		tmp.signForm(form1);
		tmp1.executeForm(form1);
		tmp.executeForm(form1);
		tmp.executeForm(form1);
		tmp1.signForm(form2);
		tmp.signForm(form2);
		tmp1.executeForm(form2);
		tmp.executeForm(form2);
		tmp.executeForm(form2);
}