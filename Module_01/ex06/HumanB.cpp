/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 16:07:20 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/17 18:21:47 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str):_name(str){}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
		std::cout << this->_name << " attacks with his " << M4_A4->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& arme)
{
	M4_A4 = &arme;
}