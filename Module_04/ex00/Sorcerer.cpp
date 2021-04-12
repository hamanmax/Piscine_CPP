/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:46:10 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 14:54:23 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include <iostream>

std::ostream& operator<<(std::ostream & os,const Sorcerer & dt){
	std::string op = "I am " + dt.get_name() + ", " + dt.get_title() + ", and I like ponies!";
	os << op << std::endl;
	return os;
}

std::string Sorcerer::get_name()const {
	return(this->_name);
}
void Sorcerer::set_name(std::string const name){
	this->_name = name;
}

std::string Sorcerer::get_title()const {
	return(this->_title);
}

void Sorcerer::set_title(std::string const title) {
	this->_title = title;
}

Sorcerer::Sorcerer(std::string name,std :: string title):_name(name),_title(title){
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer & copy){*this = copy;}

Sorcerer & Sorcerer::operator=(const Sorcerer & op){
	if (this != &op)
	{
		this->_name = op._name;
		this->_title = op._name;
	}
	return *this;
}

Sorcerer::~Sorcerer(){
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

void Sorcerer::introduce(){
		std::cout<<"I am " << this->_name << ", " << this->_title << ", and I like ponies!" << std::endl;
}

void Sorcerer::polymorph(Victim const &victim) const{
	victim.getPolymorphed();
}
