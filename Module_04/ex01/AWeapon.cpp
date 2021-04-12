/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:15:03 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 17:15:45 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage):_name(name),_apcost(apcost),_damage(damage){}

AWeapon::AWeapon(const AWeapon & copy):_name(copy._name),_apcost(copy._apcost),_damage(copy._damage){*this = copy;}

AWeapon & AWeapon::operator=(const AWeapon & op){
	
	if (this != &op)
	{
	this->_apcost = op._apcost;
	this->_damage = op._damage;
	this->_name = op._name;
	}
	return *this;
}

AWeapon::~AWeapon(){}

std::string AWeapon::get_name()const {
	return(this->_name);
}
int AWeapon::getAPCost() const{
	return(this->_apcost);
}

int AWeapon::getDamage() const{
	return(this->_damage);
}