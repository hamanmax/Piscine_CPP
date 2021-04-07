/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 12:04:24 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/01 13:52:48 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

class AMateria;

class Character : public ICharacter
{
	private:
		AMateria *_inventory[4];
		std::string _name;
		size_t _size;
	protected:
		/*Arg*/
	public:
		Character();
		Character(Character const & copy);
		Character & operator=(Character const & op);
		~Character();

		Character(std::string name);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

Character::Character(Character const & copy){*this = copy;}

Character & Character::operator=(Character const & op){
	for(int i = 0;i < 4;i++)
	{
		this->_inventory[i] = op._inventory[i];
	}
	this->_name = op._name;
	return *this;
}

Character::~Character(){
	for (int i = 0; i < 4; i++) {
		delete this->_inventory[i];
		this->_inventory[i] = 0;
	}
}

Character::Character(std::string name):_name(name){
	for (int i = 0;i < 4;i++){
		this->_inventory[i] = NULL;
	}
}

std::string const & Character::getName()const {
	return(this->_name);
}

void Character::equip(AMateria* m){
	if (this->_size < 4) 
		this->_inventory[this->_size++] = m;
}

void Character::unequip(int idx)
{
	if (this->_inventory[idx] != NULL)
	{
		delete this->_inventory[idx];
		this->_inventory[idx] = NULL;
	}
}
void Character::use(int idx, ICharacter& target){
	this->_inventory[idx]->use(target);
	
}

#endif