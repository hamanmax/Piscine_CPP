/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 15:13:39 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/25 15:16:11 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP
#include "AWeapon.hpp"

class PowerFist : virtual public AWeapon
{
	private:
		/*Arg*/
	protected:
		/*Arg*/
	public:
		PowerFist();
		PowerFist(const PowerFist & copy);
		PowerFist & operator=(const PowerFist & op);
		~PowerFist();

		void attack() const;
};

PowerFist::PowerFist():AWeapon("Power Fist",8,50){}

PowerFist::PowerFist(const PowerFist & copy):AWeapon("Power Fist",8,50){*this = copy;}

PowerFist & PowerFist::operator=(const PowerFist & op){
	if (this != &op)
	{
		this->_apcost = op._apcost;
		this->_damage = op._damage;
		this->_name = op._name;
	}
	return *this;
}

PowerFist::~PowerFist(){}

void PowerFist::attack() const{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

#endif