/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:19:08 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/13 13:44:57 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type):_hp(hp),_type(type){}

Enemy::Enemy(Enemy const & copy):_hp(copy._hp),_type(copy._type){*this = copy;}

Enemy & Enemy::operator=(Enemy const & op){
	if (this != &op)
	{
		this->_type = op._type;
		this->_hp = op._hp;
	}
	return *this;
}

int Enemy::getHP() const{
	return(this->_hp);}
std::string Enemy::getType() const {
	return(this->_type);}

void Enemy::takeDamage(int damage)
{
	if (damage > 0)
		this->_hp -= damage;
	if (this->_hp <= 0)
		delete this;
}

Enemy::~Enemy(){
}
