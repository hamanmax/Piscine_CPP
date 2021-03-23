/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 17:16:03 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/23 13:43:44 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	srand(time(NULL));
	std::string type[10] = {"Witch","Tank","Boomer","Jockey","Hunter","Spitter","Charger","Smoker","Boomer","Commom"};
	std::string name[10] = {"Maximilien","Aurelien","Corentin","Thomas","Thibault","Paul","Wassim","Quentin","Martin","Matheo"};
	int nbr;
	std::cout << "### Creation de Zevent l'evenement de l'argent des Zombies ###\n" << std::endl;
	ZombieEvent Zevent;
	std::cout << "### Changement du type du zombie ###\n" << std::endl;
	Zevent.setZombieType(type[(rand() % 10)]);
	nbr = rand() % 10;
	std::cout << "### Creation d'un zombie grace a notre super fonction newZombie ###\n" << std::endl;
	Zombie *tutu = Zevent.newZombie(name[nbr]);
	tutu->advert();
	delete tutu;
	std::cout << "### Creation D'un nouveau zombie de la mort qui tue grâce au random ###\n" << std::endl;
	Zevent.randomChump();	
	return 0;
}
