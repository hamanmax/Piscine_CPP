/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Farmer.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:07:36 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 15:11:25 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Farmer.hpp"

std::ostream& operator<<(std::ostream & os,const Farmer & op)
{
	std::string ret = "I am " + op.get_name() + ", and I like Cow!";
	os << ret << std::endl;
	return os;
}

std::string Farmer::get_name() const {
	return(this->_name);
}

void Farmer::set_name(std::string const name){
	this->_name = name;
}

Farmer::Farmer(std::string name):Victim(name){
	std::cout << "Wheat Wheat." << std::endl;
}

Farmer::Farmer(const Farmer & copy):Victim(copy._name){*this = copy;}

Farmer & Farmer::operator=(const Farmer & op){
	if (this != &op)
	{
		this->_name = op._name;
	}
	return *this;
}

Farmer::~Farmer(){
	std::cout << "Argggg.." << std::endl;
}

void Farmer::getPolymorphed()const 
{
	std::cout << this->_name << " has been turned into a scarecrow!" << std::endl;
}
