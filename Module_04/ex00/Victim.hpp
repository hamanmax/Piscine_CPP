/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 10:46:49 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/25 13:13:04 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <iostream>

class Victim 
{
	private:
		Victim();
	protected:
		std::string _name;
	public:
		Victim(std::string name);
		Victim(const Victim & copy);
		Victim & operator=(const Victim & op);
		~Victim();

		void introduce();
		virtual void getPolymorphed() const;
		std::string get_name()const;
		void set_name(std::string const name);
};

std::ostream& operator<<(std::ostream & os,const Victim & op);


std::ostream& operator<<(std::ostream & os,const Victim & op)
{
	std::string ret = "I am " + op.get_name() + ", and I like otters!";
	os << ret << std::endl;
	return os;
}

std::string Victim::get_name() const {
	return(this->_name);
}

void Victim::set_name(std::string const name){
	this->_name = name;
}

Victim::Victim(std::string name):_name(name){
	std::cout << "Some random victime called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim & copy){*this = copy;}

Victim & Victim::operator=(const Victim & op){
	if (this != &op)
		this->_name = op._name;
	return *this;
}

Victim::~Victim(){
	std::cout << "Victime " << this->_name << " just died for no apparent reason!" << std::endl;
}

void Victim::introduce(){
		std::cout<< "I am " << this->_name << ", and I like otters!" << std::endl;
}

void Victim::getPolymorphed()const {
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

#endif
