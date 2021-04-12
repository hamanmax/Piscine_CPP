/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:17:41 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 17:18:43 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

std::ostream& operator<<(std::ostream & os, Character const & ch)
{
	AWeapon * tutu = ch.getWeapon();
	if (ch.getWeapon() != NULL)
		os << ch.getName() << " has " << ch.getAP() << " AP and wields a " << tutu->get_name() << std::endl;
	else
		os << ch.getName() << " has " << ch.getAP() << " AP and is unarmed" << std::endl;
	return os;
}
Character::Character(Character const & copy):_name(copy._name),_action_points(copy._action_points),_weapon(NULL){*this = copy;}

Character::Character(std::string const & name):_name(name),_action_points(40),_weapon(NULL){};

Character & Character::operator=(Character const & op){
	if (this != &op)
	{
		this->_name = op._name;
		this->_weapon = op._weapon;
		this->_action_points = op._action_points;
	}
	return *this;
}

Character::~Character(){}

AWeapon *Character::getWeapon() const{
	return(this->_weapon);}
std::string Character::getName() const{
	return(this->_name);}
int	Character::getAP() const{
	return(this->_action_points);}

void Character::recoverAP(){
	this->_action_points += 10;
	if (this->_action_points > 40)
		this->_action_points = 40;
}

void Character::attack(Enemy *Enemy){
	if (this->_weapon != NULL)
	{
		if (this->_action_points >= this->_weapon->getAPCost())
		{
			this->_action_points -= this->_weapon->getAPCost();
			std::cout << this->_name << " attacks " << Enemy->getType() << " with a " << this->_weapon->get_name() << std::endl;
			this->_weapon->attack();
			Enemy->takeDamage(this->_weapon->getDamage());
		}
		else
			std::cout << this->_name << " has not enought AP for this action\n";
	}
}

void Character::equip(AWeapon * Arme){this->_weapon = Arme;};