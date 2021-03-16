/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:03:41 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/16 09:55:15 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact(void)
{
	this->last_name = "NULL";
	return;
}

Contact::~Contact()
{
	return;
}

void Contact::add_contact(void)
{
	std::cout << "FIRST NAME\t\t:";
	std::getline(std::cin,this->first_name);
	std::cout << "LAST NAME\t\t:";
	std::getline(std::cin,this->last_name);
	std::cout << "NICK NAME\t\t:";
	std::getline(std::cin,this->nick_name);
	std::cout << "LOGIN\t\t\t:";
	std::getline(std::cin,this->login);
	std::cout << "EMAIL ADDRESS\t\t:";
	std::getline(std::cin,this->email_address);
	std::cout << "POSTAL ADDRESS\t\t:";
	std::getline(std::cin,this->postal_address);
	std::cout << "PHONE NUMBER 0123456789\t:";
	std::getline(std::cin,this->phone_number);
	std::cout << "BIRTH DATE DD/MM/YYYY\t:";
	std::getline(std::cin,this->birthday_date);
	std::cout << "FAVORITE MEAL\t\t:";
	std::getline(std::cin,this->favorite_meal);
	std::cout << "UNDERWEAR COLOR\t\t:";
	std::getline(std::cin,this->underwear_color);
	std::cout << "DARKEST SECRET\t\t:";
	std::getline(std::cin,this->darkest_secret);
}
void Contact::print_contact_less(void)
{
	if (first_name.size() > 10)
	{ 
		for (int i = 0; i < 9 ; ++i)
			std::cout << first_name[i];
		std::cout << ".|";
	}
	else
	{
		for(int i = 10 - first_name.size(); i > 0;i--)
			std::cout << ' ';
		std::cout << first_name << "|";
	}
	if (last_name.size() > 10)
	{
		for (int i = 0; i < 9 ; ++i)
			std::cout << last_name[i];
		std::cout << ".|";
	}
	else
	{
		for(int i = 10 - last_name.size(); i > 0;--i)
			std::cout << ' ';
		std::cout << last_name << "|";
	}
	if (nick_name.size() > 10)
	{
		for (int i = 0; i < 9 ; ++i)
			std::cout << nick_name[i];
		std::cout << ".|";
	}
	else
	{
		for(int i = 10 - nick_name.size(); i > 0;--i)
			std::cout << ' ';
		std::cout << nick_name << "|";
	}
}
void Contact::print_contact(void)
{
	
	std::cout << "FIRST NAME\t\t:" << first_name << std::endl;
	std::cout << "LAST NAME\t\t:" << last_name << std::endl;
	std::cout << "NICK NAME\t\t:" << nick_name << std::endl;
	std::cout << "LOGIN\t\t\t:" << login << std::endl;
	std::cout << "POSTAL ADDRESS\t\t:" << postal_address << std::endl;
	std::cout << "EMAIL ADDRESS\t\t:" << email_address << std::endl;
	std::cout << "PHONE NUMBER\t\t:" << phone_number << std::endl;
	std::cout << "BIRTH DATE\t\t:" << birthday_date << std::endl;
	std::cout << "FAVOURITE MEAL\t\t:" << favorite_meal << std::endl;
	std::cout << "UNDERWEAR COLOR\t\t:" << underwear_color << std::endl;
	std::cout << "DARKEST SECRET\t\t:" << darkest_secret << std::endl;
}
std::string Contact::getlast_name(void) const
{
	return(this->last_name);
}