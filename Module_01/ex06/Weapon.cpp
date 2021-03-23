/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 16:07:33 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/23 15:01:26 by mhaman           ###   ########lyon.fr   */
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

std::string Weapon::getType()const 
{
	return(this->_type);
}

void Weapon::setType(std::string str)
{
	this->_type = str;
}