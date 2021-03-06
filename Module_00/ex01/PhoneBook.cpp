/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 12:50:33 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/16 11:33:55 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	Contact contact[8];

	(void)argc;
	(void)argv;
	std::string cmd;
	while (std::getline(std::cin,cmd))
	{
		if (cmd == "EXIT")
			return(0);
		else if (cmd == "ADD")
		{
			if (i >= 8)
			{
				std::cout << "PHONEBOOK IS INDEX WILL BE REPLACE FROM THE FIRST" << std::endl;
				i = 0;
			}
			contact[i].add_contact();
			contact->setnbcontact(i);
			i++;
		}
		else if (cmd == "SEARCH")
		{
			if (i == 0)
			{
				std::cout << "SEARCH NEED AT LEAST ONE ENTRY" << std::endl;
				continue ;
			}
			std::cout << "     INDEX| FIRSTNAME|  LASTNAME|  NICKNAME|" << std::endl;
			for(int i = 0; i < 8;i++)
			{
				if (i <= contact->getnbcontact())
				{
					std::cout << "         " << i << "|";
					contact[i].print_contact_less();
					std::cout << std::endl;
				}
			}
			j = 0;
			std::cout << "CHOSE INDEX :";
			std::cin >> j;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cout << "WRONG INDEX" << std::endl;
			}
			else if ((j >= 0 && j <= 7) && contact->getnbcontact() >= j)
			{
				contact[j].print_contact();
			}
			else
				std::cout << "WRONG INDEX :" << std::endl;
			std::getline(std::cin,cmd);
		}
		else
			std::cout << "COMMAND NOT FOUND" << std::endl;
	}
	return (0);
}