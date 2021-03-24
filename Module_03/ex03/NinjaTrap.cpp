/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 11:01:53 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/24 16:26:35 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap():ClapTrap(60,60,120,120,1,0,60,5,0){}

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

NinjaTrap::~NinjaTrap()
{
	std::cout << "Une boule de fumee epaisse aparait et " << this->_name << " disparait" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name):ClapTrap(60,60,120,120,1,name,60,5,0)
{
	std::cout << " Creation en cours d'un .... NINJAAAAA prenomme " << this->_name << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap & box)
{
	std::cout << this->_name << "le ninja sort d'une boite a chaussure bizarre une boite de chaussure bizarre " << std::endl;
	box.takeDamage(20);
}
void NinjaTrap::ninjaShoebox(ScavTrap & box)
{
	std::cout << this->_name << " le ninja sort d'une boite a chaussure bizarre une porte geante et attaque " << box.get_name() << std::endl;
	box.takeDamage(40);
}
void NinjaTrap::ninjaShoebox(FragTrap & box)
{
	std::cout << this->_name << " le ninja sort d'une boite a chaussure bizarre un Lance Rocket et attaque " << box.get_name() << std::endl;
	box.takeDamage(40);
}
void NinjaTrap::ninjaShoebox(NinjaTrap & box)
{
	std::cout << this->_name << " le ninja sort d'une boite a chaussure bizarre un Kunai et un Shuriken et attaque \n" << box.get_name() << std::endl;
	box.takeDamage(40);
}