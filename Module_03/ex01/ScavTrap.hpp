/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:52:10 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/19 15:42:21 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>

class ScavTrap
{
private:
	int				_hit_point;
	unsigned int	_max_hit_point;
	int				_energy_point;
	unsigned int	_max_energy_point;
	int				_level;
	std::string		_name;
	int				_melee_damage;
	int				_ranged_damage;
	int				_armor_damage_reduction;
public:
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer();
	ScavTrap(std::string name);
	~ScavTrap();
};

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Initialisation de " << name << " En cours Veuilliez Patientez Cette construction peut durer " << (rand() % 10000) << " ans\n" << std::endl;
	this->_name = name;
	this->_hit_point = this->_max_hit_point = 100;
	this->_energy_point = this->_max_energy_point = 50;
	this->_melee_damage = 20;
	this->_ranged_damage = 15;
	this->_armor_damage_reduction = 3;
	std::cout << "Hello Je suis " << name << " Droide de combat level " << _level << " Pour vous servir !\n" << std::endl;
}

ScavTrap::~ScavTrap(){};

void ScavTrap::takeDamage(unsigned int amount)
{
	int realdamage = ((amount - _armor_damage_reduction) > 100) ? 0: (amount - _armor_damage_reduction);
	std::cout << realdamage << std::endl;
	this->_hit_point = (this->_hit_point - realdamage > 0) ? this->_hit_point - realdamage : 0;
	std::cout << "AIE !!! Vous m'avez toucher c'est pas cool, J'ai perdu "<< realdamage << " HP\n" << "Il me reste " << this->_hit_point << " HP\n" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{

	this->_hit_point = (this->_hit_point + amount > (unsigned int)_max_hit_point) ? 100 : (this->_hit_point + amount);
	std::cout << "Hey Venez on fait pause que je puisse me reparer... C'est bon j'ai recuperer " << (int)amount << " HP\n" << "J'ai maintenant " << this->_hit_point << " HP\n" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << _name << " Attaque gros coup de poing dans la gueule de " << target << " Lui fesant bobo de " << _melee_damage << "\n" << std::endl;
}

void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << _name << " Attaque de laser piou piou bang sur " << target << " Lui fesant bobo de " << _ranged_damage << "\n" << std::endl;
}

void ScavTrap::challengeNewcomer()
{
	std::cout << "Bonjour Voyageur Je suis " << _name << ". Avant de pourvoir rentrer dans ce repere machiavelique super secret tu doit d'abord reussir ce challenge\n" << std::endl;
	int mg = rand() % 4;
	mg = 1;
	if (mg == 0)
	{
		std::string headup[] = {"Pile","Face"};
		std::string playerchoice;
		
		while (1)
		{
			int choice = rand() % 2;
			std::cout << "Bienvenue dans cette partie de Pile ou Face Trouve la face sur la quel la piece va tomber du sol\n\n" << "Pile ou Face :";
			std::cin >> playerchoice;
			std::cout << "\n* Lance la piece *\n" << std::endl;
			std::cout << "La piece est tombe du cote " << headup[choice] << std::endl;
			if (headup[choice] == playerchoice)
			{
				std::cout << "Bravo tu as gagner tu peut entrer" << std::endl;
				break ;
			}
			else
				std::cout << "Pas de chance, on recommence " << std::endl;
		}
	}
	else if (mg == 1)
	{
		int score;
		int playerscore;
		std::string str;
		std::cout << "Bienvenue dans cette partie de dé Lance un dé si ton score est superieur au mien tu peut rentrer\n" << std::endl;
		while (1)
		{
			score = rand() % 6 + 1;
			std::cout << "* Lance le dé *\n J'ai fait " << score << " A ton tour" << std::endl;
			getline(std::cin,str);
			playerscore = rand() % 6 + 1;
			std::cout << " Tu as Fait " << playerscore << std::endl;
			if (score >= playerscore)
				std::cout << "J'ai gagner on recommence" << std::endl;
			else
			{
				std::cout << "Bravo tu as gagner tu peut entrer" << std::endl;
				break ;
			}
		}
	}
	else if (mg == 2)
	{
		std::string headup[] = {"Pierre","Feuille","Ciseaux"};
		std::string playerchoice;
		while (1)
		{
			int choice = rand() % 3;
			std::cout << "Bienvenue dans cette partie de Pierre Feuille Ciseaux\nChoisit ton coup Pierre/Feuille/Ciseaux :";
			std::cin >> playerchoice;
			std::cout << "\n* LA TENSION S'INTENSIFIE *\n" << std::endl;
			std::cout << _name << " a choisit " << headup[choice] << " L'inconnu a choisit " << playerchoice << std::endl;
			if ((headup[choice] == "Feuille" && playerchoice == "Ciseaux") || (headup[choice] == "Pierre" && playerchoice == "Feuille") || (headup[choice] == "Ciseaux" && playerchoice == "Pierre"))
			{
				std::cout << "\nBravo tu as gagner tu peut entrer\n" << std::endl;
				break ;
			}
			else if (playerchoice == "Puit")
				std::cout << "\nC'est pas sympa de tricher on recommence\n" << std::endl;
			else if (playerchoice == headup[choice])
				std::cout << "\nMatch nul on recommence\n";
			else
				std::cout << "Pas de chance, on recommence " << std::endl;
		}
	}
	else
	{
		int mysterynb = rand() % 100 + 1;
		int playernb;
		std::string playerchoice;
		std::cout << "Bienvenue dans cette partie du nombre mystère\nJe choisit un nombre entre 1 et 100 et tu doit le trouver\n";
		while (1)
		{
			std::cout << "choisit un nombre : ";
			getline(std::cin,playerchoice);
			playernb = std::atoi(playerchoice.c_str());
			if (mysterynb > playernb)
				std::cout << "C'est plus" << std::endl;
			else if (mysterynb < playernb)
				std::cout << "C'est moin" << std::endl;
			else
			{
				std::cout << "Bravo tu as gagner tu peut entrer" << std::endl;
				break ;
			}
		}
	}
}

#endif