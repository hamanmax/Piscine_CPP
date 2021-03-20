/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 11:08:26 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/20 18:43:16 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(){}

NinjaTrap::NinjaTrap(NinjaTrap const  & cp)
{*this = cp;}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & op)
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


// const int NinjaTrap::getNinjaHitPoint() const
// {
// 	return(this->_hit_point);
// }

NinjaTrap::NinjaTrap(std::string name):ClapTrap(name,60,60,120,120,1,60,5,0){}

void NinjaTrap::ninjaShoebox(ClapTrap & box)
{
	box.takeDamage(8);
}


