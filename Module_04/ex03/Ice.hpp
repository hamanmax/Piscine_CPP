/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 15:27:14 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/30 15:28:39 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICE_HPP
#define ICE_HPP
#include <iostream>
#include "AMateria.hpp"

class Ice: virtual public AMateria
{
	private:
		Ice();
		unsigned int _xp;
		std::string _type;
	protected:
		/*Arg*/
	public:
		Ice(const Ice & copy);
		Ice & operator=(const Ice & op);
		~Ice();

		Ice(std::string type);

		std::string const & getType() const;
		unsigned int getXP() const;
		AMateria* clone() const;
		void use(ICharacter& target);
};

Ice::~Ice(){}

Ice::Ice(const Ice & copy):AMateria(copy.getType()){*this = copy;}

Ice & Ice::operator=(const Ice & op){
}

Ice::Ice(std::string type):AMateria(type){}

std::string const & Ice::getType() const{
	return(this->_type);
}
unsigned int Ice::getXP() const{
	return(this->_xp);
}

AMateria* Ice::clone() const {}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	_xp += 10;
}

#endif