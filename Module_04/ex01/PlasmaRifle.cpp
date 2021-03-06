/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:22:37 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 17:23:04 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():AWeapon("Plasma Rifle",5,21){}
 
PlasmaRifle::PlasmaRifle(PlasmaRifle const & copy):AWeapon(copy._name,copy._apcost,copy._damage){*this = copy;}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & op){
	if (this != &op)
	{
		this->_apcost = op._apcost;
		this->_damage = op._damage;
		this->_name = op._name;
	}
	return *this;
}

void PlasmaRifle::attack()const{
std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::~PlasmaRifle(){}