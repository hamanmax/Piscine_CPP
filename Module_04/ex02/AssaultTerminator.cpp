/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:19:00 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 18:19:05 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(){
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & copy){*this = copy;}

AssaultTerminator & AssaultTerminator::operator=(AssaultTerminator const & op){
	(void)op;
	return *this;
}

AssaultTerminator::~AssaultTerminator(){
	std::cout << "I'll be back..." << std::endl;
}

void AssaultTerminator::battleCry()const {
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}
void AssaultTerminator::rangedAttack()const {
	std::cout << "* does nothing *" << std::endl;
}
void AssaultTerminator::meleeAttack()const {
	std::cout << "* attacks with chainfists *" << std::endl;
}
ISpaceMarine * AssaultTerminator::clone() const{
	ISpaceMarine * cloned = new AssaultTerminator(*this);
	return cloned;
}