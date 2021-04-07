/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 15:27:14 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/05 17:20:01 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICE_HPP
#define ICE_HPP
#include <iostream>
#include "AMateria.hpp"

class Ice: virtual public AMateria
{
	private:
		unsigned int _xp;
		std::string _type;
	protected:
		/*Arg*/
	public:
		Ice();
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

Ice::Ice():AMateria("ice"){}

Ice::Ice(const Ice & copy):AMateria(copy.getType()){*this = copy;}

Ice & Ice::operator=(const Ice & op)
{
	this->_type = op._type;
	this->_xp = op._xp;
	return *this;
}

Ice::Ice(std::string type):AMateria(type){
}

std::string const & Ice::getType() const{
	return(this->_type);
}
unsigned int Ice::getXP() const{
	return(this->_xp);
}

AMateria* Ice::clone() const {
	AMateria * clone = new Ice("ice");
	return clone;
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << "\n";
	_xp += 10;
}

#endif