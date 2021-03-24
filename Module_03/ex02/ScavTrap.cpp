/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 16:29:28 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/24 16:10:33 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap(100,100,50,50,1,0,20,15,3){}

ScavTrap::ScavTrap(const ScavTrap & cp){*this = cp;}

ScavTrap & ScavTrap::operator=(const ScavTrap & op)
{
	if (this != &op)
	{
		this->_name = op._name;
		this->_level = op._level;
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

ScavTrap::~ScavTrap(){
	std::cout << "Alors comme ca c'est a mon tour de prendre la porte \n" << std::endl;
};

ScavTrap::ScavTrap(std::string name):ClapTrap(100,100,50,50,1,name,20,15,3)
{
	std::cout << "Construction en cours de " << this->_name << " Teneur de porte de la mort level " << _level << std::endl;
}


void ScavTrap::challengeNewcomer()
{
	std::cout << "Bonjour Voyageur Je suis " << this->_name << ". Avant de pourvoir rentrer dans ce repère machiavelique super secret tu doit d'abord reussir ce challenge\n" << std::endl;
	int mg = rand() % 4;
	if (mg == 0)
	{
		std::string headup[] = {"Pile","Face"};
		std::string playerchoice;
		
		while (1)
		{
			int choice = rand() % 2;
			std::cout << "Bienvenue dans cette partie de Pile ou Face Trouve la face sur la quel la piece va tomber du sol\n\n" << "Pile ou Face :";
			getline(std::cin,playerchoice);
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
			getline(std::cin,playerchoice);
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