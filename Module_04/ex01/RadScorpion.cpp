/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:24:12 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 17:25:20 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion():Enemy(80,"RadScorpion"){
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & copy):Enemy(copy._hp,copy._type){*this = copy;}

RadScorpion & RadScorpion::operator=(RadScorpion const & op){
	if (this != &op)
	{
		this->_hp = op._hp;
		this->_type = op._type;
	}
	return *this;
}

RadScorpion::~RadScorpion(){
	std::cout << "* SPROTCH *" << std::endl;
}