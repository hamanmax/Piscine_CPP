/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 10:50:19 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/24 15:25:40 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():_hit_point(100),_max_hit_point(100),_energy_point(100),_max_energy_point(100),_level(1),_name(0),_melee_damage(30),_ranged_damage(20),_armor_damage_reduction(5){}

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
	std::cout << "\n\n\t\t\t\tI'LL BE BACK\n\n" << std::endl;
}

FragTrap::FragTrap(std::string name):_hit_point(100),_max_hit_point(100),_energy_point(100),_max_energy_point(100),_level(1),_name(name),_melee_damage(30),_ranged_damage(20),_armor_damage_reduction(5)
{
	std::cout << "Initialisation de " << this->_name << " En cours Veuilliez Patientez Cette construction peut durer " << (rand() % 10000) << " ans\n" << std::endl;
	std::cout << "Hello Je suis " << this->_name << " Droide de combat level " << this->_level << " Pour vous servir !\n" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	int realdamage;
	if (amount > this->_max_hit_point + this->_armor_damage_reduction)
		amount = this->_max_hit_point + this->_armor_damage_reduction;
	realdamage = amount - this->_armor_damage_reduction;
	if (realdamage < 0){realdamage = 0;}
	this->_hit_point -= realdamage;
	if (this->_hit_point < 0)
		this->_hit_point = 0;
	std::cout << "AIE !!! Vous m'avez toucher c'est pas cool, J'ai perdu "<< realdamage << " HP." << " Il me reste " << this->_hit_point << " HP\n" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (amount > this->_max_hit_point)
		amount = this->_max_hit_point;
	this->_hit_point = this->_hit_point + amount > this->_max_hit_point ? this->_max_hit_point : this->_hit_point + amount;
	std::cout << "Hey Venez on fait pause que je puisse me reparer... C'est bon j'ai recuperer " << amount << " HP. " << "J'ai maintenant " << this->_hit_point << " HP\n" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << this->_name << " Attaque gros coup de poing dans la gueule de " << target << " Lui fesant bobo de " << this->_melee_damage << "\n" << std::endl;
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << this->_name << " Attaque de laser piou piou bang sur " << target << " Lui fesant bobo de " << this->_ranged_damage << "\n" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string Attack[] = {"Coup de la corde a linge","/dev/random","Petit milliers de claques dans la gueule","1000 ans de souffrance","GOMU GOMU BAZOOKAAAAAAAAAA"};
	std::string Damage[] = {"3 damage","9999999999999999999SEGFAULT","1 damage par claque = 1000", "it's over 9000 damage","3.14159 damage"};
	int random = rand() % 5;
	this->_energy_point -= 25;
	if (this->_energy_point >= 0)
		std::cout << this->_name << " Attaque " << Attack[random] << " Il occasionne " << Damage[random] << " à " << target << "\n" << std::endl;
	else 
		std::cout << "Apres une superbe chorégraphie " << this->_name << " essaie de lancer une attaque mais rien ne se passe\n" << std::endl;
	if (this->_energy_point < 0)
		this->_energy_point = 0;
}
