/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 17:16:06 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/17 11:46:12 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string get_type,std::string get_name): type(get_type),name(get_name)
{
}

Zombie::~Zombie()
{
}
Zombie::Zombie()
{
}

void Zombie::advert()
{
	std::cout << "<" << name << ">" << "(" << type << ")" << ":\tMANGER CERVEAUXXXXXXXXXX" << std::endl;
}

void Zombie::announce()
{
	std::cout << "Hey I am " << name << " Zombie of type " << type << "... BRAINSSSS" << std::endl;
}