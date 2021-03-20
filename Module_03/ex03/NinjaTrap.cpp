/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 11:01:53 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/20 12:59:10 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(){}

NinjaTrap::NinjaTrap(const NinjaTrap & cp){*this = cp;}

NinjaTrap & NinjaTrap::operator=(const NinjaTrap & op)
{
	if (this != &op)
	{
		this->_name = op._name;
		this->_hit_point = op._hit_point;
		this->_max_hit_point = op._max_hit_point;
		this->_energy_point = op._energy_point;
		this->_max_energy_point = op._max_energy_point;
		this->_melee_damage = op._melee_damage;
		this->_ranged_damage = op._ranged_damage;
		this->_armor_damage_reduction = op._armor_damage_reduction;
	}
	return *this;
}

NinjaTrap::~NinjaTrap(){}

NinjaTrap::NinjaTrap(std::string name)
{
	this->_hit_point = this->_melee_damage = this->_max_hit_point = 60;
	this->_energy_point = this->_max_energy_point = 120;
	this->_level = 1;
	this->_name = name;
	this->_ranged_damage = 5;
	this->_armor_damage_reduction = 0;
}

void NinjaTrap::ninjaShoebox(ClapTrap & box)
{
	
}
