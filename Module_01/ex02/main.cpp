/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 17:16:03 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/17 07:28:14 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(int argc, char const *argv[])
{
	srand(time(NULL));
	std::string type[10] = {"Witch","Tank","Boomer","Jockey","Hunter","Spitter","Charger","Smoker","Boomer","Commom"};
	std::string name[10] = {"Maximilien","Aurelien","Corentin","Thomas","Thibault","Paul","Wassim","Quentin","Martin","Matheo"};
	int nbr;
	ZombieEvent Zevent = ZombieEvent();
	Zevent.setZombieType(type[(rand() % 10)]);
	nbr = rand() % 10;
	Zombie *tutu = Zevent.newZombie(name[nbr]);
	tutu->advert();
	delete tutu;
	Zevent.randomChump();
	return 0;
}
