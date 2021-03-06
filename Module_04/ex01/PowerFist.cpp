/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:23:36 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 17:23:43 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist():AWeapon("Power Fist",8,50){}

PowerFist::PowerFist(const PowerFist & copy):AWeapon("Power Fist",8,50){*this = copy;}

PowerFist & PowerFist::operator=(const PowerFist & op){
	if (this != &op)
	{
		this->_apcost = op._apcost;
		this->_damage = op._damage;
		this->_name = op._name;
	}
	return *this;
}

PowerFist::~PowerFist(){}

void PowerFist::attack() const{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}