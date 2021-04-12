/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:27:05 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 20:27:12 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(AMateria const & copy):_xp(copy._xp),_type(copy._type){*this = copy;}

AMateria & AMateria::operator=(AMateria const & op){
	this->_xp = op._xp;
	return *this;
}

AMateria::AMateria(std::string const & type):_xp(0),_type(type){}

std::string const & AMateria::getType()const {
	return(this->_type);
}
unsigned int AMateria::getXP() const {
	return(this->_xp);
}


void AMateria::use(ICharacter& target){
	std::cout << "use Materia on " << target.getName() << "\n";
}
