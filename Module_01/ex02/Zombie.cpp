/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 17:16:06 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/23 13:43:10 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string get_type,std::string get_name): type(get_type),name(get_name)
{
	std::cout << "A L'aide on m'a mordu ............. CEEERRVVVVEEEEAAAUUXXX\n" << std::endl; 
	std::cout << "Bonjour ce zombie vous est fournis par notre partenaires ZVPN\n" << std::endl; 
	std::cout << "*Avec ZVPN Votre VPN a du mordant*\n" << std::endl; 
}

Zombie::~Zombie()
{
	std::cout << "Oh Fichtre je me meurt\n" << std::endl;
}
Zombie::Zombie()
{
}

void Zombie::advert()
{
	std::cout << "<" << name << ">" << "(" << type << ")" << ":\tMANGER CERVEAUXXXXXXXXXX\n" << std::endl;
}
