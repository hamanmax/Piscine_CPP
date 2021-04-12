/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:24:01 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 17:25:01 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant():Enemy(170,"Super Mutant"){
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & copy):Enemy(copy._hp,copy._type){*this = copy;}

SuperMutant & SuperMutant::operator=(SuperMutant const & op){
	if (this != &op)
	{
		this->_hp = op._hp;
		this->_type = op._type;
	}
	return *this;
}

void SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}

SuperMutant::~SuperMutant(){
	std::cout << "Aaargh..." << std::endl;
}