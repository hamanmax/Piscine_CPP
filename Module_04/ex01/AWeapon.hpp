/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aweapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:16:31 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/25 15:11:08 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP
#include <iostream>

class AWeapon 
{
	private:
		AWeapon();
	protected:
		std::string	_name;
		int			_apcost;
		int			_damage;
	public:
		AWeapon(const AWeapon & copy);
		AWeapon & operator=(const AWeapon & op);
		virtual ~AWeapon();

		AWeapon(std::string const & name, int apcost, int damage);

		std::string virtual get_name() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
};

AWeapon::AWeapon(){}

AWeapon::AWeapon(std::string const & name, int apcost, int damage):_name(name),_apcost(apcost),_damage(damage){}

AWeapon::AWeapon(const AWeapon & copy){*this = copy;}

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

#endif