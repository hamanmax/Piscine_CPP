/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 10:50:19 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/24 14:49:08 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap():ClapTrap(0,0,0,0,0,0,0,0,0){}

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
		this->_level = op._level;
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "I'LL BE BACK" << std::endl;
}
FragTrap::FragTrap(std::string name):ClapTrap(100,100,100,100,1,name,30,20,5)
{
	std::cout << "Initialisation de " << name << " En cours Veuilliez Patientez Cette construction peut durer " << (rand() % 10000) << " ans\n" << std::endl;
	std::cout << "Hello Je suis " << name << " Droide de combat level " << _level << " Pour vous servir !\n" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string Attack[] = {"Coup de la corde a linge","/dev/random","Petit milliers de claques dans la gueule","1000 ans de souffrance","GOMU GOMU BAZOOKAAAAAAAAAA"};
	std::string Damage[] = {"3 damage","9999999999999999999SEGFAULT","1 damage par claque = 1000", "it's over 9000 damage","3.14159 damage"};
	int random = rand() % 5;

	this->_energy_point = (this->_energy_point - 25 > 0)? _energy_point - 25 : 0;
	if (this->_energy_point >= 0)
		std::cout << this->_name << " Attaque " << Attack[random] << " Il occasionne " << Damage[random] << " à " << target << "\n" << std::endl;
	else
		std::cout << "J'ai plus d'energie faut que je me recharge\n" << std::endl;
}

