/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 11:02:50 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/20 18:43:57 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERCLAP_HPP
#define SUPERCLAP_HPP
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class SuperTrap :  public NinjaTrap,  public FragTrap
{
private:
	/* data */
public:
	SuperTrap();
	SuperTrap(SuperTrap const & copy);
	SuperTrap & operator=(SuperTrap const & op);
	~SuperTrap();

	SuperTrap(std::string name);
};

SuperTrap::SuperTrap(/* args */)
{
}

SuperTrap::SuperTrap(SuperTrap const & copy){*this = copy;}

SuperTrap & SuperTrap::operator=(SuperTrap const & op)
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

SuperTrap::~SuperTrap()
{
}

SuperTrap::SuperTrap(std::string name):ClapTrap(), NinjaTrap(name),FragTrap(name)
{
	this->_name = name; 
	this->_hit_point = this->_max_hit_point = 100;
	this->_energy_point = this->_max_energy_point = 120;
	this->_melee_damage = 60;
	this->_ranged_damage = 20;
	this->_armor_damage_reduction = 5;
	this->_level = 1;
}


#endif