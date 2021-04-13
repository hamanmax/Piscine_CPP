#include <iostream>
#include <stdexcept>
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Jhon("Jhon",25);
	Bureaucrat Tim("Tim",95);


	Bureaucrat Error1("Jhon",0);
	Bureaucrat Error2("Tim",155);

	Form Permit("A2",60);
	Form Contrat("Travail",20);

	Form ErrorF("A2",0);
	Form Error2F("Travail",155);

	Jhon.signForm(Permit);
	Jhon.signForm(Contrat);
	Tim.signForm(Contrat);
	while(Jhon.getGrade() > Contrat.getSign())
	{
		Jhon.doPromote();
	}
	Jhon.signForm(Contrat);
}