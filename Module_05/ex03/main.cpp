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
		Bureaucrat Jean("Jean", 1);
		Bureaucrat Jacques("Jacques", 125);
		ShrubberyCreationForm Tree("Arbre");
		ShrubberyCreationForm Fraises("Fraise");
		RobotomyRequestForm Kill("Wassim");
		PresidentialPardonForm Pardon("Thomas VDB");
		Form * tester;
		tester = akerdeka.makeForm("robotomy request", "Yo");
		if (tester != NULL)
		{
			Jean.executeForm(*tester);
			Jean.signForm(*tester);
			Jean.executeForm(*tester);
			std::cout << *tester;
		}
		std::cout << Jean;
		Jacques.signForm(Tree);
		Jean.signForm(Tree);
		Jacques.executeForm(Fraises);
		Jean.executeForm(Tree);
		Jacques.signForm(Kill);
		Jean.signForm(Kill);
		Jacques.executeForm(Kill);
		Jean.executeForm(Kill);
		Jean.executeForm(Kill);
		Jean.executeForm(Kill);
		Jean.executeForm(Kill);
		Jacques.signForm(Pardon);
		Jean.signForm(Pardon);
		Jacques.executeForm(Pardon);
		Jean.executeForm(Pardon);
		Jean.executeForm(Pardon);
}