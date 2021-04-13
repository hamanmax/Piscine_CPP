/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:27:24 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/13 10:53:37 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(Character const & copy):_name(copy._name){
	this->_size = copy._size;
	for(int i = 0;i < this->_size;i++)
	{
		this->_inventory[i] = copy._inventory[i]->clone();
	}
}

Character &Character::operator=(const Character &copy) {
	_name = copy._name;
	for (int i = 0; i < this->_size; i++) {
		delete this->_inventory[i];
	}
	_size = copy._size;
	for (int i = 0; i < copy._size; i++) {
		this->_inventory[i] = copy._inventory[i]->clone();
	}
	return *this;
}

Character::~Character(){
	for (int i = 0; i < this->_size; i++)
		delete this->_inventory[i];

}

Character::Character(std::string name):_name(name),_size(0){
	memset(_inventory, 0, 4);
}

std::string const & Character::getName()const {
	return(this->_name);
}

void Character::equip(AMateria* m){
	if (this->_size < 4) 
		this->_inventory[this->_size++] = m;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < this->_size) {
		this->_inventory[idx] = 0;
		this->_size--;
	}
}

void Character::use(int idx, ICharacter& target){
	this->_inventory[idx]->use(target);
}
