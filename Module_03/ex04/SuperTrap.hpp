/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 11:02:50 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/24 17:17:19 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERCLAP_HPP
#define SUPERCLAP_HPP
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class SuperTrap : virtual public NinjaTrap, virtual public FragTrap
{
private:
	/* data */
public:
	SuperTrap();
	SuperTrap(SuperTrap const & copy);
	SuperTrap & operator=(SuperTrap const & op);
	~SuperTrap();

	SuperTrap(std::string name);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
};

void SuperTrap::rangedAttack(std::string const & target){
	return(ClapTrap::rangedAttack(target,"Frag"));
}

void SuperTrap::meleeAttack(std::string const & target){
	return(ClapTrap::meleeAttack(target,"Ninja"));
}
SuperTrap::SuperTrap(SuperTrap const & copy){*this = copy;}

SuperTrap & SuperTrap::operator=(SuperTrap const & op)
{
	if (this != &op)
	{
		this->_name = op._name;
		this->_level =op._level;
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

SuperTrap::SuperTrap():ClapTrap(100,100,120,120,1,"empty",60,20,5), NinjaTrap("empty"),FragTrap("empty")
{
	std::cout << "Creation D'un SuperTrap Pour de Super Resultat Pour ramener la terre dans un Super etat" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "Destruction d'un SuperTrap [...] la terr[...]ible etat" << std::endl;
}
SuperTrap::SuperTrap(std::string name):ClapTrap(100,100,120,120,1,name,60,20,5), NinjaTrap(name),FragTrap(name)
{
	std::cout << "Creation D'un SuperTrap Pour de Super Resultat Pour ramener la terre dans un Super etat" << std::endl;
}


#endif