/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 15:33:13 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/25 17:28:16 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <iostream>

class Enemy 
{
	private:
		Enemy();
	protected:
		int _hp;
		std::string _type;
	public:
		Enemy(Enemy const & copy);
		Enemy & operator=(Enemy const & op);
		virtual ~Enemy();

		Enemy(int hp, std::string const & type);

		std::string virtual getType() const;
		int getHP() const;
		virtual void takeDamage(int damage);
};

Enemy::Enemy(int hp, std::string const & type):_hp(hp),_type(type){}

Enemy::Enemy(Enemy const & copy){*this = copy;}

Enemy & Enemy::operator=(Enemy const & op){
	if (this != &op)
	{
		this->_type = op._type;
		this->_hp = op._hp;
	}
	return *this;
}

int Enemy::getHP() const{
	return(this->_hp);
}

std::string Enemy::getType() const {
	return(this->_type);
}

void Enemy::takeDamage(int damage)
{
	if (damage > 0)
		this->_hp -= damage;
}

Enemy::~Enemy(){}

#endif