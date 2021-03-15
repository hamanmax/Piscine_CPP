/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 12:49:08 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/15 20:45:43 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
#include <iostream>

class Contact
{
private:

public:

	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;
	void add_contact(void);
	void print_contact(void);
	void print_contact_less(void);
	Contact(void);
	~Contact(void);
};

// birthday date, favorite_meal, underwear_color et darkest secret.

#endif