/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Guard.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:57:01 by mhaman            #+#    #+#             */
/*   Updated: 2021/04/12 15:57:02 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */



#include "Guard.hpp"

std::ostream& operator<<(std::ostream & os,const Guard & op)
{
	std::string ret = "I am " + op.get_name() + ", and I like my Sword!";
	os << ret << std::endl;
	return os;
}

std::string Guard::get_name() const {
	return(this->_name);
}

void Guard::set_name(std::string const name){
	this->_name = name;
}

Guard::Guard(std::string name):Victim(name){
	std::cout << "Ready to serve." << std::endl;
}

Guard::Guard(const Guard & copy):Victim(copy._name){*this = copy;}

Guard & Guard::operator=(const Guard & op){
	if (this != &op)
	{
		this->_name = op._name;
	}
	return *this;
}

Guard::~Guard(){
	std::cout << "For the king..." << std::endl;
}

void Guard::getPolymorphed()const 
{
	std::cout << this->_name << " has been turned into a dummy!" << std::endl;
}
