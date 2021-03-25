/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 15:51:28 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/25 16:06:58 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP
#include <iostream>
#include "Enemy.hpp"

class SuperMutant : virtual public Enemy
{
	private:
		/*Arg*/
	protected:
		/*Arg*/
	public:
		SuperMutant();
		SuperMutant(SuperMutant const & copy);
		SuperMutant & operator=(SuperMutant const & op);
		~SuperMutant();

		void takeDamage(int damage);
};

SuperMutant::SuperMutant():Enemy(170,"Super Mutant"){
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & copy):Enemy(170,"Super Mutant"){*this = copy;}

SuperMutant & SuperMutant::operator=(SuperMutant const & op){
	if (this != &op)
	{
		this->_hp = op._hp;
		this->_type = op._type;
	}
	return *this;
}

void SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
	std::cout << this->_hp << std::endl;
}

SuperMutant::~SuperMutant(){
	std::cout << "Aaargh..." << std::endl;
}

#endif