/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 10:59:48 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/23 14:11:23 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <ctime>

ZombieHorde::ZombieHorde(int n)
{
	if (n > 0)
	{
		nbzombie = n;
		Z = new Zombie[nbzombie];
		for(int i = 0;i < n;i++)
			Z[i] = newZombie();
	}
	else
		nbzombie = 0;
}

ZombieHorde::~ZombieHorde(){
	std::cout << "\nDESTRUCTION DE LA HORDE" << std::endl;
	deleteptr();
	}

Zombie ZombieHorde::newZombie()
{
	std::string type[10] = {"Witch","Tank","Boomer","Jockey","Hunter","Spitter","Charger","Smoker","Boomer","Commom"};
	std::string name[10] = {"Maximilien","Aurelien","Corentin","Thomas","Thibault","Paul","Wassim","Quentin","Martin","Matheo"};
	Zombie newZombie = Zombie(type[(rand() % 10)],name[(rand() % 10)]);
	return(newZombie);
}

void ZombieHorde::deleteptr()
{
	delete[] Z;
}

void ZombieHorde::announce()
{
	for (int i = 0; i < nbzombie; i++)
		Z[i].announce();
}