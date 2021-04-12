/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:21:18 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 18:21:29 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(){
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & copy){*this = copy;}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const & op){
	(void)op;
	return *this;
}

TacticalMarine::~TacticalMarine(){
	std::cout << "Aaargh..." << std::endl;
}

void TacticalMarine::battleCry()const {
	std::cout << "For the holy PLOT!" << std::endl;
}
void TacticalMarine::rangedAttack()const {
	std::cout <<  "* attacks with a bolter *" << std::endl;
}
void TacticalMarine::meleeAttack()const {
	std::cout <<  "* attacks with a chainsword *" << std::endl;
}

ISpaceMarine * TacticalMarine::clone() const{
	ISpaceMarine * cloned = new TacticalMarine(*this);
	return cloned;
}