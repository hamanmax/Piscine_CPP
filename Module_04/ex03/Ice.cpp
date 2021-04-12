/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:28:25 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 20:28:32 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

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
