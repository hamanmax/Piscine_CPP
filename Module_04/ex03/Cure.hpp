/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 14:57:33 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/05 17:20:01 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include <iostream>
#include "AMateria.hpp"

class Cure: virtual public AMateria
{
	private:
		unsigned int _xp;
		std::string _type;
	protected:
		/*Arg*/
	public:
		Cure();
		Cure(const Cure & copy);
		Cure & operator=(const Cure & op);
		~Cure();

		Cure(std::string type);

		std::string const & getType() const;
		unsigned int getXP() const;
		AMateria* clone() const;
		void use(ICharacter& target);
};

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

#endif