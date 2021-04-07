#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Bobby("Bobby",1);

	Bureaucrat Tobby("Tobby",155555);
	Bobby.doPromote();
	std::cout << Bobby;
	Bureaucrat Jhonny("Jhonny",15);
	Bureaucrat J("J",1);
	J = Jhonny;
	std::cout << J;
}