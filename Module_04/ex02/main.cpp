/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 14:21:32 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/26 18:12:02 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	int i;
	ISpaceMarine *bob = new TacticalMarine;
	ISpaceMarine *joe = new AssaultTerminator;
	ISpaceMarine *jeanmi;
	ISquad* vlc = new Squad;
	//vlc->push(bob);
	//vlc->push(joe);
	//vlc->push(joe);
	std::cout << vlc->getCount() << std::endl;
	jeanmi = vlc->getUnit(0);
	jeanmi->battlecry();
	delete bob;
	delete joe;
	delete vlc;
}