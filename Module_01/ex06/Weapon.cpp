/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 16:07:33 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/17 17:39:26 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str): _type(str)
{
}

Weapon::~Weapon()
{
}

Weapon::Weapon()
{
}

std::string Weapon::getType()
{
	std::cout << _type << std::endl;
	return(_type);
}

void Weapon::setType(std::string str)
{
	_type = str;
}