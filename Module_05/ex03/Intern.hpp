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
#endif