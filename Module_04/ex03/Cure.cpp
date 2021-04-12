/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:28:02 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 20:28:09 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria("cure"){}

Cure::~Cure(){}

Cure::Cure(const Cure & copy):AMateria(copy.getType()){*this = copy;}

Cure & Cure::operator=(const Cure & op){
	this->_xp = op._xp;
	this->_type = op._type;
	return *this;
}

Cure::Cure(std::string type):AMateria(type){}

std::string const & Cure::getType() const{
	return(this->_type);
}
unsigned int Cure::getXP() const{
	return(this->_xp);
}

AMateria* Cure::clone() const {
	AMateria * clone = new Cure("cure");
	return clone;
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "’s wounds *" << "\n";
	_xp += 10;
}
