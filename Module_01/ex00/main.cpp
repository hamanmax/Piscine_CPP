/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 14:27:42 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/23 11:57:55 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheStack()
{
	Pony pony = Pony("Robert","Blanc",4,25,75);
	const int age = pony.get_age();
	const int weight = pony.get_weight();
	const int height = pony.get_height();

	std::cout << "Ce pony est sur la stack" << std::endl;
	std::cout << "### Information sur le Pony ###\n" << std::endl;
	std::cout << "####################" << std::endl;
	pony.display_my_poney();
	std::cout << "####################" << std::endl;
	pony.display_my_poney();
	std::cout << "Ce pony Evolue" << std::endl;
	pony.set_age(age + 1);
	pony.set_weight(weight + 6);
	pony.set_height(height + 2);
	std::cout << "### Information sur le Pony ###\n" << std::endl;
	std::cout << "####################" << std::endl;
	pony.display_my_poney();
	std::cout << "####################" << std::endl;
}

void ponyOnTheHeap()
{
	Pony *pony = new Pony("Jaques","Noir",15,25,75);
	const int age = pony->get_age();
	const int weight = pony->get_weight();
	const int height = pony->get_height();

	std::cout << "Ce pony est sur la stack\n" << std::endl;
	std::cout << "### Information sur le Pony ###\n" << std::endl;
	std::cout << "####################" << std::endl;
	pony->display_my_poney();
	std::cout << "####################" << std::endl;
	std::cout << "Ce pony Evolue" << std::endl;
	pony->set_age(age + 10);
	pony->set_weight(weight + 10);
	pony->set_height(height + 5);
	pony->set_name(pony->get_name() += " Le vieux");
	std::cout << "### Information sur le Pony ###\n" << std::endl;
	std::cout << "####################" << std::endl;
	pony->display_my_poney();
	std::cout << "####################" << std::endl;
	delete pony;
}

int main()
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return 0;
}
