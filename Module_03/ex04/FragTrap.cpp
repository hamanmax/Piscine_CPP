/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 10:50:19 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/22 17:22:41 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <cstdlib>

FragTrap::FragTrap(){}

FragTrap::FragTrap(const FragTrap & cp){*this = cp;}

FragTrap & FragTrap::operator=(const FragTrap & op)
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

FragTrap::~FragTrap()
{
	std::cout << "TRAVAIL TERMINER" << std::endl;
}



FragTrap::FragTrap(std::string name):ClapTrap(name,100,100,100,100,1,30,20,5)
{
	std::cout << "Initialisation de " << name << " En cours Veuilliez Patientez Cette construction peut durer " << (rand() % 10000) << " ans\n" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string Attack[] = {"Coup de la corde a linge","/dev/random","Petit milliers de claques dans la gueule","1000 ans de souffrance","GOMU GOMU BAZOOKAAAAAAAAAA"};
	std::string Damage[] = {"3 damage","9999999999999999999SEGFAULT","1 damage par claque = 1000", "it's over 9000 damage","3.14159 damage"};
	int random = rand() % 5;
	_energy_point = (_energy_point - 25 > 0)? _energy_point - 25 : 0;
	if (_energy_point > 0)
		std::cout << _name << " Attaque " << Attack[random] << " Il occasionne " << Damage[random] << " à " << target << "\n" << std::endl;
	else
		std::cout << "J'ai plus d'energie faut que je me recharge\n" << std::endl;
}