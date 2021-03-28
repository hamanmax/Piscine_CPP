/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 10:12:44 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/28 11:49:45 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include "ICharacter.hpp"

class AMateria 
{
	private:
		AMateria();
		unsigned int _xp;
		std::string _type;
	protected:
		/*Arg*/
	public:
		AMateria(AMateria const & copy);
		AMateria & operator=(AMateria const & op);
		virtual ~AMateria();

		AMateria(std::string & type);

		std::string const & getType() const;
		unsigned int getXP() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter & target);
};

AMateria::AMateria():_xp(0)_type(NULL){}

AMateria::AMateria(AMateria const & copy){*this = copy;}

AMateria & AMateria::operator=(AMateria const & op){
}

AMateria::~AMateria(){}

std::string const & AMateria::getType()const {
	return(this->_type);
}
unsigned int AMateria::getXP() const {
	return(this->_xp);
}
void AMateria::use(ICharacter & target) {
	target.use(0,target);
	this->_xp += 10;
}

#endif