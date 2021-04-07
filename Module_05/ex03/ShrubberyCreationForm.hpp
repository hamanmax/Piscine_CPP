/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:29:14 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/05 17:20:14 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : virtual public Form
{
	private:
		ShrubberyCreationForm();
	protected:
		/*Arg*/
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & copy);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & op);
		~ShrubberyCreationForm();
		void execute(Bureaucrat const& executor) const;
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form(target,"ShrubberyCreation",145,137){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy):Form(copy.getTarget(),copy.getName(),copy.getSign(),copy.getExe()){*this = copy;}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & op){
	(void)op;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}


void ShrubberyCreationForm::execute(Bureaucrat const & target) const
{
	try
	{
		if (this->getStatus() == true && target.getGrade() <= this->getExe())
		{
			std::string berry = target.getName() + "_shrubbery";
			std::ofstream shruberry(berry.c_str());
			shruberry << "\n       _-_\n    /~~   ~~\\\n /~~         ~~\\\n{               }\n \\  _-     -_  /\n   ~  \\ //  ~\n_- -   | | _- _\n  _ -  | |   -_\n      // \\\n" << "\n";
			shruberry << "       ###\n      #o###\n    #####o###\n   #o#\\#|#/###\n    ###\\|/#o#\n     # }|{  #\n       }|{\n" << "\n";
		}
		else if (this->getStatus() == false)
			throw Form::FormIsNotSigned();
		else
			throw Form::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cout << "<" << target.getName() << "> can't execute <"<< this->getName() << "> because " << e.what() << '\n';
	}
}
#endif