/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BigFuckingGun9000.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:15:22 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 17:15:39 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "BigFuckingGun9000.hpp"

BigFuckingGun9000::BigFuckingGun9000():AWeapon("BFG-9000",35,180){}
 
BigFuckingGun9000::BigFuckingGun9000(BigFuckingGun9000 const & copy):AWeapon(copy._name,copy._apcost,copy._damage){*this = copy;}

BigFuckingGun9000 & BigFuckingGun9000::operator=(BigFuckingGun9000 const & op){
	if (this != &op)
	{
		this->_apcost = op._apcost;
		this->_damage = op._damage;
		this->_name = op._name;
	}
	return *this;
}

void BigFuckingGun9000::attack()const{
std::cout << "* Splarg Splarg Splarg *" << std::endl;
}

BigFuckingGun9000::~BigFuckingGun9000(){}
