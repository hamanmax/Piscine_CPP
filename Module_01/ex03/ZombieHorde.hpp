/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:00:24 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/23 14:02:38 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP
#include <iostream>
#include "Zombie.hpp"

class ZombieHorde
{
private:
	int nbzombie;
	Zombie * Z;
public:
	ZombieHorde(const int n);
	~ZombieHorde();

	Zombie	newZombie();
	void	announce();
	void	deleteptr();
};

#endif