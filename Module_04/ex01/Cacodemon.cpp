/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cacodemon.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:16:17 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 17:16:50 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cacodemon.hpp"


Cacodemon::Cacodemon():Enemy(180,"Cacodemon"){
	std::cout << "* growl growl growl *" << std::endl;
}

Cacodemon::Cacodemon(Cacodemon const & copy):Enemy(copy._hp,copy._type){*this = copy;}

Cacodemon & Cacodemon::operator=(Cacodemon const & op){
	if (this != &op)
	{
		this->_hp = op._hp;
		this->_type = op._type;
	}
	return *this;
}

Cacodemon::~Cacodemon(){
	std::cout << " Orggggg..." << std::endl;
}