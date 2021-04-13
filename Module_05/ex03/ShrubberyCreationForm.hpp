/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:29:14 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/13 14:43:47 by mhaman           ###   ########lyon.fr   */
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

#endif