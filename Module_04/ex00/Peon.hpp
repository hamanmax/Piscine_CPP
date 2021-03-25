/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 11:02:25 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/25 11:31:01 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP
#include "Victim.hpp"
#include <iostream>

class Peon : virtual public Victim
{
	private:
		Peon();
	protected:
	public:
		Peon(std::string name);
		Peon(const Peon & copy);
		Peon & operator=(const Peon & op);
		~Peon();


		std::string get_name()const;
		void set_name(std::string const name);
		void getPolymorphed()const;
};

std::ostream& operator<<(std::ostream & os,const Peon & op);


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

#endif