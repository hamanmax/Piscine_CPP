/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnergySword.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:20:24 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 17:20:34 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "EnergySword.hpp"

EnergySword::EnergySword():AWeapon("Energy Sword",10,25){}
 
EnergySword::EnergySword(EnergySword const & copy):AWeapon(copy._name,copy._apcost,copy._damage){*this = copy;}

EnergySword & EnergySword::operator=(EnergySword const & op){
	if (this != &op)
	{
		this->_apcost = op._apcost;
		this->_damage = op._damage;
		this->_name = op._name;
	}
	return *this;
}

void EnergySword::attack()const{
std::cout << "* Zwiff Zwiff Zwiff *" << std::endl;
}

EnergySword::~EnergySword(){}