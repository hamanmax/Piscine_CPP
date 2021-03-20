/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 16:34:17 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/20 18:39:50 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "\n\n\nINITIALISATION DU MODULE DE CREATION DE ROBOT\n\n\n" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const  & cp){*this = cp;}

ClapTrap & ClapTrap::operator=(ClapTrap const & op)
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

ClapTrap::~ClapTrap()
{
	std::cout << "\n\n\nDESTRUCTION DU MODULE DE CREATION DE ROBOT\n\n\n" << std::endl;
}


ClapTrap::ClapTrap(std::string name,int hp,uint mhp,int ep, uint mep,int level,int md,int rd,int adr): _name(name), _hit_point(hp), _max_hit_point(mhp), _energy_point(ep),_max_energy_point(mep),_level(level), _melee_damage(md),_ranged_damage(rd),_armor_damage_reduction(adr)
{
	std::cout << "\n\n\nINITIALISATION DU MODULE DE CREATION DE ROBOT\n\n\n" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount - _armor_damage_reduction > _max_hit_point)
		amount = 105;
	int realdamage = ((amount - _armor_damage_reduction) > 100) ? 0: (amount - _armor_damage_reduction);
	this->_hit_point = (this->_hit_point - realdamage > 0) ? this->_hit_point - realdamage : 0;
	std::cout << "AIE !!! Vous m'avez toucher c'est pas cool, J'ai perdu "<< realdamage << " HP\n" << "Il me reste " << this->_hit_point << " HP\n" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (amount > _max_hit_point)
		amount = _max_hit_point;
	this->_hit_point = (this->_hit_point + amount > (unsigned int)_max_hit_point) ? 100 : (this->_hit_point + amount);
	std::cout << "Hey Venez on fait pause que je puisse me reparer... C'est bon j'ai recuperer " << (int)amount << " HP\n" << "J'ai maintenant " << this->_hit_point << " HP\n" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << _name << " Attaque gros coup de poing dans la gueule de " << target << " Lui fesant bobo de " << _melee_damage << "\n" << std::endl;
}

void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << _name << " Attaque de laser piou piou bang sur " << target << " Lui fesant bobo de " << _ranged_damage << "\n" << std::endl;
}
