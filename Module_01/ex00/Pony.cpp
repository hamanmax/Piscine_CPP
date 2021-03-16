/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 14:18:48 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/16 17:09:28 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string get_name, std::string get_color, int get_age, int get_height, int get_weight): 
_name(get_name), _color(get_color), _age(get_age), _height(get_height), _weight(get_weight)
{
	std::cout << "Creation de Pony" << std::endl;
}
Pony::~Pony()
{
	std::cout << "Destruction de Pony" << std::endl;
}
Pony::Pony(){
}

void	Pony::display_my_poney()
{
	std::cout << "NAME:\t" << _name << std::endl  << "COLOR:\t" << _color << std::endl << "AGE:\t" << _age << std::endl << "HEIGHT:\t" << _height << std::endl << "WEIGHT:\t" << _weight << std::endl;
}

int Pony::get_age(void) const {
	return(_age);
}
int Pony::set_age(int i) {
	_age = i;
	return(_age);
}
int Pony::get_weight(void) const {
	return(_weight);
}
int Pony::set_weight(int i) {
	_weight = i;
	return(_weight);
}
int Pony::get_height(void) const {
	return(_weight);
}
int Pony::set_height(int i) {
	_height = i;
	return(_height);
}
std::string Pony::get_name(void) const{
	return(_name);
}
std::string Pony::set_name(std::string str){
	return(_name);
}
std::string Pony::get_color(void) const{
	return(_color);
}
std::string Pony::set_color(std::string str){
	return(_color);
}