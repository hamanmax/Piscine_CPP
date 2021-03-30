/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 10:12:44 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/30 15:44:21 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include "ICharacter.hpp"
class AMateria 
{
	private:
		unsigned int _xp;
		std::string _type;
	protected:
		/*Arg*/
	public:

		AMateria(std::string const & type);
		AMateria(AMateria const & copy);
		AMateria & operator=(AMateria const & op);
		virtual ~AMateria(){}

		std::string const & getType() const;
		unsigned int getXP() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

AMateria::AMateria(AMateria const & copy):AMateria(copy._type){*this = copy;}

AMateria & AMateria::operator=(AMateria const & op){
	return *this;
}

AMateria::AMateria(std::string & type):_type(type){}

std::string const & AMateria::getType()const {
	return(this->_type);
}
unsigned int AMateria::getXP() const {
	return(this->_xp);
}


void AMateria::use(ICharacter& target){}

#endif