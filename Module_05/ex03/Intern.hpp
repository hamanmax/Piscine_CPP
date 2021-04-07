#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Intern 
{

	public:
		Intern();
		Intern(const Intern & copy);
		Intern & operator=(const Intern & op);
		~Intern();
		Form * makeForm(std::string const& form, std::string const& target);
};

Intern::Intern()
{

}

Intern::~Intern()
{

}

Intern::Intern(const Intern & copy){*this = copy;}

Intern & Intern::operator=(const Intern & op){
	(void)op;
	return *this;
}

Form				*makeShrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}
Form				*makeRobotomy(const std::string target)
{
	return (new RobotomyRequestForm(target));
}
Form				*makePardon(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form*	Intern::makeForm(std::string const& form, std::string const& target)
{
	std::string formnames[3] = {"Shrubbery Creation", "Roboto My Request", "Presidential Pardon"};
	Form *(*make[3])(std::string)= { makeShrubbery, makeRobotomy, makePardon};
	for (int i = 0; i < 3; i++)
	{
		if (formnames[i].compare(form) == 0)
		{
			std::cout << "Intern creates " << formnames[i] << "\n";
			return make[i](target);
		}
	}
	std::cout<<"Could not create Form\n";
	return (NULL);
}

#endif