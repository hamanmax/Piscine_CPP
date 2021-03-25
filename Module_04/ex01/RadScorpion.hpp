/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 16:08:04 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/25 16:50:11 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP
#include <iostream>
#include "Enemy.hpp"

class RadScorpion : virtual public Enemy
{
	private:
		/*Arg*/
	protected:
		/*Arg*/
	public:
		RadScorpion();
		RadScorpion(RadScorpion const & copy);
		RadScorpion & operator=(RadScorpion const & op);
		~RadScorpion();

};

RadScorpion::RadScorpion():Enemy(80,"RadScorpion"){
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & copy):Enemy(80,"RadScorpion"){*this = copy;}

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


#endif