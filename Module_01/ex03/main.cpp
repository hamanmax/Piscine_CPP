/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:07:13 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/23 14:12:32 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

void ZombieHordOnTheStack()
{
	ZombieHorde Zhorde = ZombieHorde(10);


	std::cout <<"ENTREE DANS LA FONCTION STACK\n" << std::endl;
	Zhorde.announce();
}

void ZombieHordOnHeap()
{
	ZombieHorde *Zhorde = new ZombieHorde(10);

	std::cout <<"ENTREE DANS LA FONCTION HEAP\n" << std::endl;
	Zhorde->announce();
	delete Zhorde;
}
int main()
{
	srand(time(NULL));
	ZombieHordOnTheStack();
	ZombieHordOnHeap();
	return 0;
}
