/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:45:34 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 14:51:35 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

std::ostream& operator<<(std::ostream & os,const Peon & op)
{
	std::string ret = "I am " + op.get_name() + ", and I like otters!";
	os << ret << std::endl;
	return os;
}

std::string Peon::get_name() const {
	return(this->_name);
}

void Peon::set_name(std::string const name){
	this->_name = name;
}

Peon::Peon(std::string name):Victim(name){
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon & copy):Victim(copy._name){*this = copy;}

Peon & Peon::operator=(const Peon & op){
	if (this != &op)
	{
		this->_name = op._name;
	}
	return *this;
}

Peon::~Peon(){
	std::cout << "Bleuark.." << std::endl;
}

void Peon::getPolymorphed()const 
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}
