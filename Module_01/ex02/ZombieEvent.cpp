/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 17:16:13 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/23 13:50:19 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent(/* args */){
	std::cout << "Creation De L'événement\n" << std::endl;
}

ZombieEvent::~ZombieEvent(){
	std::cout << "Suppression De L'événement\n" << std::endl;
}

void ZombieEvent::setZombieType(std::string zombietype){type = zombietype;}

Zombie * ZombieEvent::newZombie(std::string name)
{
	Zombie * z = new Zombie(type, name);
	return (z);
}

void ZombieEvent::announce(std::string name,std::string type)
{
	std::cout << "Hey I am " << name << " Zombie of type " << type << "... BRAINSSSS\n" << std::endl;
}

void ZombieEvent::randomChump()
{
	std::string type[10] = {"Witch","Tank","Boomer","Jockey","Hunter","Spitter","Charger","Smoker","Boomer","Commom"};
	std::string name[10] = {"Maximilien","Aurelien","Corentin","Thomas","Thibault","Paul","Wassim","Quentin","Martin","Matheo"};
	int nameindex,typeindex;
	srand(time(NULL));
	typeindex = rand() % 10;
	nameindex = rand() % 10;
	setZombieType(type[typeindex]);
	Zombie * Zombie = newZombie(name[nameindex]);
	announce(name[nameindex],type[typeindex]);
	delete Zombie;
}