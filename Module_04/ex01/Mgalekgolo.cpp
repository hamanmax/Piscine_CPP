/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mgalekgolo.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:20:58 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 17:21:46 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Mgalekgolo.hpp"

Mgalekgolo::Mgalekgolo():Enemy(250,"Hunter"){
	std::cout << "* strange worms noises *" << std::endl;
}

Mgalekgolo::Mgalekgolo(Mgalekgolo const & copy):Enemy(copy._hp,copy._type){*this = copy;}

Mgalekgolo & Mgalekgolo::operator=(Mgalekgolo const & op){
	if (this != &op)
	{
		this->_hp = op._hp;
		this->_type = op._type;
	}
	return *this;
}

void Mgalekgolo::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 15);
}

Mgalekgolo::~Mgalekgolo(){
	std::cout << "A swarm of worms dig in the ground" << std::endl;
}