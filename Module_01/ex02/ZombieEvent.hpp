/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 17:16:19 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/17 11:43:44 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP
#include <iostream>
#include "Zombie.hpp"
class ZombieEvent
{
private:
	std::string type;
public:
	void setZombieType(std::string zombietype);
	void randomChump();
	void announce(std::string name,std::string type);
	Zombie* newZombie(std::string name);
	ZombieEvent(/* args */);
	~ZombieEvent();
};

#endif